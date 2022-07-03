//dynamic array same as array but as soon as its full and you want to insert more elements ,it will double its size. i.e it will create a new vector with double size and it will copy all the elements from old vector and dump old vector


#include<iostream>

//for vector include vector library
#include<vector>
using namespace std;


int main()
{
   //create vector
   vector<int>v;
   // vector of type int and name as v 
   //when we create a new vector its size is 0

   //create a vector with specific size
   vector<int> a(5,1);
   //were 5 is size of vector 
   //1 is intilising every element with 1 i.e assigh 1 to every element.

   //for copying vector elements from a to last
   //so now if we use last to print the elements ,instead of a we will get same result.
   vector<int>last(a);

   //print 
   for(int i:a)
   {
      cout<<i<<" "<<endl;
   }
   //ans will be 1 1 1 1 1.

   //for inserting a elements:
   v.push_back(1);

   //size means no of element and capacity means total memory allocated to elements
   cout<<"capacity is "<<v.capacity()<<endl;//ans 1

   v.push_back(2);
   cout<<"capacity is equal to  "<<v.capacity()<<endl;//ans 2

    v.push_back(3);
    cout<<"capacity is equal   "<<v.capacity()<<endl;//ans 2
   //ans is 4 why??
   //at first the size was 2 so when you push 3 it will double the size . 
   //same when you push 2 the actual size was 1 so it doubled the size from 1 to 2. 
   //thats how the capacity changes to double as you insert new elements.

   cout<<"size is "<<v.size()<<endl;//ans 3 as size is no of elements present in vector and capacity is memory.

   //element at specific index
   cout<<"Element at 2nd index "<<v.at(2)<<endl;

   //1st and last elements
   cout<<"front "<<v.front()<<endl;
   cout<<"back "<<v.back()<<endl;

   //print vector
   cout<<"before pop "<<endl;//just to check
   for(int i:v)
   {
    cout<<i<<" ";
   }cout<<endl;

   //for deleting use pop_back()
   //dont use cout , endl with push and pop
   //last element will get removed
   v.pop_back();

   cout<<"after pop "<<endl;//just to check
   for(int i:v)
   {
    cout<<i<<" ";
   }cout<<endl;

   //to clear vector we use clear function
   //in this size will become 0 as we clear vector
   //but the capacity will not be 0 it will be as it is.

   cout<<"before clear size "<<v.size()<<endl;//2
   cout<<"before clear capacity "<<v.capacity()<<endl;//4


   v.clear();//clear function

   cout<<"after clear size "<<v.size()<<endl;//0
   cout<<"after clear capacity "<<v.capacity()<<endl;//4

   //you can access with constant time i.e o(1).
}
