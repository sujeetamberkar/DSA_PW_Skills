/*
**Question Explanation:**
- This program aims to determine the number of unique paths from the top-left corner to the bottom-right corner of a grid/maze.
  At each cell, one can either move right or down. The grid dimensions are defined by the end_row and end_col parameters.

**Mathematical/Recursive Expression:**
- Let f(r, c) represent the number of ways to reach cell (r, c) from the top-left corner.
  f(r, c) = f(r-1, c) + f(r, c-1)
- Base cases:
  If r > end_row or c > end_col, f(r, c) = 0 (out of bounds)
  If r == end_row and c == end_col, f(r, c) = 1 (destination reached)

**Solution Explanation:**
- The solution utilizes a recursive approach.
- At each cell, there are two possible moves: right or down. Recursive calls are made for both moves.
- The base cases ensure that we don't move out of the grid bounds and recognize when the destination is reached.

*/

#include<iostream>
using namespace std;

int maze(int , int , int , int ); 
void printPath(int , int , int , int , string );
int maze2(int , int);
void maze2_path(int , int , string);
int main()
{
    // Find and print the number of ways to reach (2,2) from (0,0) in a grid
    cout << maze(0, 0, 2, 2);
    cout<<endl;
    printPath(0,0,2,2," ");

    cout <<maze2(2,2)<<endl;
    maze2_path(2,2,"");
    return 0;
}

int maze(int start_row, int start_col, int end_row, int end_col)
{
    // To prevent out of bound conditions
    if (start_row > end_row || start_col > end_col)
    {
        return 0;
    }
    // Destination reached 
    else if (start_col == end_col && start_row == end_row)
    {
        return 1;
    }

    // Compute the number of ways by moving right and down
    int right_ways = maze(start_row, start_col + 1, end_row, end_col);
    int down_ways = maze(start_row + 1, start_col, end_row, end_col);
    int total_ways = right_ways + down_ways;
    
    return total_ways;
}
void printPath(int start_row, int start_col, int end_row, int end_col, string s)
{
    if (start_col>end_col || start_row > end_row)
    {
        return;
    }
    else if (start_col==end_col && start_row==end_row )
    {
        cout<<s<<endl;
    }

    //right
    printPath(start_row,start_col+1,end_row,end_col,s+"R");

    // left 
    printPath(start_row+1,start_col,end_row,end_col,s+"D");
}

int maze2(int start_row , int start_col)
{
    if (start_col < 0 || start_row <0)
    {
        return 0;
    }
    else if (start_col==0 && start_row == 0)
    {
        return 1;
    }

    int right_ways = maze2(start_row,start_col-1);
    int down_ways = maze2(start_row-1,start_col);
    return right_ways+ down_ways;


    /*

    22  21  20
    12  11  10
    02  01  00

    */
    

}
void maze2_path(int start_row , int start_col,string s)
{
    if (start_col < 0 || start_row <0)
    {
        return;
    }
    else if (start_col==0 && start_row == 0)
    {
        cout<<s<<endl;
        return;
    }

    maze2_path(start_row,start_col-1,s+"R");
    maze2_path(start_row-1,start_col,s+"D");
    
    


  
    

}