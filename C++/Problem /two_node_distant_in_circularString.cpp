#include <bits/stdc++.h>
using namespace std ;

int frequency( string str, int size, char c )
{

    int cnt =0;
   

    int fcnt =0, flag=0, maxx=0;

    for(int i =0 ; i< size ; i++)
    {

        if(str [i]!= c)
        {
            if(flag==0)
            {
                fcnt++;
            }
            else
            {   cnt++;
                if(maxx<cnt)
                    maxx=cnt;
            }
        }
        else
        {
            cnt=0;
            flag=1;


        }

    }
    int fmax = fcnt + cnt;

    return max(fmax,maxx);
}


int main() {


    int n;

    cin >> n;
    string s;
    cin >> s;
    char ch;
    cin >> ch;

    cout<< frequency (s, n, ch) << endl;

    return 0;
}
