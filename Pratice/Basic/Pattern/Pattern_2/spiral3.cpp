#include<iostream>
using namespace std;
int main()
{
    int num=4;

 int array1[2*num-1];
 int array2[2*num-1];
 
 int counter=1;
 int val=1;
while (counter <= num)
{
    array1[counter]=val;
    array2[counter]=val;
    val++;
    counter++;
}
val--;


}