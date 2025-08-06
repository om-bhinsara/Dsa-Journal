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

    sort(arr.begin(), arr.end());

    // for missing [1,2,2,3,4,6,7]
    vector <int> freq(n+1,0);

    for(int i=0; i<arr.size(); i++)
    {
        int item=arr[i];
        freq[item]++;
    }
    
    int missing=-1;
    for(int i=1; i<freq.size(); i++)
    {
        if(freq[i]==0)
        missing=i;
    }

    // for repeating 
    int repeating=-1;
    for(int i=0; i<arr.size()-1; i++)
    {
        if(arr[i]==arr[i+1])
        {
            repeating=arr[i];
            break;
        }
    }

    cout<<"Repeating element is "<<repeating<<endl<<"Missing element is "<<missing;
    return 0;
}