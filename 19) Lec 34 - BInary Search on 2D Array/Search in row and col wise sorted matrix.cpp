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

    int i=0, j=mat[0].size()-1;
    while(i<mat.size() && j>0) // because i always keep on incresing 
                               // and j is always keep on decreasing  
    {
        if(mat[i][j]==key)
        {
            cout<<"Key is found at mat["<<i<<"]["<<j<<"]";
            return 0;
        }
        else if(mat[i][j]<key)
        {
            i++;
        }
        else 
        {
            j--;
        }
    }
    
    cout<<"Oops, key is not found!";
    return 0; 
}