#include<iostream>
#include<vector>
using namespace std; 

int main()
{
    cout<<"Enter array size: "; 
    int n; 
    cin>>n; 
    vector <int> arr(n);

    if (n < 4) // Ensure at least 4 elements
    {
        cout << "Error: At least 4 elements are required to find a quadruplet." << endl;
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

    // Brute-force 4-sum
    for(int i=0; i<n-3; i++)
    {
        for(int j=i+1; j<n-2; j++)
        {
            for(int k=j+1; k<n-1; k++)
            {
                for(int l=k+1; l<n; l++)
                {
                    if(arr[i]+arr[j]+arr[k]+arr[l]==x)
                    {
                        cout<<1;  // Quadruplet found
                        return 0;
                    }
                }
            }
        }
    }
    cout << 0; // No quadruplet found
    return 0;
}