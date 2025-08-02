#include<iostream>
#include<vector>
using namespace std; 

bool divide_subarray(vector <int> arr)
{
    int Total_sum=0, n=arr.size();
    for(int i=0; i<n; i++)  // for total sum of array
    {
        Total_sum+=arr[i];
    }

    int prefix_sum, Right_sum; 
    for(int i=0; i<n-1; i++)  // compare leftside (prefix) array sum with rightside array sum
    {
        prefix_sum+=arr[i];
        Right_sum=Total_sum-prefix_sum; 

        if(Right_sum==prefix_sum)
        {
            return 1;
        }
    }
    return 0;
}

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

    cout<<endl;
    if(divide_subarray(arr)==1)
        cout<<"Yes, we can divide array in two subarray: ";
    else
        cout<<"No, we can't divide array in two subarray: ";

    return 0;
}