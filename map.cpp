//MAPS:

//map is data structure in which data will be stored in form of key value.
//ex - suppose your key is love and value is sanjana then love will point towards the sanjana.
//here all keys are unique
//1 key will point to the 1 value only.which means love will only point to the sanjana and it cant point on anything else.
//it is possible that 2 keys can point on same element i.e. love is pointing on sanjana also hate is pointing on sanjana.
//i.e. same cant point on 2 values.

#include<iostream>
#include<map>

using namespace std;
int main()
{
    //create
    map<int, string> m;

    //insert elements
    m[1]="sanjana"; 
    m[2]="narayan";
    m[13]="alam";
    //1 2 13 are key here and sanjana alam ara values.

    //another insertion method
    //m.insert fun and in curly brac key and value.
    m.insert ({5,"bheem"}); 
    //now if we print it o/p will be 1 2 5 13.

    //for printing key value ,use i.first and everything will be print in sorted order
    //for printing values , use i.second .
    for(auto i:m)
    {
        cout<<i.first<<endl;
    }//o/p 1 2 13.
    cout<<endl;

    //in case of orderd map element will be print in sorted mannar
    //in unorderd map it will be print in random or given order.
 
     cout<<"Before erasing "<<endl;
    //printing values and keys
    for(auto i:m)
    {
       cout<<i.first<<" "<<i.second<<endl;
    }
    // o/p->
    // 1 sanjana
    // 2 narayan
    // 5 bheem
    // 13 alam

    //count fun
    cout<<"finding 13 "<<m.count(13)<<endl;
    //1 as it is present 

    //erase
    m.erase(13);
    cout<<"after erasing "<<endl;
    for(auto i:m)
    {
       cout<<i.first<<" "<<i.second<<endl;
    }
    // o/p
    // 1 sanjana
    // 2 narayan
    // 5 bheem

    //complexity for insert,erase,find,count is o(log n).
    //remember-in case of map its o(log n) not o(1). cause in this map implementation is done by using balance tree which complexity is o(log n).
    //for unorderd map implementation is done by using hash table, and there your sarch complexity is o(1).

    //find-return iterator for specific element

    auto it=m.find(5);

    for(auto i=it; i!=m.end(); i++)
    {
       cout<<(*i).first<<endl;
    }
    //after 5 and including 5 every element will be print
    //5 or 5 13 etc.

}