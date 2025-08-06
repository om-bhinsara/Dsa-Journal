#include<iostream>
#include<vector> 
#include<algorithm>
using namespace std; 

/* 
Here we will take ex. 
arr=[4,3,2,1,2,7,6]
n=7
*/
int main()
{
    int n=7;
    vector <int> arr={4,3,2,1,2,7,6};

    vector <int> count(n+1, 0);

    for(int i=0; i<arr.size(); i++)
    {
        count[arr[i]]++;
    }
    
    int missing=-1, repeating=-1; 
    for(int i=0; i<count.size(); i++)
    {
        if(count[i]==0)
        missing=i;

        if(count[i]>1)
        repeating=i;
    }

    cout<<"Repeating element is "<<repeating<<endl<<"Missing element is "<<missing;
    return 0;
}