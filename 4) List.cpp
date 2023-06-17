#include <iostream>
#include <list>
using namespace std;



int main()
{
    list<int>l={10,20,30,40,50};
    auto it=l.begin();
    while(it!=l.end()){
      cout<<*it<<" ";
      ++it;
    } 
    cout<<endl;
    while(it!=l.begin()){
        --it;
        cout<<*it<<" ";
    }
    return 0;
}
/*
o/p: 10 20 30 40 50
     50 40 30 20 10
*/


int main()
{
    list<int>l={10,20,30,40,50};
    cout<<l.front()<<endl;
    cout<<l.back()<<endl;
    cout<<"Size before popping: "<<l.size()<<endl;
    l.pop_front();
    cout<<"Size after popping: "<<l.size()<<endl;
    l.push_front(111);
    l.push_back(555);
    cout<<l.front()<<" "<<l.back()<<endl;
    return 0;
}
/*
o/p: 10
     50
     Size before popping: 5
     Size after popping: 4
     111 555
*/


int main()
{
    list<int>l={3,13,15,17,25};
    list<char>k={'A','B','C'};
    auto it=l.begin();
    ++it;
    ++it;
    l.insert(it,111);
    l.insert(it, k.begin(), k.end());
    l.insert(it, 3, 999);
    l.push_back(1000);
    it=l.begin();
    while(it!=l.end()){
        cout<<*it<<" ";
        ++it;
    }
    return 0;
}

// o/p: 3 13 111 65 66 67 999 999 999 15 17 25 1000



bool isOdd(int x){
    return x%2!=0;
}
int main()
{
    list<int>l;
    l={7,27,16,8,35,42,96};
    auto it1=l.begin();
    advance(it1,2);
    auto it2=l.begin();
    advance(it2,5);
    l.erase(it1,it2);  //Here, it1 is inclusive and it2 is exclusive
    auto it=l.begin();
    while(it!=l.end()){
        cout<<*it<<" ";
        it++;
    }
    cout<<endl;
    l.clear();
    l={7,27,16,8,35,42,96};
    l.remove(35);
    l.remove(96);
    it=l.begin();
    while(it!=l.end()){
        cout<<*it<<" ";
        it++;
    }
    cout<<endl;
    l.clear();
    l={7,35,15,35,35,68,92,35};
    l.remove(35);
    it=l.begin();
    while(it!=l.end()){
        cout<<*it<<" ";
        it++;
    }
    cout<<endl;
    l.clear();
    l={7,27,16,8,35,42,96};
    l.remove_if(isOdd);
    it=l.begin();
    while(it!=l.end()){
        cout<<*it<<" ";
        it++;
    }
    cout<<endl;
    return 0;
}
/*
o/p: 7 27 42 96 
     7 27 16 8 42 
     7 15 68 92 
     16 8 42 96
*/


int main()
{
    list<int>l={3,13,13,13,15,17,18,18,18,29,17,6,6,6,6,6,29,17};
    l.unique(); //removes continuousl occurring duplicates
    for(auto it=l.begin(); it!=l.end(); it++) cout<<*it<<" ";
    cout<<endl;
    l.reverse();
    for(auto it=l.begin(); it!=l.end(); it++) cout<<*it<<" ";
    cout<<endl;
    l.sort();
    for(auto it=l.begin(); it!=l.end(); it++) cout<<*it<<" ";
    cout<<endl;
    l.unique();
    for(auto it=l.begin(); it!=l.end(); it++) cout<<*it<<" ";
    cout<<endl;
    return 0;
}
/*
o/p: 3 13 15 17 18 29 17 6 29 17 
     17 29 6 17 29 18 17 15 13 3 
     3 6 13 15 17 17 17 18 29 29 
     3 6 13 15 17 18 29
*/


int main()
{
    list<int>l1={3,17,25,84};
    list<int>l2={1,19,29};
    l1.merge(l2);
    for(auto it=l1.begin(); it!=l1.end(); it++) cout<<*it<<" ";
    cout<<endl;
    l1.clear(); 
    l2.clear();
    l1={8,25,4,9,16};
    l2={2,14,81,31,16};
    l1.sort();
    l2.sort();
    l2.merge(l1);
    for(auto it=l2.begin(); it!=l2.end(); it++) cout<<*it<<" ";
    cout<<endl;
    return 0;
}
/*
o/p: 1 3 17 19 25 29 84 
     2 4 8 9 14 16 16 25 31 81
*/


int main()
{
    list<int>l1={3,17,25,84};
    list<int>l2={1,19,29};
    auto it1=l1.begin();
    ++it1;
    ++it1;
    l1.splice(it1,l2);
    for(auto it=l1.begin(); it!=l1.end(); it++) cout<<*it<<" ";
    cout<<endl;
    l1.clear();
    l2.clear();
    l1={3,17,25,84};
    l2={1,19,29};
    cout<<"Before executing, Size of l1 is: "<<l1.size()<<" and Size of l2 is: "<<l2.size()<<"\n";
    it1=l1.begin();
    ++it1;
    ++it1;
    auto it2=l2.begin();
    ++it2;
    l1.splice(it1,l2,it2);
    for(auto it=l1.begin(); it!=l1.end(); it++) cout<<*it<<" ";
    cout<<endl;
    cout<<"After executing, Size of l1 is: "<<l1.size()<<" and Size of l2 is: "<<l2.size()<<"\n";
    l1.clear();
    l2.clear();
    l1={3,17,25,84,90,13,65};
    l2={1,19,29};
    cout<<"Before executing, Size of l1 is: "<<l1.size()<<" and Size of l2 is: "<<l2.size()<<"\n";
    it1=l1.begin();
    it2=l1.begin();
    advance(it2,4);
    auto it=l2.begin();
    l2.splice(++it, l1, it1, it2);
    for(auto itr=l2.begin(); itr!=l2.end(); itr++) cout<<*itr<<" ";
    cout<<endl;
    cout<<"After executing, Size of l1 is: "<<l1.size()<<" and Size of l2 is: "<<l2.size()<<"\n";
    return 0;
}
/*
o/p: 3 17 1 19 29 25 84 
     Before executing, Size of l1 is: 4 and Size of l2 is: 3
     3 17 19 25 84 
     After executing, Size of l1 is: 5 and Size of l2 is: 2
     Before executing, Size of l1 is: 7 and Size of l2 is: 3
     1 3 17 25 84 19 29 
     After executing, Size of l1 is: 3 and Size of l2 is: 7
*/
