#include<iostream>
#include<stack>

using namespace std;

int main()
{
    stack <int> s1;
    s1.push(5);
    s1.push(6);

    cout<<s1.top(); // since top() return reference so we have to use cout with that 

    s1.push(7);

    cout<<endl<<s1.empty();

    cout<<endl<<s1.size();


    stack <int> s2;
    s2.push(2);
    s2.push(3);

    cout<<endl<<s1.top();

    s1.swap(s2); // it is used to change content of two stack
    // or we can use 
    cout<<endl<<s1.top();

    swap(s1, s2);

    cout<<endl<<s1.top();0
    return 0;
}