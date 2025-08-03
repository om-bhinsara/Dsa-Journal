#include<iostream>
using namespace std; 
#include<string>

int main()
{   
    string IP, ans; 

    cout<<"Enter IP Address: "; 
    cin>>IP;

    int index=0; 
    while(index<IP.size())
    {
        if(IP[index]=='.')
        {
            ans=ans+"[.]";
        }
        else
        {
            ans=ans+IP[index]; 
        }
        index++;
    }
    cout<<ans; 
    return 0;
}