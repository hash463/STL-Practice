#include <iostream>
#include <deque>
using namespace std;



int main()
{
    deque<int>d;
    d.push_back(10);
    d.push_back(20);
    d.push_back(30);
    d.push_back(40);
    deque<int>::iterator it=d.begin();
    cout<<*d.begin()<<" "<<*(d.end()-1)<<endl;
    while(it!=d.end()){
        cout<<*it<<" ";
        it++;
    }
    return 0;
}
/*
o/p: 10 40
     10 20 30 40
*/


int main(){
    deque<int>d;
    d.push_back(10);
    d.push_back(20);
    d.push_back(30);
    d.push_back(40);
    int k=d.size();
    for(int i=0; i<k; i++){
        cout<<d[i]<<" ";
    }
    cout<<endl;
    d.at(0)=111;
    d.at(1)=222;
    d.at(2)=333;
    d.at(3)=444;
    while(!d.empty()){
        cout<<d.front()<<" ";
        d.pop_front();
    }
    return 0;
}
/*
o/p: 10 20 30 40
     111 222 333 444
*/


int main(){
    deque<int>d={10,20,30,40};
    auto it=d.begin();
    d.insert(it+2, 111);
    it=d.begin();
    while(it!=d.end()) cout<<*it++<<" ";
    return 0;
}
/*
o/p: 10 20 111 30 40
*/


int main(){
    deque<int>d={10,20,30,40};
    deque<int>temp={1,2,3};
    auto it=d.begin();
    d.insert(it,111);
    while(it!=d.end()) cout<<*it++<<" ";
    cout<<endl;
    it=d.begin();
    d.insert(it+2, temp.begin(), temp.end());
    while(it!=d.end()) cout<<*it++<<" ";
    cout<<endl;
    it=d.begin();
    d.insert(it+4, 4, 999);
    while(it!=d.end()) cout<<*it++<<" ";
    cout<<endl;
    return 0;
}
/*
o/p: 10 20 30 40
     111 10 1 2 3 20 30 40
     111 10 1 2 999 999 999 999 3 20 30 40
*/


int main(){
    deque<int>d={10,20,30,40,50,60};
    d.erase(d.begin()+2);
    auto it=d.begin();
    while(it!=d.end()) cout<<*it++<<" ";
    cout<<endl;
    it=d.begin();
    d.erase(d.begin()+2, d.begin()+4);
    while(it!=d.end()) cout<<*it++<<" ";
    cout<<endl;
    d.clear();
    cout<<d.size()<<endl;
    return 0;
}
/*
o/p: 10 20 40 50 60
     10 20 60
     0
*/
