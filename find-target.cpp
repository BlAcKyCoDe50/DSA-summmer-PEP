//find the target element in the array if found return index
//and if not found insert it at the correct position
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
main(){
// int n;
// cin>>n;
vector<int> arr={10,20,30,50};

int target=12;bool flag=false;
for (int i = 0; i < arr.size(); i++)
{
    if(target==arr[i]){
        cout<<"Element found at index: "<<i<<endl;
        flag=true;
        return i;
    }
}

if (!flag) {
        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] > target) {
                arr.insert(arr.begin() + i, target); 
                std::cout << "Element inserted at index: " << i << std::endl;
                return i; 
            }
        }

        //if target is greater than all elements
        arr.push_back(target);
        std::cout << "Element inserted at the end" << std::endl;
        return arr.size() - 1;
    }

cout<<"Element inserted"<<endl;
for (int i = 0; i < arr.size(); i++)
{
    cout<<arr[i]<<" ";
}

return 0;
}