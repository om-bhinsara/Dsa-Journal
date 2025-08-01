#include<iostream>
using namespace std;

/* Constraints: 
    Size of array will be N
    index of array will be  0 to N-1
    and 
    1 <= arr[i] <<= N

    ex. if N=6
    then element can be stored in array is 1,2,3,4,5,6
*/
int main()
{
    cout<<"Enter size of the array: ";
    int n;
    cin>>n;
    
    int arr[n-1];

    for(int i=0; i<n-1; i++)
    {
        cout<<"Enter elements of array: ";
        cin>>arr[i];
    }

    int sum_of_n=0;
    sum_of_n=n*(n+1)/2;

    int sum=0;
    for(int i=0; i<n-1; i++)
    {
        sum=sum+arr[i];
    }

    cout<<"Missing number is "<<sum_of_n-sum;
    return 0; 
}