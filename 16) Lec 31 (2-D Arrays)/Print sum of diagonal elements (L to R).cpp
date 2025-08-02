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

    int total_sum=0;

    for(int i=0; i<nums.size(); i++)
    {
        for(int j=0; j<nums[0].size(); j++)
        {
            if(i==j)
            total_sum+=nums[i][j];
        }
    }

    cout<<"Matrix is : "<<endl;
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        cout<<nums[i][j]<<" ";

        cout<<endl;
    }


    cout<<endl<<"Sum of diagonal is "<<total_sum;
    return 0; 
}