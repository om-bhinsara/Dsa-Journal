#include<iostream>
#include<vector>
using namespace std; 

int main()
{
    string s="is2 sentence4 this1 a3";
    vector <string> ans(10);

    string temp;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]==' ')
        {
            int position=s[i-1]-'0';
            temp.pop_back();
            ans[position-1]=temp+" ";
            temp.clear();
        }
        else
        temp=temp+s[i];
    }

    int position=s[s.size()-1]-'0';
    temp.pop_back();
    ans[position-1]=temp+" ";

    for(int i=0; i<ans.size(); i++)
    {
            if(ans[i]!=" ")
            cout<<ans[i];
    }

    return 0;
}
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              
