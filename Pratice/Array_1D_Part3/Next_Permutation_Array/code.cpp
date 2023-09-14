#include<iostream>
#include<vector>

using namespace std;

// Function declarations
void next_Permutation(vector<int>&);
void print_Vector(vector<int>&);
void reverse_sub_Array(vector<int>&, int, int);

int main()
{
    int temp, n;
    vector<int> v;
    
    cout << "Enter No of elements\t";
    cin >> n;

    // Reading n elements from the user
    for(int i = 0; i < n; i++)
    {
        cin >> temp;
        v.push_back(temp);
    }

    // Get the next permutation of the sequence
    next_Permutation(v);
    
    // Print the resulting vector
    print_Vector(v);

    return 0;
}

void print_Vector(vector<int>& a)
{
    int n = a.size();
    for(int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

void next_Permutation(vector<int>& a)
{
    int index = -1;
    for(int i = a.size() - 2; i >= 0; i--)
    {
        if(a[i] < a[i+1])
        {
            index = i;
            break;
        }
    }
    
    if(index == -1)
    {
        reverse_sub_Array(a, 0, a.size() - 1);
        return;
    }
    
    reverse_sub_Array(a, index + 1, a.size() - 1);

    int j = -1;
    for(int i = index + 1; i < a.size(); i++)
    {
        if(a[i] > a[index])
        {
            j = i;
            break;
        }
    }

    swap(a[index], a[j]);
}

void reverse_sub_Array(vector<int>& a, int low, int high)
{
    for(int i = low, j = high; i < j; i++, j--)
    {
        swap(a[i], a[j]);
    }
}
