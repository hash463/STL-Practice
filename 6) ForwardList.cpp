#include <iostream>
#include <forward_list>
using namespace std;



int main()
{
    forward_list<int>l={10,20,30,40,50};
    for(int x:l) cout<<x<<" ";
    cout<<"\n";
    auto it=l.begin();
    while(it!=l.end()){
        cout<<*it<<" ";
        it++;
    }
    cout<<"\n";
    l.push_front(0);
    cout<<l.front()<<endl;
    l.pop_front();
    cout<<l.front()<<endl;
    return 0;
}
/*
o/p: 10 20 30 40 50
     10 20 30 40 50 
     0
     10
*/


int main()
{
    forward_list<int>l={10,20,30,40,50};
    auto it=l.begin();
    advance(it,2);
    l.insert_after(it,111);
    for(it=l.begin(); it!=l.end(); it++) cout<<*it<<" ";
    cout<<endl;
    it=l.before_begin();
    l.insert_after(it,222);
    for(it=l.begin(); it!=l.end(); it++) cout<<*it<<" ";
    cout<<endl;
    forward_list<int>l2{1,2,3};
    auto itr1=l2.begin();
    auto itr2=l2.begin();
    ++itr2;++itr2;++itr2;
    it=l.before_begin();
    l.insert_after(it,itr1,itr2);
    for(auto itr=l.begin(); itr!=l.end(); itr++) cout<<*itr<<" ";
    cout<<endl;
    l.insert_after(it,{'a','b','c'});
    for(auto itr=l.begin(); itr!=l.end(); itr++) cout<<*itr<<" ";
    cout<<endl;
    return 0;
}
/*
o/p: 10 20 30 111 40 50 
     222 10 20 30 111 40 50 
     1 2 3 222 10 20 30 111 40 50 
     97 98 99 1 2 3 222 10 20 30 111 40 50
*/


bool singleDigit(int x){
    return x<=10;
}
bool isEven(int x){
    return x%2==0;
}
int main()
{
    forward_list<int>l1={10,20,20,20,30,40,50,20,50,50,50,60,70,60};
    l1.unique();
    for(auto it=l1.begin(); it!=l1.end(); it++) cout<<*it<<" ";
    cout<<endl;
    forward_list<int>l2={1,9,13,7,15,8,6,10,14};
    l2.remove_if(singleDigit);
    for(auto it=l2.begin(); it!=l2.end(); it++) cout<<*it<<" ";
    cout<<endl;
    l2.clear();
    l2={1,9,13,7,15,8,6,10,14};
    l2.remove_if(isEven);
    for(auto it=l2.begin(); it!=l2.end(); it++) cout<<*it<<" ";
    cout<<endl;
    return 0;
}
/*
o/p: 10 20 30 40 50 20 50 60 70 60 
     13 15 14 
     1 9 13 7 15
*/


int main()
{
    forward_list<int>l1={3,13,7,19,5};
    l1.sort();
    for(auto it=l1.begin(); it!=l1.end(); it++) cout<<*it<<" ";
    cout<<endl;
    l1.clear();
    l1={31,59,64,85};
    forward_list<int>l2={18,69,75};
    l1.merge(l2);
    for(auto it=l1.begin(); it!=l1.end(); it++) cout<<*it<<" ";
    cout<<endl;
    l1.reverse();
    for(auto it=l1.begin(); it!=l1.end(); it++) cout<<*it<<" ";
    cout<<endl;
    return 0;
}
/*
o/p: 3 5 7 13 19 
     18 31 59 64 69 75 85 
     85 75 69 64 59 31 18
*/   


int main()
{
    forward_list<int>l1={10,20,30,40,50};
    forward_list<int>l2={1,2,3,4};
    auto it1=l1.before_begin();
    l1.splice_after(it1,l2);
    for(auto itr=l1.begin(); itr!=l1.end(); itr++) cout<<*itr<<" ";
    cout<<endl;
    l1={10,20,30,40,50};
    it1=l1.begin();
    l1.erase_after(it1);
    for(auto itr=l1.begin(); itr!=l1.end(); itr++) cout<<*itr<<" ";
    cout<<endl;
    l1={10,20,30,40,50};
    it1=l1.begin();
    auto it2=l1.begin();
    advance(it2,3);
    l1.erase_after(it1,it2);
    for(auto itr=l1.begin(); itr!=l1.end(); itr++) cout<<*itr<<" ";
    cout<<endl;
    l1={10,20,30,40,50};
    l2={1,2,3,4};
    it1=l1.begin();
    it2=l2.begin();
    ++it2;
    l1.splice_after(it1,l2,it2);
    for(auto itr=l1.begin(); itr!=l1.end(); itr++) cout<<*itr<<" ";
    cout<<endl;
    l1={10,20,30,40,50};
    l2={1,2,3,4};
    it1=l1.begin();
    it2=l2.begin();
    auto it3=l2.begin();
    advance(it3,3);
    l1.splice_after(it1,l2,it2,it3);
    for(auto it=l1.begin(); it!=l1.end(); it++) cout<<*it<<" ";
    cout<<endl;
    l1.swap(l2);
    for(it1=l1.begin(); it1!=l1.end(); it1++) cout<<*it1<<" ";
    cout<<endl;
    for(it2=l2.begin(); it2!=l2.end(); it2++) cout<<*it2<<" ";
    cout<<endl;
    return 0;
}
/*
o/p: 1 2 3 4 10 20 30 40 50 
     10 30 40 50 
     10 40 50 
     10 3 20 30 40 50
     10 2 3 20 30 40 50 
     1 4 
     10 2 3 20 30 40 50
*/
