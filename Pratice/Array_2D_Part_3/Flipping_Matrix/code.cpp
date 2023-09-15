#include <iostream>
#include <vector>
using namespace std;

// Function to convert a binary row to its decimal value
int Binary_toDecimal(vector<int> &);

// Function to toggle values of a row between 0 and 1
void Toggle(vector<int> &);

// Function to toggle values of a specific column in the grid
void Toggle_cols(vector<vector<int> > &, int cols);

int main()
{
    int m, n, temp;

    // Taking input for number of rows
    cout << "Enter NO of rows ";
    cin >> m;

    // Taking input for number of columns
    cout << "Enter NO of Cols ";
    cin >> n;

    // Initializing a grid with m rows and n columns
    vector<vector<int> > grid(m, vector<int>(n));

    // Taking input values for the grid
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> grid[i][j];
        }
    }

    // Getting the number of rows and columns of the grid
    int rows = grid.size();
    int cols = grid[0].size();

    // Toggle the rows if the first element of the row is 0
    for (int i = 0; i < rows; i++)
    {
        if (grid[i][0] == 0)
        {
            Toggle(grid[i]);
        }
    }

    int number_of1s = 0;
    int number_of0s = 0;

    // For each column, count the number of 1s and 0s
    for (int i = 1; i < cols; i++)
    {
        number_of1s = 0;
        for (int j = 0; j < rows; j++)
        {
            number_of1s = number_of1s + grid[j][i];
        }
        number_of0s = rows - number_of1s;

        // If number of 0s is more than 1s, toggle the column values
        if (number_of0s > number_of1s)
        {
            Toggle_cols(grid, i);
        }
    }

    int sum=0;

    // Calculate the sum of decimal values of all rows in the grid
    for(int i=0;i<rows;i++)
    {
        sum=sum+Binary_toDecimal(grid[i]);
    }

    cout <<"Sum is "<<sum;
    return 0;
}

// Convert a binary array to its decimal equivalent
int Binary_toDecimal(vector<int> &a)
{
    int size = a.size();
    int sum = 0;
    int product = 1;

    // Traverse the array from rightmost (least significant bit) to left
    for (int i = size - 1; i >= 0; i--)
    {
        sum = sum + a[i] * product;
        product = product * 2;
    }
    return sum;
}

// Toggle the elements of an array (0 becomes 1 and 1 becomes 0)
void Toggle(vector<int> &a)
{
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == 0)
        {
            a[i] = 1;
        }
        else
        {
            a[i] = 0;
        }
    }
}

// Toggle the elements of a specific column in the grid
void Toggle_cols(vector<vector<int> > &a, int cols)
{
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i][cols] == 0)
        {
            a[i][cols] = 1;
        }
        else
        {
            a[i][cols] = 0;
        }
    }
}
