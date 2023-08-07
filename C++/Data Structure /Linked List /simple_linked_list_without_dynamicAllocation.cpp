#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node* next;

    node(int val)
    {
        data = val;
        next = nullptr;
    }
};



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // node *f = new node(6);
    // node *s = new node(8);
    // node *t = new node(2);

    node f(26);// without creating dynamic allocation.
    node s(16);// without creating dynamic allocation.
    node t(36);// without creating dynamic allocation.

    f.next = &s;
    s.next = &t;

    node* crr = &f;
    while (crr != nullptr)
    {
       
        cout << crr->data <<" ";
        crr = crr->next;
    }

    return 0;
}