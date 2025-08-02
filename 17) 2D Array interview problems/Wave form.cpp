#include<iostream>
#include<vector>
#include<algorithm>
using namespace std; 

int main()
{
    cout<<"Enter row and col size: ";
    int row, col; 
    cin>>row>>col; 

    // 2d vector creation
    vector <vector <int> > matrix (row, vector <int> (col)); 

    cout<<"Enter elements: "; 
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cin>>matrix[i][j];
        }
    }

    cout<<endl; 
    cout<<"Matrix in original form: "<<endl; 
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl; 

    // Printing elements in wave form, if col=even (print up to down), if col=odd (print down to up)
    cout<<"Wave form: "; 
    for(int j=0; j<col; j++)
    {
        if(j%2==0)
        {
            for(int i=0; i<row; i++)
            {
                cout<<matrix[i][j]<<" ";
            }
        }
        else
        {
            for(int i=row-1; i>=0; i--)
            {
                cout<<matrix[i][j]<<" ";
            }
        }
    }
    return 0; 
}