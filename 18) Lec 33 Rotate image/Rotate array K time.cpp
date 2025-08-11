#include<iostream>
#include<vector>
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

    if(row==0 || col==0)
    {
        cout<<"Enter valid size of the matrix. ";
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

    cout<<"\nEnter how many times you want to rotate matrix: ";
    int k;
    cin>>k;

    // to know how many time we have to rotate matrix
    int k=k%4;  

    // Transpose of matrix
    for(int rot=0; rot<k; rot++)
    {
    for(int i=0; i<row-1; i++)
    {
        for(int j=i+1; j<col; j++)
        {
            swap(matrix[i][j],matrix[j][i]); 
        }
    }

    // Reverse of every row of matrix
    int start=0, end=col-1; 
    for(int i=0; i<row; i++)
    {
        start=0, end=col-1;
        while(start<end)
        {
            swap(matrix[i][start], matrix[i][end]); 
            start++, end--;
        }
    }
    }   

    cout<<endl;
    cout<<90*k<<" Degree rotated matrix "<<endl; 
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