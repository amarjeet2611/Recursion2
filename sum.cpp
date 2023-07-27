#include<iostream>
using namespace std;
int sum(int arr[],int size){
  //base condition
  if(size<=0){
    return 0;
  }
int ans=sum(arr,size-1)+arr[size-1];
return ans;
}

int main()
{
int arr[5]={2,4,6,10,9};
int size=5;

cout<<"Sum of array is: "<<sum(arr,size)<<endl;

return 0;
}