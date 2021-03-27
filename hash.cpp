#include <bits/stdc++.h>
#include <iostream>

using namespace std;
/* we have to given number n and we have
to count frequencies of all number b/w 0
to n*/
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0 ; i<n ; i++)
    {
        cin>>arr[i];
    }
    int freq[n];
    memset(freq,0,sizeof(freq));
    for(int i=0 ; i<n ; i++)
    {
        freq[arr[i]]++;
    }
    cout<<"Frequencies of number occur b/w 0 to n is:-"<<endl;
    for(int i=0 ; i<n ; i++)
    {
        cout<<i<<":"<<freq[i]<<endl;
    }
    return 0;
}