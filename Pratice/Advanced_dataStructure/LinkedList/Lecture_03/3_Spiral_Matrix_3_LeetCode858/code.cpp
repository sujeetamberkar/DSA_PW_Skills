#include <iostream>
using namespace std;

class ListNode
{
public:
    int val;
    ListNode *next;
    ListNode(int val) : val(val), next(NULL) {}
};
void display(ListNode *head)
{
    ListNode *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}
vector<vector<int > > spiralMatrix(int m, int n, ListNode* head);

int main()
{
    //   3,0,2,6,8,1,7,9,4,2,5,5,0
    int rows = 3;
    int cols = 5;
    ListNode *head = new ListNode(3);
    head->next = new ListNode(0);
    head->next->next = new ListNode(2);
    head->next->next->next = new ListNode(6);
    head->next->next->next->next = new ListNode(8);
    head->next->next->next->next->next = new ListNode(1);
    head->next->next->next->next->next->next = new ListNode(7);
    head->next->next->next->next->next->next->next = new ListNode(9);
    head->next->next->next->next->next->next->next->next = new ListNode(4);
    head->next->next->next->next->next->next->next->next->next = new ListNode(2);
    head->next->next->next->next->next->next->next->next->next->next = new ListNode(5);
    head->next->next->next->next->next->next->next->next->next->next->next = new ListNode(5);
    head->next->next->next->next->next->next->next->next->next->next->next->next = new ListNode(0);

    vector<vector<int > > answer = spiralMatrix(rows,cols,head);
    for ( vector < int > temporary : answer)
    {
        for (int element : temporary )
        {
            cout << element << " ";
        }
        cout <<endl;
    }
}
vector<vector<int > > spiralMatrix(int rows, int cols, ListNode* head) {
    vector < vector < int > > answer_Aray(rows,vector < int > (cols, -1));

    int minr = 0;
    int maxr = rows - 1;
    int minc = 0;
    int maxc = cols - 1;
    ListNode * temp = head;
    while (minr <=maxr && minc <= maxc)
    {

        // Right
        for (int j = minc; j <=maxc;j++)
        {
            if (temp == NULL)
            {
                return answer_Aray;
            }
            answer_Aray[minr][j] = temp->val;
            temp=temp->next;
        }
        minr++;

        if (minr >maxr || minc > maxc)
        {
            break;
        }

        // DOWN
        for (int i = minr; i <=maxr;i++)
        {
            if (temp == NULL)
            {
                return answer_Aray;
            }
            answer_Aray[i][maxc]=temp->val;
            temp=temp->next;
        }
        maxc--;

        if (minr >maxr || minc > maxc)
        {
            break;
        }

        //LEFT
        for (int j=maxc;j>=minc;j--)
        {
            if (temp == NULL)
            {
                return answer_Aray;
            }
            answer_Aray[maxr][j] = temp->val;
            temp= temp ->next;
        }
        maxr--;

        if (minr >maxr || minc > maxc)
        {
            break;
        }
        // TOP
        for (int i = maxr; i>=minr;i--)
        {
            if (temp == NULL)
            {
                return answer_Aray;
            }
            answer_Aray[i][minc] = temp->val;
            temp = temp->next;


        }
        minc++;
        if (minr >maxr || minc > maxc)
        {
            break;
        }


    }
    

    return answer_Aray;
    }