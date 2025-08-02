#include<iostream>
#include<vector>
using namespace std; 

int main()
{
    cout<<"Enter array size: "; 
    int n; 
    cin>>n; 
    vector <int> arr(n);

    cout<<"Enter array elements: "; 
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter x: ";
    int x; 
    cin>>x; 

    for(int i=0; i<n-2; i++)
    {
        for(int j=i+1; j<n-1; j++)
        {
            for(int k=j+1; k<n; k++)
            {
                if(arr[i]+arr[j]+arr[k]==x)
                {
                    cout<<1; 
                    return 0;
                }
            }
        }
    }
    return 0;
}