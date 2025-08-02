#include<iostream>
#include<vector>
using namespace std;

int main()
{
    cout<<"Enter array row and col size: ";
    int n, m; 
    cin>>m>>n; 

    vector < vector <int> > nums(m, vector <int> (n));

    cout<<"Enter array elements: ";
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        cin>>nums[i][j];
    }

    for(int i=0; i<nums.size(); i++)
    {
        int start=0, end=nums[0].size()-1; 
        while(start<end)
        {
            swap(nums[i][start], nums[i][end]);
            start++, end--;
        }
    }
    cout<<endl; 

    cout<<"Reversed row of matrix: "<<endl;
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout<<nums[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0; 
}