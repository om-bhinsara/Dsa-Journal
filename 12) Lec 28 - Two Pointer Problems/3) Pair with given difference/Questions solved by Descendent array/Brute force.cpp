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

    sort(v.begin(), v.end(), greater <int> ()); 
    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(v[i]-v[j]==diff)
            {
                cout<<v[i]<<" "<<v[j]; 
                return 0; 
            }
        }
    }
    return 0;
}