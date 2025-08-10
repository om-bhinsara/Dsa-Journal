#include<iostream>
#include<vector>
using namespace std;

int main()
{
    string s="AABBBCBBADC";
    int totalDistinct=0; 
    vector <int> count(256,0);
    for(int i=0; i<s.size(); i++)
    {
        if(count[s[i]]==0)
        totalDistinct+=1;

        count[s[i]]++;
    }   

    int n=s.size(), len=INT_MAX, jlen=0, totalDistinctOriginal=totalDistinct;
    for(int i=0; i<n; i++)
    {
        jlen=0;
        vector <int> count(256, 0);
        totalDistinct=totalDistinctOriginal;

        for(int j=i; j<n; j++)
        {
            if(count[s[j]]==0)
            totalDistinct-=1;
        
            count[s[j]]++;
            if(totalDistinct==0)
            {
                len=min(len, j-i+1);
                break; // if we found substring which have all distinct chat then there's no need to check 
                       // becaues further chekcing will make susbtring longer and no benefits
            }
        }
    }
    cout<<"The smallest distinct window size is "<<len;
    return 0;
}