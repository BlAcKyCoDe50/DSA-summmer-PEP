//arrange the elements in the form of the way
//sol: apply sorting then rearrange the elements 
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
main(){
int arr[6]={10,20,1,5,6,8};

//applying sorting 

for (int i = 0; i < 6; i++)
{
    for (int j = i+1; j< 6; j++)
    {
        if(arr[i]>arr[j]) swap(arr[i],arr[j]);
    }
}







return 0;
}