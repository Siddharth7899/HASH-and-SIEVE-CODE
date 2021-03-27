#include <bits/stdc++.h>
#include <iostream>

using namespace std;

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
    for(int i=0 ; i<n ; i++)
    {
        cout<<"Frequencies of number occur b/w 0 t0 n is:-"<<endl<<i<<":"<<freq[i]<<endl;
    }
    return 0;
}