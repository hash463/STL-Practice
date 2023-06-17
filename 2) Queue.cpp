#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<int>q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    cout<<q.front()<<" "<<q.back()<<endl;
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    return 0;
}
/*
o/p: 10 40
     10 20 30 40
*/
