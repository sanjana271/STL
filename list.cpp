//In STL the list is implemented by using doubly linked list.
//direct access is not possible in case of lists such as at etc.
//eg to access 4th elemennt we have to traverse to it.

#include<iostream>
#include<list>
using namespace std;

int main()
{
    //create list
    list<int>l;

    //insert elements
    l.push_back(1); 
    l.push_front(2);

    for(int i:l)
    {
        cout<<i<<" ";//2 1
    }
   //complexity will be o(1) for fun like begin , end , back etc

   //for erase complexity will be o(n) as it will traverse the whole list.
   cout<<endl;

   l.erase(l.begin());
   cout<<"after erase "<<endl;

   for(int i:l)
   {
    cout<<i<<" ";//2 will be deleted.
   }cout<<endl;

   //more function like pop_back and pop_front

   //size
   cout<<"size of list "<<l.size()<<endl;
}

