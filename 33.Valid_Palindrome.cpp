#include<iostream>
using namespace std;

bool validPalindrome(char word[], int n){
    int st=0;
    int end=n-1;
    while(st<end){
        if(word[st++]!= word[end--]){
            
            cout<<"invalid palindrome"<<endl;
            return false;
        }
    }
    
    cout<<"valid palindrome"<<endl;
    return true;
}

int main()
{
    char word[]="abba";
    int n= strlen(word);
    validPalindrome(word,n);
 return 0;
}