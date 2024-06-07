//calculate the sum of the subarray that is closest to the given number
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
main(){

int arr[4]={30,20,45,30};
int sum=0;int target=75;int mod=0;
for (int i = 0; i < 4; i++)
{
    sum=arr[i]+arr[i+1];
    if(mod<sum%arr[i] && sum<=target)
    { 
    mod=sum%arr[i]; 
    cout<<"closest sum of  element  is: "<<arr[i]<<" "<<arr[i+1]<<" sum: "<<sum<<endl;
    }
}

return 0;
}