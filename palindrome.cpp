#include<iostream>
using namespace std;

bool Palindrome(string str,int i,int j){
//base case
if(i>j)
    return true;

if(str[i]!=str[j])
return false;
else
{
    return Palindrome(str,i+1,j-1);
}



}
int main()
{
string name="niti";
cout<<endl;
bool ispalindrome=Palindrome(name,0,name.length()-1);
if(ispalindrome)
    cout<<"Its a palindrome"<<endl;
    else{
cout<<"Not a palindrome"<<endl;
    }


return 0;
}