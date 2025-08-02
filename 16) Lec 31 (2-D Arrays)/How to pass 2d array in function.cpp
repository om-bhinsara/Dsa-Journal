#include<iostream> 
using namespace std;

/**
 * The function `printArr` prints a 2D array of integers row by row.
 * 
 * @param arr A 2D array of integers with 3 columns.
 * @param row The `row` parameter in the `printArr` function represents the number of rows in the 2D
 * array `arr`. It specifies the total number of rows that need to be printed or processed in the
 * function.
 * @param col The parameter `col` in the `printArr` function represents the number of columns in the 2D
 * array `arr`. It specifies the size of the second dimension of the array.
 */

/* Herre arr[][3] 3 is for the compiler to calculate index, and row and col is for our use */
void printArr(int arr[][3], int row, int col) 
{
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cout<<arr[i][j]<<" "; 
        }
    }
}; 

int main()
{
    int arr[3][3]={1,2,3,4,5,6,7,8,9}; 
    int row=3, col=3; 
    cout<<"Array element is printed in row major: "; 
    for(int i=0; i<row; i++)
    {
       for(int j=0; j<col; j++)
       {
           cout<<arr[i][j]<<" "; 
       }
    }
    cout<<endl; 

    cout<<"Array element is printed in column major: ";
    for(int i=0; i<col; i++)
    {
       for(int j=0; j<row; j++)
       {
           cout<<arr[j][i]<<" "; 
       }
    }
    cout<<endl; 
    // array is passed in function
    printArr(arr,3,3);
    return 0; 
};