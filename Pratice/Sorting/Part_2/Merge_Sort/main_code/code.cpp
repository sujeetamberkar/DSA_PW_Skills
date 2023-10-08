#include<iostream>
#include<vector>
using namespace std;

// Divide and Conqure 
void mergeSort (vector <int> &);
void merger(vector <int>& , vector <int>&, vector  <int>&);

int main()
{
    int array []= {5,1,3,0,4,9,6};
    int n = sizeof(array)/sizeof(array[0]);
    vector<int> v (array,array+n);

    for (int element : v)
    {
        cout <<element<<" ";
    }
    cout <<endl;
    mergeSort(v);
    for (int element : v)
    {
        cout <<element<<" ";
    }

    return 0;
}
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

    // Magic aka recursion
    mergeSort(a);
    mergeSort(b);
    //

    merger(a,b,v);
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
/*
                 [0,1,3,4,5,6,9]
               /                \
      [1,3,5]                    [0,4,6,9]                  ----> n  time 
     /       \                  /         \
[5]         [1,3]            [0,4]       [6,9]              ----> n  time
 \          /   \           /     \      /     \
  \       [1]   [3]       [0]     [4]  [6]   [9]
   \         \ /              \  /          \  /
    \      [1,3]             [0,4]       [6,9]               -----> n time
     \      /                   \       /
      \    /                     \     /
       \  /                       \   /
       [1,3,5]                  [0,4,6,9]                       -----> n time 
            \                      /
             \                    /
              \                  / 
                 [0,1,3,4,5,6,9]                            ------> n Opeeration 

*/
// Total = Kn + Kn
//       = 2 Kn  
// n, n/2, n/4 , n/8, n/16 ... etc

//      n/ (2^x)  = 1
//            2^x = n
//              Log N to base 2
//  TC, = O (Xn) = O (2n log2  n)
// TC in all cases is contant


// Space Complexity 
        //   SC: n log (n)  ---------> Optimised 2(n) by deleting 



// Merge sort is stable 
/*
                  [5,3,5',1,2]
                /            \
      [5,3,5']               [1,2]
     /        \             /     \
[5]         [3,5']       [1]     [2]
            /    \         \     /  
         [3]    [5']       [1]   [2]
            \    /           \  /  
           [3,5']            [1,2]
              \                /
               \              / 
                \            / 
                [3,5,5']   [1,2]
                    \       /
                     \     /
                      \   /
                  [1,2,3,5,5']

*/


// Application 
// Used to sort in linked list 
// Algorithm is used in counting inversion problem 
// External Sorting 