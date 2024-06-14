#include<iostream>
#include<bits/stdc++.h>
using namespace std;
main(){

int arr[3]={4,8,6};
int n=sizeof(arr)/sizeof(arr[0]);
//sorting the array
for (int i = 0; i < n; i++)
{
    for (int j = 1; j < n; j++)
    {
        if(arr[i]>arr[j]) swap(arr[i],arr[j]);
    }
}

int mini=arr[0];int maxi=arr[n-1];
// cout<<n<<endl;
// cout<<min<<endl;
// cout<<max<<endl;
int diff=maxi-mini+1;
cout<<diff-n<<endl;





return 0;
}