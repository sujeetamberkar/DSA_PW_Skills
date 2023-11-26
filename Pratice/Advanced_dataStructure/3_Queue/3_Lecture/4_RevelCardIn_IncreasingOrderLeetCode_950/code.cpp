#include <iostream>
#include <vector>
#include<queue>
#include<algorithm>

using namespace std;
vector<int> deckRevealedIncreasing(vector<int> &deck);
int main()
{
    vector<int> arr{17, 13, 11, 2, 3, 5, 7};
    for(int element: arr)cout<<element<<"\t";
    cout<<endl;
    vector<int> answer = deckRevealedIncreasing(arr);
    for(int element: answer)cout<<element<<"\t";
    return 0;
}


vector<int> deckRevealedIncreasing(vector<int> &deck)
{
    int n = deck.size();
    sort(deck.begin(),deck.end());
    queue <int> q;
    for(int i = 0; i<n;i++)
    {
        q.push(i);
    }
    vector <int > answer (n);

    for(int i = 0;i<n;i++)
    {
        int index = q.front();
        q.pop();

        // Poping front and pushing it back
        q.push(q.front());
        q.pop();
        answer[index]=deck[i];
    }

    
    return answer;
}