#include <iostream>
#include <map>
#include <unordered_map>
using namespace std;



int main()
{
    map<int,string>m={
        {30, "Watermelon"},
        {5, "Banana"},
        {10, "Guava"},
        {20, "Pineapple"},
        {15, "Apple"}
    };
    for(auto it=m.begin(); it!=m.end(); it++) cout<<it->first<<" "<<it->second<<"\n";
    cout<<"Value IN key 15 is "<<m[15]<<endl;
    cout<<"Value IN key 12 is "<<m[12]<<endl;
    cout<<"Value AT key 20 is "<<m.at(20)<<endl;
    return 0;
}
/*
o/p: 5 Banana
     10 Guava
     15 Apple
     20 Pineapple
     30 Watermelon
     Value IN key 15 is Apple
     Value IN key 12 is 
     Value AT key 20 is Pineapple
*/


int main(){
    map<string, int>m={
        {"Orange", 20},
        {"Grapes", 30},
        {"Banana", 5}
    };
    cout<<"BEFORE UPDATION: "<<endl;
    for(auto it=m.begin(); it!=m.end(); it++) cout<<it->first<<" "<<it->second<<"\n";
    m["Banana"]=6;
    m["Grapes"]=18;
    cout<<"AFTER UPDATION: "<<endl;
    for(auto it=m.begin(); it!=m.end(); it++) cout<<it->first<<" "<<it->second<<"\n";
    return 0;
}
/*
o/p: BEFORE UPDATION: 
     Banana 5
     Grapes 30
     Orange 20
     AFTER UPDATION: 
     Banana 6
     Grapes 18
     Orange 20
*/


int main(){
    map<string,int>m={{"apple",20},{"watermelon",30},{"banana",5}};
    pair<map<string,int>::iterator,bool>p;
    p=m.insert(pair<string,int> ("grapes",15));
    if(p.second==true) cout<<"Inserted"<<endl;
    else cout<<"Not inserted"<<endl;
    cout<<p.first->first<<" "<<p.first->second;
    return 0;
}
/*
o/p: Inserted
     grapes 15
*/


int main(){
    map<string,int>m1={{"banana", 10},{"orange", 5},{"apple", 7}};
    auto it1=m1.begin();
    map<string,int>m2={{"jackfruit",10},{"pineapple",13},{"grapes",5}};
    m1.insert(m2.begin(), m2.end());
    cout<<"AFTER MERGING M1 AND M2: "<<endl;
    for(auto it=m1.begin(); it!=m1.end(); it++) cout<<it->first<<" "<<it->second<<"\n";
    m1.erase("Orange");
    m1.erase("orange");
    cout<<"AFTER DELETION OF ORANGE: "<<endl;
    for(auto it=m1.begin(); it!=m1.end(); it++) cout<<it->first<<" "<<it->second<<"\n";
    it1=m1.begin();
    ++it1;
    m1.erase(it1);
    cout<<"AFTER DELETION OF IT1: "<<endl;
    for(auto it=m1.begin(); it!=m1.end(); it++) cout<<it->first<<" "<<it->second<<"\n";
    m1.erase(m1.begin(), m1.end());
    return 0;
}
/*
o/p: AFTER MERGING M1 AND M2: 
     apple 7
     banana 10
     grapes 5
     jackfruit 10
     orange 5
     pineapple 13
     AFTER DELETION OF ORANGE: 
     apple 7
     banana 10
     grapes 5
     jackfruit 10
     pineapple 13
     AFTER DELETION OF IT1: 
     apple 7
     grapes 5
     jackfruit 10
     pineapple 13
*/


int main(){
    map<string,int>m={{"banana", 10},{"orange", 5},{"apple", 7}};
    auto it=m.begin();
    m.insert(it, pair<string,int> ("watermelon", 9));
    it=m.find("banana");
    if(it!=m.end()) cout<<"Element found"<<endl;
    else cout<<"Element not found"<<endl;
    it=m.find("peach");
    if(it!=m.end()) cout<<"Element found"<<endl;
    else cout<<"Element not found"<<endl;
    cout<<"No. of grapes is: "<<m.count("grapes")<<endl;
    cout<<"No. of oranges is: "<<m.count("orange")<<endl;
    return 0;
}
/*
o/p: Element found
     Element not found
     No. of grapes is: 0
     No. of oranges is: 1
*/


int main(){
    map<int,string>m1={{10,"banana"}, {15,"orange"}, {20,"pineapple"}, {30,"watermelon"}, {15, "apple"}, {7,"jackfruit"}, {15,"guava"}};
    cout<<"ASCENDING ORDER IS:"<<"\n";
    for(auto it=m1.begin(); it!=m1.end(); it++) cout<<it->first<<" "<<it->second<<endl;
    map<int,string, greater<int>>m2={{10,"banana"}, {15,"orange"}, {20,"pineapple"}, {30,"watermelon"}, {15, "apple"}, {7,"jackfruit"}, {15,"guava"}};
    cout<<"DESCENDING ORDER IS:"<<"\n";
    for(auto it=m2.begin(); it!=m2.end(); it++) cout<<it->first<<" "<<it->second<<endl;
    return 0;
}
/*
o/p: ASCENDING ORDER IS:
     7 jackfruit
     10 banana
     15 orange
     20 pineapple
     30 watermelon
     DESCENDING ORDER IS:
     30 watermelon
     20 pineapple
     15 orange
     10 banana
     7 jackfruit
*/
     
/*     
UNORDERED MAP I SUSED TO ACCESS IN THE SAME WAY AS THE USR SPECIFIED.
IT DOES NOT FOLOW ANY SPECIFIC ORDER (ASC OR DESC).
*/
