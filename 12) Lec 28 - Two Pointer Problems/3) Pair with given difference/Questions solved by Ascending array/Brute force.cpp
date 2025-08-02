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

    // sorting of array
    sort(v.begin(), v.end());

    for(int i=0; i<v.size()-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(v[j]-v[i]==diff)
            {
                cout<<v[j]<<" "<<v[i]; 
                return 0;
            }
        }
    }
    cout<<"No matching pair found!"; 
    return 0; 
}