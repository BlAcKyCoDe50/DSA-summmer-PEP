//arrange the array in the order that all the positive elements will shift to the left
//side and positive elements shifted to right side.

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
main(){

int arr[7]={5,-1,6,-2,-6,7,-10};

for (int i = 0; i < 7; i++)
{
    for (int j = 0; j < 7 ; j++)
    {
        if(arr[j]>arr[j+1]) swap(arr[j],arr[j+1]);
    }
}

for (int i = 0; i < 7; i++)
{
    cout<<arr[i]<<" ";
}

return 0;
}