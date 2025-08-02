#include<iostream>
#include<vector> 
using namespace std; 

int main()
{
    int n; 
    cout<<"Enter array size: ";
    cin>>n;

    vector <int> height(n);
    cout<<"Enter building's hegiht: ";
    for(int i=0; i<n; i++)
    {
        cin>>height[i];
    }
    vector <int> left_max(height.size()), right_max(height.size());
    

    return 0;
}