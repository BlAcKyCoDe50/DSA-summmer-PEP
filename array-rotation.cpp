//create an array
//sor the array
//No of elements/2
//divide the array into two parts
//reverse part1 & part 2 and array like : revese(part2)| reverse(part1)
//target=6 return the index .

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void printarray(int arr[],int size)
{
for (int i = 0; i < 7; i++)
{
    cout<<arr[i]<<" ";
}
}

void reverse(int arr[], int start, int end) {
  while (start < end) {
    swap(arr[start], arr[end]);
    start++;
    end--;
  }
}


main(){

int arr[7] ={5,1,4,2,0,6,8};
int size=sizeof(arr)/sizeof(arr[0]);
//sorting the array using bubble sort
for (int i = 0; i < 7; i++)
{
    for (int j = i+1; j < 7; j++)
    {
        if(arr[i]>arr[j])
        {
            // swap(arr[i],arr[j]);
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
    
}
printarray(arr,size);
cout<<endl;

// cout<<"Number of elements: "<<size<<endl;
int division=size/2;
cout<<"Division: "<<division<<endl;

reverse(arr,0,division-1);
reverse(arr,division,size-1 );

printarray(arr,size);
return 0;
}