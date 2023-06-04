#include<bits/stdc++.h>
using namespace std;

int main()
{
        // increasing order

    int arr1[]= {2,3,6,8}; //first sorted array
    int arr2[]= {1,4,5,7}; //second sorted array


    int m,n,p;
    m= sizeof(arr1)/sizeof(int); //first array size
    n= sizeof(arr2)/sizeof(int); //second array size
        
    p= m+n; //final array size

    int arr[p]; //final array
        
    int i=0;      //first array iteration
    int j=0;      //second array iteration
    int k=0;      //final array iteration
        
    for( k= 0;  k<p ;  k++)
    {
        if(i==m) //check first array end or not
        {
            arr[k]= arr2[j];
              j++;
        }
        else if(j==n)//check second array end or not
        {
            arr[k]= arr1[i];
               i++;
        }

        else if(arr1[i]<arr2[j])
        {
            arr[k]= arr1[i];
            i++;
                    
        }
         else if(arr1[i]>arr2[j])
        {
            arr[k]= arr2[j];
             j++;
                    
        }                        
            
    } //loop end
        
    for( k= 0; k<p ;  k++)
    {
        printf("%d ", arr[k]);
    }//loop end

    return 0;
}
