#include<iostream>
#include<vector>
using namespace std; 

int main()
{
    cout<<"Enter row and col for the 2D Array: ";
    int row,col; 
    cin>>row>>col; 

    vector<vector <int> > matrix (row, (vector <int> (col)));

    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cout<<"Enter Element Matrix["<<i<<"]["<<j<<"] : "; 
            cin>>matrix[i][j];
        }
    }

    for(int i=row-1; i>0; i--)
    {
        for(int j=0; j<i; j++)
        {
            swap(matrix[i][j],matrix[j][i]);
        }
    }

    /* Transpose matrix */
    cout<<endl; 
    cout<<"Transposed matrix: ";
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