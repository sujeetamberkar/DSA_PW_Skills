#include<queue>
#include<iostream>
#include<vector>
using namespace std;
int countStudents(vector<int>& , vector<int>& );
int main ()
{
    int array1 [] = {1,1,1,0,0,1};
    int array2 [] = {1,0,0,0,1,1};
    int n = sizeof(array1)/sizeof(array1[0]);
    vector <int> students (array1,array1+n);
    vector <int> sandwich (array2,array2+n);

    int answer = countStudents(students,sandwich);
    cout<<answer;

}
int countStudents(vector<int>& students, vector<int>& sandwiches) {
    for(int element:students)
    cout<<element<<"\t";
    cout<<endl;
    for(int element:sandwiches)
    cout<<element<<"\t";
    cout<<endl;

    // Converts the student into a queue
    queue <int> q;
    int n = students.size();
    for (int i = 0; i <n;i++)
    {
        q.push(students[i]);
    }


    int i = 0; // To traverse the sandwich array(stack)
    int count = 0; // When the size of count == q.size() // BREAK infinite loop
    while (q.size()>0 && count!=q.size())
    {
        if(q.front()==sandwiches[i])
        {
            count=0;
            q.pop();
            i++;
        }
        else {
            q.push(q.front());
            q.pop();
            count++;
        }
    }
    


    return q.size();
}