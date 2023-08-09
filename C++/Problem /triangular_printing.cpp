/*	
for input 3;
output 

	   1
    2 2
   3 3 3
  4 4 4 4
 5 5 5 5 5
*/

#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for(int i =n,  k =1 ; i>0 || k<=n ; i--, k++)
    {
        int j=0;

        j=i;
        while(j--)
            cout << " ";

        int m=0;
        m=k;

        while(m--)
            cout << k<< " ";
      
        cout <<"\n";
    }

    return 0;
}
