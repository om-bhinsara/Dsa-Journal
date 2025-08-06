#include<iostream>
#include<vector> 
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
    vector <int> freq(n+1,0);

    // for repeating
    for(int i=0; i<arr.size(); i++)
    {
        int item=arr[i];
        freq[item]++;
    }

    int repeating=-1;
    for(int i=1; i<freq.size(); i++)
    {
        if(freq[i]>1)
        repeating=freq[i];
    }

    // for missing 
    int missing=-1;
    bool flag=0; 
    for(int i=1; i<arr.size(); i++)
    {
        flag=0;
        for(int j=0; j<arr.size(); j++)
        {
            if(i==arr[j])
            {
                flag=1;
                break;
            } 
        }
        if(flag==0)
        missing=i;
    }
    
    cout<<"Repeating element is "<<repeating<<endl<<"Missing element is "<<missing;
    return 0;
}