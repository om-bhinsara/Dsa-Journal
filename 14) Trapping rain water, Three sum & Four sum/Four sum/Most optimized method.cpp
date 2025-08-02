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
    
    // Corrected edge case: At least 4 elements needed for a 4-sum
    if(n<4)
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
    for(i=0; i<n-3; i++)
    {
        for(j=i+1; j<n-2; j++)
        {
            int start=j+1, end=n-1; 
            while(start<end)
            {
                if(arr[i]+arr[j]+arr[start]+arr[end]==x)
                {
                    cout<<"1";
                    return 0; 
                }
                else if(arr[i]+arr[j]+arr[start]+arr[end]<x)
                {
                    start++;
                }
                else
                {
                    end--; 
                }
            }
        }
    }
    // If no solution found
    cout << "Not found";
    return 0; 
}