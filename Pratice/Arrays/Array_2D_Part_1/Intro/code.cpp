#include<iostream>
using namespace std;
int main()
{
    // int phy[6];
    // int chem[6];
    // 2 D array is used when we are dealing with tables
    // 2 D array is called Matrix

    // Declaration 
    // int arrar[ROWS][COL];
    int arr[3][3]; // Creating a Matrix of 3x3 
    // Grid is just a visual representation 
    // Memory is always linear 
    arr[0][0]=4;
    int arr2[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int arr3[][3]={{1,2,3},{4,5,6},{7,8,9}};// Collumn name is must 
    int arr4[3][3]={1,2,3,4,5,6,7,8,9};
    // 2 D arrays are arrays or arrays 

    for(int i= 0;i<3;i++) // Rows
    {
        for(int j=0;j<3;j++) // Collumns 
        {
            cout<<arr4[i][j]<<"\t";
        }
        cout<<endl;
    }

}