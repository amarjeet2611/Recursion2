#include<iostream>
using namespace std;

bool BinarySearch(int arr[],int s,int e,int k){
//base case
if(s>e){
    return false;
}
int mid=s+(e-s)/2;
//base case2 
if(arr[mid]==k){
    return true;
}

if(arr[mid]<k){
    return BinarySearch(arr,mid+1,e,k);
}
else{
    return BinarySearch(arr,s,mid-1,k);
}
}
int main()
{
int arr[6]={2,4,6,10,14,16};
int size=6;
int key=16f;
bool ans=BinarySearch(arr,0,5,key);
if(ans){
cout<<"Present"<<endl;
}
else{
    cout<<"absent"<<endl;
}

return 0;
}