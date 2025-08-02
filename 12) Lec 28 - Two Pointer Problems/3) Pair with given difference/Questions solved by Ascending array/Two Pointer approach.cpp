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

    int start=v.size()-1, end=v.size()-2; 
    while(end>=0)
    {
        if(v[start]-v[end]==diff)
        {
            cout<<v[start]<<" "<<v[end];
            return 0; 
        }
        else if(v[start]-v[end]>diff)
        {
            start--; 
        }
        else
        {
            end--; 
        }
    }
    cout<<"Element pair didn't found!"; 
    return 0;
}