#include <iostream>
#include <set>
#include <unordered_set>
#include <vector>
#include <utility>
using namespace std;



int main()
{
    set<int>s={3,7,8,5,5,4,7,8,6,9,6,9,3};
    for(const int &x:s) cout<<x<<" ";
    cout<<endl;
    s={30,40,10,20,20,20,30,10,40,50};
    for(auto it=s.begin(); it!=s.end(); it++) cout<<*it<<" ";
    return 0;
}
/*
o/p: 3 4 5 6 7 8 9
     10 20 30 40 50
*/


int main()
{
    set<int, greater<int>>s={31,7,18,19,7,61,42,61,61,61,42,61,61,61,42,18,7,7,7};
    auto it=s.begin();
    while(it!=s.end()){
        cout<<*it<<" ";
        it++;
    }
    return 0;
}
// o/p: 61 42 31 19 18 7



int main()
{
    set<int>s={13,27,45,63};
    s.insert(60);
    for(auto it=s.begin(); it!=s.end(); it++) cout<<*it<<" ";
    return 0;
}
// o/p: 13 27 45 60 63



int main()
{
    set<int>s={13,27,45,63};
    pair<set<int>::iterator, bool>p;
    p=s.insert(60);
    if(p.second==true) cout<<"Insertion success :)";
    else cout<<"Insertion failure :(";
    cout<<endl;
    auto it=s.begin();
    ++it;
    s.insert(it,97);
    s.insert(it,49);
    s.insert(it,14);
    for(it=s.begin(); it!=s.end(); it++) cout<<*it<<" ";
    return 0;
}
/*
o/p: Insertion success :)
     13 14 27 45 49 60 63 97 
*/


int main(){
    vector<int>v={3,5,7,11,13,10,18,15};
    auto it1=v.begin()+1;
    auto it2=it1+4;;
    set<int>s={6,10,13,18,25,42};
    for(auto it=s.begin(); it!=s.end(); it++) cout<<*it<<" ";
    cout<<endl;
    s.insert(it1,it2);
    for(auto it=s.begin(); it!=s.end(); it++) cout<<*it<<" "; 
    cout<<endl;
    return 0;
}
/*
o/p: 6 10 13 18 25 42 
     5 6 7 10 11 13 18 25 42
*/


int main(){
    set<int>s={19,37,42,65,94};
    s.erase(42);
    for(auto it=s.begin(); it!=s.end(); it++) cout<<*it<<" ";
    cout<<endl;
    s={19,37,42,65,94};
    auto itr=s.begin();
    s.erase(itr);
    for(auto it=s.begin(); it!=s.end(); it++) cout<<*it<<" ";
    cout<<endl;
    s={19,37,42,65,94};
    auto itr1=s.begin();
    auto itr2=s.begin();
    advance(itr2,3);
    s.erase(itr1,itr2);
    for(auto it=s.begin(); it!=s.end(); it++) cout<<*it<<" ";
    cout<<endl;
    return 0;
}
/*
o/p: 19 37 65 94 
     37 42 65 94 
     65 94
*/


int main(){
    set<int>s={10,20,30,40,50};
    auto it=s.find(30);
    if(it!=s.end()) cout<<"Search success"<<"\n";
    else cout<<"Search failure"<<"\n";
    cout<<"The number of 30's present are: "<<s.count(30)<<endl;
    it=s.find(70);
    if(it!=s.end()) cout<<"Search success"<<"\n";
    else cout<<"Search failure"<<"\n";
    cout<<"The number of 70's present are: "<<s.count(70)<<endl;
    it=s.find(30);
    s.insert(35);
    it=s.find(35);
    if(it!=s.end()) cout<<"Insertion successful"<<endl;
    else cout<<"Insertion failed"<<endl;
    for(auto itr=s.begin(); itr!=s.end(); itr++) cout<<*itr<<" ";
    return 0;
}
/*
o/p: The number of 30's present are: 1
     Search failure
     The number of 70's present are: 0
     Insertion successful
     10 20 30 35 40 50
*/


int main(){
    set<int>s={10,20,30,40,50,60,70};
    s.lower_bound(30);                                      //30
    s.lower_bound(35);                                      //40
    s.upper_bound(30);                                      //40
    s.upper_bound(35);                                      //40
    s={10,20,30,40};
    auto cmp=s.value_comp();
    auto it=s.begin();
    cout<<cmp(*it,50)<<"\n";                                //1
    cout<<cmp(*it,10)<<"\n";                                //0
    it=s.begin();
    while(cmp(*it, s.lower_bound(30))){
        cout<<*it<<" ";
        ++it;
    }                                                       //1 1 0
    return 0;
}



int main(){
    multiset<int>ms={3,13,11,11,13,5,8,6,9,6};
    for(const int k:ms) cout<<k<<" ";
    return 0;
}
// o/p: 3 5 6 6 8 9 11 11 13 13



int main(){
    unordered_set<int>us={3,8,7,7,8,5,6,4,6,4,9};
    for(const int k:us) cout<<k<<" ";
    return 0;
}
// o/p: 9 4 6 5 7 8 3



int main(){
    unordered_multiset<int>ums={3,8,7,7,8,5,6,4,6,4,9};
    for(const int k:ums) cout<<k<<" ";
    return 0;
}
// o/p: 9 4 4 6 6 5 7 7 8 8 3
