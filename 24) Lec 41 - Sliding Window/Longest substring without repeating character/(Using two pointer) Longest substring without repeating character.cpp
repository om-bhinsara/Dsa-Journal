#include<iostream>
#include<vector>
using namespace std;

int main()
{
    string s="ababc";
    int len=0, n=s.size();

    for(int i=0; i<n; i++)
    {
        int jlen=0; // it will contain len of new substring 
        vector <bool> count(256, false);
        if(s.size()-i <=len) break; // check karvani chhe e substring ni size len ni size karta ochhi hoy to kai faydo nathi check karvano
            for(int j=i; j<n; j++) // now check for subtrings
            {
                if(count[s[j]]) // if char exist in substring 
                break;

                count[s[j]]=true; // if not exist 
                jlen++;
            }
            len=max(len, jlen); // compare old substring length and current susbtring length
    }   

    cout<<"Length of unique char containing substring is "<<len;
    return 0; 
}