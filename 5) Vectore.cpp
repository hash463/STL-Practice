#include <iostream>
#include<vector> 
using namespace std;



int main()
{
    vector<int>v={10,20,30};
    auto it=v.begin();
    while(it!=v.end()){
        cout<<*it<<" ";
        ++it;
    }
    return 0;
}
// o/p: 10 20 30


int main()
{
    vector<int>v={10,20,30,40,50};
    cout<<"The first element is "<<v.front()<<" and the last element is "<<v.back()<<"\n";
    v.clear();
    v={10,20,30};
    int *p;
    auto it=v.begin();
    p=v.data();
    it+=1;
    v.insert(it,55);
    v.insert(it,3,222);
    for(int x:v) cout<<x<<" ";
    cout<<endl;
    return 0;
}
/*
o/p: The first element is 10 and the last element is 50
     10 222 222 222 55 20 30
*/


int main()
{
    vector<int>v1={10,20,30,40,50};
    vector<int>v2={111,222,333,444};
    auto it1=v1.begin();
    it1+=1;
    auto it2=it1+2;
    v2.insert(v2.begin()+1, it1, it2);
    for(int x:v2) cout<<x<<" ";
    cout<<endl;
    v1.erase(it1,it2);
    for(int x:v1) cout<<x<<" ";
    return 0;
}
/*
o/p: 111 20 30 222 333 444 
     10 40 50
*/


int main()
{
    vector<vector<int>>v;
    vector<int>v1={10,20,30};
    vector<int>v2={111,222};
    vector<int>v3={55,66,77};
    v.push_back(v1);
    v.push_back(v2);
    v.push_back(v3);
    auto it=v.begin();
    cout<<"Sum of elements present in v1, v2, v3 are: ";
    while(it!=v.end()){
        int sum=0;
        vector<int>temp=*it;
        for(int &x:temp){
            sum+=x;
        }
        cout<<sum<<" ";
        sum=0;
        ++it;
    }
    return 0;
}
/*
o/p: Sum of elements present in v1, v2, v3 are: 60 333 198
*/
