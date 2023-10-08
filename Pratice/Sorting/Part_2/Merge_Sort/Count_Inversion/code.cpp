// Two elements of an array a,
// a[i] and a [j] are said to form an inversion if a[i] > a [j]  when i <j

//          0   1   2   3   4
//   a -->  5   1   8   2   3
//  Total Number of Inversion 
// (5,1),(5,2),(5,3)
// (8,2),(8,3)

// Method 1
// Brute Force 
// Total NO of Opperations n (n+1)/2
#include<iostream>
#include<vector>
using namespace std;
int counter = 0;
void mergeSort (vector <int> &);
void merger(vector <int>& , vector <int>&, vector  <int>&);
int NO_of_inversions (vector <int>&);
int inversions(vector<int>, vector <int>);
int main ()
{
    int array []= {5,1,3,0,4,9,6};
    int n = sizeof(array)/sizeof(array[0]);
    vector<int> v (array,array+n);
    int answer1 = NO_of_inversions(v);
    cout <<answer1; 

    mergeSort(v);
    int answer2 = counter;
    cout <<endl<<answer2; 

}
int NO_of_inversions (vector <int>&v)
{
    int count=0;
    for (int i = 0; i < v.size()-1;i++)
    {
        for (int j = i+1; j <v.size();j++)
        {
            if (v[i]>v[j])
            {
                count++;
            }
        }
    }
    return count;
}
// Time Complexity : O (n^2)
// Space Cpmplexity : O (1)


// [3,5,6,7]        [2,2,3,4]
// If any number is such that 3 > 2
// Then since [3,5,6,7] is in sorted ordered 
// They all will form inversions 

// if 3 > 2, count = count + 4
// count = 0,4,8,11,14
void mergeSort (vector <int> &v)
{
    int n = v.size();
    if (n ==1)
    {
        return;
    }
    int size_left= n/2;
    int size_right=n - n/2;
    vector < int > a (size_left);
    vector < int > b (size_right);

    for (int i = 0; i <size_left;i++)
    {
        a[i]=v[i];
    }
    for (int i = 0; i <size_right;i++)
    {
        b[i]=v[i+size_left];
    }

    mergeSort(a);
    mergeSort(b);
    //

    merger(a,b,v);
    // Count Inversions 
    counter= counter + inversions(a,b);
    a.clear();
    b.clear();

}
void merger(vector <int> & array1, vector <int> &array2, vector  <int>& answer)
{
    int i=0;
    int j = 0;
    int k =0;
    while (i < array1.size() && j <array2.size())
    {
        if (array1[i]>array2[j])
        {
            answer[k]=array2[j];
            k++;
            j++;
        }
        else {
            answer[k]=array1[i];
            k++;
            i++;
        }
    }

    while(i < array1.size()) {
        answer[k] = array1[i];
        k++;
        i++;
    }

    while(j < array2.size()) {
        answer[k] = array2[j];
        k++;
        j++;
    }
}
int inversions(vector <int> a, vector <int> b)
{
    int i = 0; // Point to index of a
    int j = 0; // Point to index of b
    int local_counter=0;
    while (i<a.size() && j <b.size() )
    {
        if (a[i]>b[j])
        {
            local_counter= local_counter + (a.size()-i);
            j++;
        }
        else {
            i++;
        }
    }
    return local_counter;
    
}