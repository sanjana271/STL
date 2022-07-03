//SET stores unique elements only i.e. one element only once.
//ex- if you have 2 1 3 1 1 then also 1 will be stored only once.

//implentation of set behindthe scene is done by using BST(binary search tree)
//once you add element in set you cant modify it.
//so you can either add or delete element , no modification can be done.
//elements will be in sorted order at the time of fetching.

//in unordered set , set is fast(not sure) as compared to ordered set.
//while fetching the elements from a unordered they appear in unordered way only i.e not in sorted way.

#include<iostream>
#include<set>

using namespace std;

int main()
{
    //create
    set<int>s;

    //remember:
    //for inserting we use insert function not push

    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(1);
    s.insert(6);
    s.insert(6);
    s.insert(8);
    s.insert(8);

    //imp
    //complexity for insertion will be o(log n)
    //similar to binary search tree.

    //print
    //remember
    //for printing we use auto word instead of set itself


    //why we use auto:
    //If we don't want to specify the data type(int , string etc), we can use auto for any data type.
    for(auto i:s)
    {
        cout<<i<<" ";
    }cout<<endl;
    //o/p = 1 5 6 8 
    //in sorted manner as its ordered set.
    //even though 5 were reapeted for 3 time and 6,8 repeated for 2 time , it will display them only once.

    //erase
    s.erase(s.begin());//1st element will be deleted.
    for(auto i:s)
    {
        cout<<i<<" ";
    }cout<<endl;// 5 6 8 
     
    //suppose we give it as s.erase(s.begin()+2);
    //in this case we have use iterator

    set<int>::iterator it = s.begin();
    it++;

    s.erase(it);
    for(auto i:s)
    {
        cout<<i<<" ";
    }cout<<endl;
  //5 8
  //5 6 8 will become 5 8 as 6 will be deleted.
  //at begining it was on 5 but we perform it++ so it will shift to begin+1 i.e. second element will be deleted.

  
  //count function   
   cout<<s.count(5)<<endl;
   //1 as its present.
   //count shows if element is present or not
   //its in boolean form 0 and 1 i.e.false and true.
 
   //find 
   //find function gives iterator of element means if element is present then it will return iterator of element.

   set<int>::iterator itr = s.find(5);
   //to verify it
   
   for(auto it=itr;it!=s.end();it++)
   {
      cout<<*it<<" ";
   }cout<<endl;
  //o/p will be 5 8 
  //which means we get reference of that value.

  //the complexity of functions- insert find erase count is o(log n).
  // size begin end functions have complexity as o(1).
}


