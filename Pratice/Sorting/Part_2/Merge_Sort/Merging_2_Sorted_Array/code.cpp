#include<iostream>
#include<vector>
using namespace std;
void merger_sort(vector <int>& , vector <int>&, vector  <int>&);
int main ()
{
    // Copying an array into a vector 
    // int array []= {1,4,8};
    // int n1= sizeof(array)/sizeof(array[0]);
    // vector < int > my_vector (array,array+n1);
    

    int a,b,c;
    cout <<"No of elements in the 1st Array ";
    cin >>a;
    vector <int> array1(a);
    cout <<"Enter the elements of 1st Array ";
    for(int i = 0 ; i <a;i++)
    {
        cin >> array1[i];
    }

    cout <<"No of elements in the 2nd Array ";
    cin >>b;
    vector <int> array2(b);
    cout <<"Enter the elements of 1st Array ";
    for(int i = 0 ; i <b;i++)
    {
        cin >> array2[i];
    }
    c= a+b;
    vector<int> answer(c);
    
    merger_sort(array1,array2,answer);
    for (int element : answer)
    {
        cout <<element<<" ";
    }
}
void merger_sort(vector <int> & array1, vector <int> &array2, vector  <int>& answer)
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