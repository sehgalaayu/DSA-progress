#include <iostream>
#include <string>
using namespace std;

int vowelCount(string str){
    int count=0;
    for(int i=0; i<str.length();i++){
        char ch = str[i];
    if(ch == 'a' || ch == 'e' || ch == 'i'||ch == 'o'||ch =='u'){
        count++;
        }
    }
    cout<<count<<endl;
    return count;

}

int main()
{
    string str = "aeioup";
    vowelCount(str);
    return 0;
    
}