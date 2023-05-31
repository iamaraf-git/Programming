#include<iostream>

using namespace std;

int main()
{
    // increasing order

    int m,n,p,x=-1, a = INT_MAX, b = INT_MIN;
    int i,j,k;

    cin>> m >> n;
    p= m+n;

    int arr1[m+1], arr2[n+1], arr[p];

    for( i= 0; i<m ; i++)
    {
        cin >> arr1[i];
    }

    for( j= 0; j<n ; j++)
    {
        cin >> arr2[j];
    }


    arr1[m]=INT_MAX, arr2[n]=INT_MAX;
    
    for( k= 0,i=0,j=0; k<p ; k++)
    {
        if(arr1[i]<arr2[j])
        {
            arr[k]= arr1[i];
            i++;
        }
        else if(arr1[i]>arr2[j])
        {
            arr[k]= arr2[j];
            j++;
        }
        else
        {
            if(x== -1)
            {
                arr[k]= arr1[i];
                i++;
                x*= -1;
            }
            else
            {
                arr[k]= arr2[j];
                j++;
                x*=-1;
            }

        }
    }
    for( k= 0; k<p ; k++)
        cout<< arr[k] << " ";
        
      
    return 0;
}
