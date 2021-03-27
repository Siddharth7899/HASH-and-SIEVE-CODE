#include <bits/stdc++.h>
#include <iostream>

using namespace std;

void checkprime(long long int n)
{
    bool arr[n+1];
    arr[0]=false;
    arr[1]=false;
    for(int i=2 ; i<=n ; i++)//marking all number  to be prime
    {
        arr[i]=true;
    }
    for(int i=2 ; i*i<=n ; i++)//unmark multiple of primes
    {
        if(arr[i]==true)
        {
            for(int j=i*i ; j<=n ; j+=i)
            {
                arr[j]=false;
            }
        }
    }
    int count=0;
    for(int i=2 ; i<n ; i++)
    {
        if(arr[i]==true)
        {
            count++;
        }
    }
    cout<<count<<endl;
}

int main(){
    int t;//number of test case
    cin>>t;
    for(int i=0 ; i<t ; i++){
      long long int n;//number upto which we have to find all primes
      cin>>n;
      checkprime(n);//calling to function checkprime
    }
    return 0;
}