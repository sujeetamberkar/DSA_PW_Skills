#include<iostream>
#include<queue>
#include<string>
using namespace std;
string predictPartyVictory(string );
int main ()
{
    string s = "RDRDDDR";
    cout<<predictPartyVictory(s);
    return 0;
}
string predictPartyVictory(string senate) {

    queue <int> q;
    queue <int> d;
    queue <int> r;


    for(int i = 0;i<senate.length();i++)
    {
        q.push(i);
        if(senate[i]=='R')
        {
            r.push(i);
        }
        else
        {
            d.push(i);
        }
    }


    while (q.size()>=1)
    {


        // X === VOTE LOSt
        if(senate[q.front()]=='X')
        {
            q.pop();
        }
        else if (senate[q.front()]=='R')
        {
            // 1) Check for victory 
            if(d.empty())
            {
                return "Radiant";
            }

            else {
                //Take Rights of the next D
                senate[d.front()]='X';
                d.pop();
                q.push(q.front());
                q.pop();

                r.push(r.front());
                r.pop();
            }
        }

        else {

                        // 1) Check for victory 
            if(r.empty())
            {
                return "Dire";
            }

            else {
                //Take Rights of the next D
                senate[r.front()]='X';
                r.pop();
                q.push(q.front());
                q.pop();

                d.push(d.front());
                d.pop();
            }



        }
    }


    return q.front()=='R'? "Radiant": "Dire";
    


}