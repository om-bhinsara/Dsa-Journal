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

    int total_sum1=INT_MIN, total_sum=0;

    for(int i=0; i<nums.size(); i++)
    {
        total_sum=0;
        for(int j=0; j<nums[0].size(); j++)
        {
            total_sum+=nums[i][j];
        }
        total_sum1=max(total_sum1, total_sum);
    }

    cout<<endl<<total_sum1;
    return 0; 
}