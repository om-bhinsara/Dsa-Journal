#include<iostream>
using namespace std;
#include<vector>

int main()
{
    int m, n;
    cout<<"Enter row and col sizes: ";
    cin>>m>>n; 

    vector < vector <int> >mat(m, vector <int> (n));

    cout<<"Enter elements: "<<endl;
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout<<"Element mat["<<i<<"]["<<j<<"]: ";
            cin>>mat[i][j];
        }
    }

    cout<<"Matrix is: "<<endl;
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
           cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"Enter key element that you want to search: ";
    int key; 
    cin>>key; 
    // m row size, n col size
    int start=0, end=(mat.size())*(mat[0].size());
    while(start<=end)
    {
        int mid=start+(end-start)/2; 
        int row_index=mid/m;
        int col_index=mid%m;

        if(mat[row_index][col_index]==key)
        {
            cout<<"Key is found at mat["<<row_index<<"]["<<col_index<<"]";
            return 0;
        }
        else if(mat[row_index][col_index]<key)
        {
            start=mid+1; 
        }
        else 
        {
            end=mid-1;
        }
    }
    
    cout<<"Oops, key is not found!";
    return 0; 
}