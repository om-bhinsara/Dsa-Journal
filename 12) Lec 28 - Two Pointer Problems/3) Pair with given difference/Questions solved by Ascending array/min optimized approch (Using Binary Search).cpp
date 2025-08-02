#include<iostream>
#include<vector>
#include<algorithm>
using namespace std; 

int main()
{
    int n; 
    cout<<"Enter array size: "; 
    cin>>n; 
    vector <int> v(n);

    for(int i=0; i<n; i++)
    {
        cout<<"Enter element "<<i+1<<" : ";
        cin>>v[i];
    }

    cout<<"Enter diff: ";
    int diff; 
    cin>>diff; 

    sort(v.begin(), v.end()); 
    if(diff==0)
    {
        cout<<1<<" "<<1; 
        return 0;
    }
    for(int i=0; i<v.size()-1; i++)
    {
        int start=i+1, end=v.size()-1;
        int x=diff+v[i]; 

        while(start<=end)
        {
            int mid=start+(end-start)/2; 
            if(v[mid]==x)
            {
                cout<<v[i]<<" "<<v[mid]; 
                return 0; 
            }
            else if(v[mid]<x)
            {
                start=mid+1; 
            }
            else
            {
                end=mid-1;
            }
        }
    }
    return 0;
}