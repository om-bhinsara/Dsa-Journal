#include<iostream>
#include<vector>
using namespace std; 

int main()
{
    cout<<"Enter row and col for the 2D Array: ";
    int row,col; 
    cin>>row>>col; 
    
    vector<vector <int> > matrix (row, (vector <int> (col)));
    vector<vector <int> > Tmatrix (row, (vector <int> (col)));

    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cout<<"Enter Element Matrix["<<i<<"]["<<j<<"] : "; 
            cin>>matrix[i][j];
        }
    }

    
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            Tmatrix[j][i]=matrix[i][j];
        }
    }

    /* Matrix */
    cout<<endl; 
    cout<<"Matrix: ";
    cout<<endl;
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cout<<matrix[i][j]<<"\t";
        }
        cout<<endl;
    }

    /* Transpose matrix */
    cout<<endl; 
    cout<<"Transposed matrix: ";
    cout<<endl;
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cout<<Tmatrix[i][j]<<"\t";
        }
        cout<<endl;
    }
    return 0; 
}