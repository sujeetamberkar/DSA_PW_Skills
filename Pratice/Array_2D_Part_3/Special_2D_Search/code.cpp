#include<iostream>
using namespace std;

int main()
{
    // Declare the number of rows and columns of the matrix
    int n,m;

    // Prompt the user for the number of rows
    cout<<"Enter NO of rows ";
    cin>> m;

    // Prompt the user for the number of columns
    cout <<"Enter NO of colls ";
    cin>> n;

    // Prompt the user to enter the elements of the matrix
    cout<<"Enter Matrix\n";

    // Create a 2D vector (matrix) of size m x n to store the input
    vector<vector<int> > matrix (m,vector<int> (n));

    // Nested loop to take user input for each element of the matrix
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>matrix[i][j];
        }
    }

    // Declare a target variable to store the element to be searched
    int target;

    // Prompt the user for the element to be searched in the matrix
    cout <<" Enter the element which do you want to search ";
    cin>>target;

    // Getting the number of rows and columns of the matrix
    int rows=matrix.size();
    int cols= matrix[0].size();

    // Initializing pointers to the top right corner of the matrix
    int i=0;
    int j= cols-1;

    // Variable to store if the target is found or not
    bool answer=false;

    // While loop to traverse the matrix diagonally (starting from top right)
    while(i<rows && j>=0 )
    {
        // If the current element matches the target, set answer to true and break
        if (matrix[i][j]==target)
        {
            answer=true; 
            break;
        }
        // If the current element is greater than the target, move left
        else if (matrix[i][j]> target)
        {
            j--;
        }
        // If the current element is smaller than the target, move down
        else {
            i++;
        }
    }

    // Print the result (true if found, false otherwise)
    cout<<answer;

    return 0;
}
