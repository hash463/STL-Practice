
#include <iostream>
#include<stack>
using namespace std;



int main()
{
    stack<int>s;
    s.push(10);
    s.push(20);
    s.push(30);
    cout<<s.size()<<endl;
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    return 0;
}
/*
o/p: 3
     30 20 10
*/


int main()
{
    stack<char>s1,s2;
    s1.push('a');
    s1.push('b');
    s1.push('c');
    s2.push('d');
    s2.push('e');
    s1.swap(s2);
    while(!s1.empty()){
        cout<<s1.top()<<" ";
        s1.pop();
    }
    cout<<endl;
    while(!s2.empty()){
        cout<<s2.top()<<" ";
        s2.pop();
    }
    return 0;
}
/*
o/p: e d
     c b a
*/


int main()
{
    stack<int>s;
    s.push(10);
    s.emplace(20);
    s.push(30);
    s.emplace(40);
    cout<<s.size()<<endl;
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    return 0;
}
/*
o/p: 4
     40 30 20 10
*/
