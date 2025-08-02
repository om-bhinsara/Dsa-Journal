#include<iostream>
#include<vector>
#include<algorithm>
using namespace std; 

int main()
{
    cout<<"Enter array size: "; 
    int n; 
    cin>>n; 
    vector <int> arr(n);

    
    // Corrected edge case: At least 3 elements needed for a triplet
    if(n<3)
    {
        cout << "Error: At least 3 elements are required to form a triplet." << endl;
        return 0;
    }

    cout<<"Enter array elements: "; 
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter x: ";
    int x; 
    cin>>x; 

    // sort the array to make binary search applicable 
    sort(arr.begin(),arr.end());
    int i,j, start, end, mid, ans;
    for(i=0; i<n-2; i++)
    {
        for(j=i+1; j<n-1; j++)
        {
            start=j+1;
            end=n-1; 
            ans=x-(arr[i]+arr[j]); // x-arr[i]-arr[j]
            
            // Binary search
            while(start<=end)
            {
                mid=start+(end-start)/2; 
                if(arr[mid]==ans)
                {
                    cout<<"1"; 
                    return 0; 
                }
                else if(arr[mid]>ans)
                    end=mid-1;
                else
                    start=mid+1; 
            }
        }
    }
    cout<<"Not found";
    return 0; 
}