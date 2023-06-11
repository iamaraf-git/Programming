#include<bits/stdc++.h>
using namespace std;

void solve ()
{
    int n;
    cin >> n;

    vector<int>v;

    int num;
    for(int i =0 ; i< n; i++)
    {
        cin >> num;
        v.push_back(num);
    }
    for(int x : v)
        cout << x << ' ';

}

int main()
{
    int t;
    cin >> t;

    for(int i =0 ; i< t; i++)
        solve();

    return 0;
}

/*
1
5
4 8 1 3 9
*/
