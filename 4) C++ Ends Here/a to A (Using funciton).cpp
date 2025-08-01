// converting lower case into upper case 

#include<iostream>
using namespace std; 

void converter(char a)
{
    char a1=a-32;
    cout<<a1;
}
int main()
{
    char character; 
    cout<<"Enter any character between (a-z): ";
    cin>>character;
    converter(character); 
}