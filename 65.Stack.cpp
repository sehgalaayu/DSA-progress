#include<iostream>
#include<vector>
using namespace std;
template <class T>
class Stack{
    vector<T> vec;
public:
    void push(T val){ //O(1)  constant time operation
        vec.push_back(val);
    }
    void pop(){//O(1)  constant time operation
        if(isEmpty()){
            cout<<"Stack is Empty\n";
            return ;
        }
        vec.pop_back();
    }
    T top(){//O(1)  constant time operation
        // if(isEmpty()){
        //     cout<<"Stack is Empty\n";
        //     return -1 ;
        // }
        int lastIdx = vec.size()-1;
        return vec[lastIdx];
    }
    bool isEmpty(){//O(1)  constant time operation
        return vec.size() == 0;
    }
};

int main()
{
    Stack<char> s;
    s.push('c');
    s.push('b');
    s.push('a');

    while(!s.isEmpty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
 return 0;
}