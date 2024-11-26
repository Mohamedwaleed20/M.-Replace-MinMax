#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long n ;
    cin >> n ;
    long long arr[n];
    for(long long i = 0 ; i<n;i++)
    {
        cin >> arr[i];
    }
    long long mx  = arr [0] ;
    long long mn  = arr [0] ;
    for(long long i = 0 ; i<n;i++)
    {
        if(mx<arr[i])
        {
            mx = arr[i];
        }
    }
    for(long long i = 0 ; i<n;i++)
    {
        if(mn>arr[i])
        {
            mn = arr[i];
        }
    }
    for(long long i = 0 ; i<n;i++)
    {
       if(arr[i]==mx)
       {
           cout << mn << " " ;
       }
       else if(arr[i]==mn)
       {
           cout << mx << " " ;
       }
       else
       {
           cout << arr[i] << " " ;
       }
    }
    return 0;
}
