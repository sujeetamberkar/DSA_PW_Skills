#include <iostream>
#include<vector>
using namespace std;

/*
    1) Find all the critical index and store it in a vector 
    2) Maximum distance = LastIndex - FirstIndex
    2) Min Sum = min (Adjacent sum )
*/
class ListNode
{
public:
    int val;
    ListNode *next;
    ListNode(int val) : val(val), next(NULL) {}
};
vector<int> nodesBetweenCriticalPoints(ListNode* head);
int main()
{
    ListNode *head = new ListNode(5);
    head->next = new ListNode(3);
    head->next->next= new ListNode(1);
    head->next->next->next= new ListNode(2);
    head->next->next->next->next= new ListNode(5);
    head->next->next->next->next->next= new ListNode(1);
    head->next->next->next->next->next->next= new ListNode(2);

    vector < int > answer = nodesBetweenCriticalPoints(head);
    for (int element : answer)
    {
        cout<<element<<"\t";
    }

    return 0;
}
vector<int> nodesBetweenCriticalPoints(ListNode* head)
{
    vector <int> answer(2,-1);
    
    vector < int > criticalList;

    ListNode* temp = head;
    int index =0;
if (temp != nullptr && temp->next != nullptr && temp->next->next != nullptr) {
    while (temp->next->next != nullptr) {
    
        if ((temp->next->val > temp->val && temp->next->val > temp->next->next->val) ||
            (temp->next->val < temp->val && temp->next->val < temp->next->next->val)) {
            criticalList.push_back(index+1);
        }
        temp = temp->next;
        index++;
    }
    int n = criticalList.size();
    int MaximumDistance = -1;
    int MinimumDistance = -1;
    int minSubtraction = INT_MAX;

        if (n > 1) {
            // Just Check adjacent sum
            int minSubtraction = INT_MAX; 
            for (int i = 0; i < criticalList.size() - 1; ++i) {
                int diff = criticalList[i + 1] - criticalList[i];
                minSubtraction = min(minSubtraction, diff);
            }
            int MaximumDistance = criticalList.back() - criticalList.front();
    
            // Assign to answer
            answer[0] = minSubtraction;
            answer[1] = MaximumDistance;
        }



}
    return answer;


}
