#include<iostream>
#include<vector>
using namespace std;

int main()
{
    string s="ababababa";

    vector <int> alphabets(26,0);
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]>='a' && s[i]<='z') // for small case
        {
            char a=s[i];
            int index=a-'a';
            alphabets[index]++;
        }
        else // for upper case
        {
            char a=s[i];
            int index=a-'A';
            alphabets[index]++;
        }
    }

    string ans="";
    for(int i=0; i<alphabets.size(); i++)
    {
        while(alphabets[i]--)
        ans=ans+char(i+'a');
    }
    cout<<"Input string is "<<s<<endl<<"Sorted string is "<<ans;
    return 0; 
}