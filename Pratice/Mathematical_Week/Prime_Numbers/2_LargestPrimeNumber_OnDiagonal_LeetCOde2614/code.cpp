#include<iostream>
#include <vector>
using namespace std;

int diagonalprime(vector<vector<int > > &);
bool isPrime(int  );
int main ()
{
    int dim;
    
    cout <<"Enter the dimensions of array ";
    cin>>dim;
    
    vector < int > row_array (dim);
    vector<vector<int > > matrix; 

    cout << "Enter Elements\n";
    for (int i = 0 ; i < dim; i ++)
    {
        for (int j = 0 ; j < dim; j++)
        {
            cin>>row_array[j];
        }
        matrix.push_back(row_array);
    }

    int answer = diagonalprime(matrix);
    cout << answer;    


}

int diagonalprime(vector<vector<int > > &nums)
{
    int dim = nums.size();
    int largest = 0;
    int temp;
    for ( int i = 0; i < dim; i ++)
    {
        for (int j = 0; j < dim; j++)
        {
            if ( (i == j) || (i + j == dim-1) )
            {
                if(isPrime (nums[i][j]) == 1)
                {
                    largest = max (largest,nums[i][j]);
                }

            }
        }
    }
    return largest;

}
bool isPrime(int number )
{
    if (number == 1)
    {
        return false;
    }

    for (int i = 2; i <=sqrt(number); i++)
    {
        if (number % i == 0)
        {
            return false;
        }
    }
    return true;
}
