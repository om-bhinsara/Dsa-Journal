#include<iostream>
#include<vector>
using namespace std;

int main()
{
    cout<<"Enter array size : ";
    int n; 
    cin>>n; 
    vector <int> arr(n);

    if(n<=0)// To handle edge cases, it prevents errors Ex. segmentation falult
    {
        cout<<"Enter valid size for the array!";
        return 0;
    }
    cout<<"Enter array element: "; 
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    // Find max building index
    int max_index=0, max_height=arr[0];
    for(int i=1; i<n; i++)
    {
        if(max_height<arr[i])
        {
            max_height=arr[i];
            max_index=i; 
        }
    }

    // Find water unit from 0 to max_building
    int water=0, left_height=0; 
    for(int i=0; i<max_index; i++)
    {
        if(left_height-arr[i]>0)
        {
            water+=left_height-arr[i];
        }
        left_height=max(arr[i], left_height);
    }
    
    // Find water unit from max building to n-1
    int right_height=0; 
    for(int i=n-1; i>=max_index; i--)
    {
        if(right_height-arr[i]>0)
        {
            water+=right_height-arr[i];
        }
            right_height=max(arr[i], right_height);
    }
    
    cout<<endl;
    cout << "\nTotal trapped water: " << water << " units." << endl; 
    return 0; 
}