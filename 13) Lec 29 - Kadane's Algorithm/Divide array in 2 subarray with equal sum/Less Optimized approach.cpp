#include<iostream>
#include<vector> 
using namespace std; 

int main()
{
    int n;
    cout<<"Enter size of the array: ";
    cin>>n; 

    vector <int> arr(n);

    cout<<"Enter array element: ";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    for(int i=0; i<arr.size()-1; i++)
    {
        int sum1=0, sum2=0; 

        for(int j=0; j<=i; j++) // for left part sum
        {
            sum1=sum1+arr[j];
        }

        for(int k=i+1; k<arr.size(); k++) // for right sum
        {
            sum2=sum2+arr[k];
        }

        if(sum1==sum2)
        {
            cout<<"Yes, equal sum subarray exists..";
            return 0;
        }
    }  
    cout<<"No, subarray with equal sum doesn't exists..";

    return 0; 
}