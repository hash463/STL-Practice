#include <iostream>
#include <utility>
using namespace std;

int main()
{
    pair<int,int>p;
    p=make_pair(10,20);
    cout<<p.first<<"\n"<<p.second<<endl;
    return 0;
}
/*
o/p: 10
     20
*/
