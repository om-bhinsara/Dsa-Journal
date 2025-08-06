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
    vector <int> arr={1,2,2,3,4,5,6};

    for(int i=0; i<arr.size(); i++) //  decrease every value by 1
    arr[i]--;

    for(int i=0; i<arr.size(); i++) // add n
    {
        int num=arr[i]%n;
        arr[num]+=n;
    }
    
    int repeating=-1, missing=-1;
    for(int i=0; i<arr.size(); i++)
    {
        if(arr[i]/n>1) // for repeating
        repeating=i+1;
        
        if(arr[i]/n==0) // for missing 
        missing=i+1;
    }
    cout<<"Repeating element is "<<repeating<<endl<<"Missing element is "<<missing;
    return 0;
}