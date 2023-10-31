#include<iostream>
#include<vector>
#include<algorithm> // For the reverse function
using namespace std;

void Display_Vector(vector<int> &a);

int main() {
    int n;
    int temp;
    vector<int> v;

    cout<<" How many elements ";
    cin>>n;
    cout<<"Enter ELements ";

    for(int i=0; i<n;i++) {
        cin>>temp;
        v.push_back(temp);
    }

    cout<<"Orignal Array"<<endl;
    Display_Vector(v);

    int x, y;
    cout<<"Enter the lower Limit for reversing ";
    cin>>x;
    cout<<"Enter the upper Limit for reversing ";
    cin>>y;

    // Check for valid range
    if(x < 0 || y >= n || x >= y) {
        cout << "Invalid range!" << endl;
        return 1;
    }

    for(int i=x, j=y; i<j; i++, j--) {
        swap(v[i], v[j]);
    }

    cout<<"After Reversing Array"<<endl;
    Display_Vector(v);

    reverse(v.begin(),v.end());
    cout<<"After Full Reversal"<<endl;
    Display_Vector(v);
}

void Display_Vector(vector<int> &a) {
    for(int i=0; i<a.size();i++) {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
