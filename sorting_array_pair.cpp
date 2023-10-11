#include<iostream>
using namespace std;

/*
NOTE:
In case of array, while passing reference we don't need to specify
using "&" before variable, but we put "[]" after variable. 
 
 In function, we should pass the size of array alongwith the array.
 Here we can pass reference using "&" before variable.
 
 For sorting based on FIRST elements we can use sort function 
 similar to the case of array, but for sorting based on SECOND
 elements we need user defined function [Here, using bubble sort]
 */
 
void print(pair<int, float>pp[], int &n)
{
    cout << endl;
    for(int i=0; i<n ; i++)
        cout << pp[i].first << " "<<pp[i].second<<endl;
    cout << endl;
}

void sort2nd(pair<int,float>pp[], int &n)
{
    for(int i=0  ; i< n-1 ; i++)
    {
        for(int j=i+1 ; j< n; j++)
        {
            if(pp[i].second>pp[j].second)
            {
                swap(pp[i].second, pp[j].second);
                swap(pp[i].first, pp[j].first);
            }
        }
    }
}

int main()
{
    int n;
    cin >> n;

    pair<int, float> pp[n];
    for(int i=0; i<n ; i++)
        cin >> pp[i].first>> pp[i].second ;

    print(pp,n);// print array pair the way input has been taken.

    sort(pp+0,pp+n); // sort array pair based on FIRST elements.

    print(pp,n); // sorted print

    sort2nd(pp,n); //sort array pair based on SECOND elements.

    print(pp,n); // sorted print

    return 0;
}
