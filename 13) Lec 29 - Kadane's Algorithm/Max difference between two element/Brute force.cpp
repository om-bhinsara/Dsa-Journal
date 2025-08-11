#include<iostream>
#include<vector>
using namespace std;

/*
CONSTRAINTS: 
we have to substract bigger index value with lower index value....

*/
int main()
{
    int n;
    cout<<"Enter size of the array: ";
    cin>>n; 

    vector <int> arr(n);

    cout<<"Enter elements of the array: ";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    int maxi=INT_MIN;
    for(int i=0; i<arr.size()-1; i++)
    {
        for(int j=i+1; j<arr.size(); j++)
        {
            if(arr[j]>arr[i]) // without if condition loop will check for every value 
            {
                maxi=max(maxi, arr[j]-arr[i]);
            }
        }
    }

    cout<<"Max difference between two elements: "<<maxi; 

    return 0;
}