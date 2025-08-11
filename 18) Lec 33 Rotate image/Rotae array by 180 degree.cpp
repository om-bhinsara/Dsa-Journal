#include<iostream>
#include<vector>
#include<cmath>
using namespace std; 

int main()
{
    cout<<"Enter row and col for the 2D Array: ";
    int row,col; 
    cin>>row>>col; 

    if(row==col)
    {

    }
    else
    {
        cout<<"Enter row and col same, because here we need square matrix. "; 
        return 0; 
    }

    vector<vector <int> > matrix (row, (vector <int> (col)));

    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cout<<"Enter Element Matrix["<<i<<"]["<<j<<"] : "; 
            cin>>matrix[i][j];
        }
    }

    // row based swapping by om, column by swapping by rohit sir
    int row1=row;
    for(int i=0; i<row/2; i++)
    {
        for(int j=0; j<col; j++)
        {
            swap(matrix[i][j], matrix[row1-1][j]);
        }
        row1--;
    }

    // column based swapping by rohit sir
    for(int i=0; i<row; i++)
    {
        int start=0, end=col-1; 
        while(start<end)
        {
            swap(matrix[start][i], matrix[end][i]);
            start++;
            end--;
        }
    }

    // row element reverse
    int start, end;
    for(int i=0; i<row; i++)
    {
        start=0, end=col-1;
        while(start<end)
        {
            swap(matrix[i][start], matrix[i][end]); 
            start++, end--;
        }
    }

    cout<<endl;
    cout<<"180 degree rotated matrix: ";
    cout<<endl;
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cout<<matrix[i][j]<<"\t";
        }
        cout<<endl;
    }
    return 0; 
} 