//Deque means when you are able to perform push and pop i.e. insertion and deletion on both ends i.e. from front as well as back.

//As arrays and vectors have contiguous memory allocation but in deque have multiple fixed static arrays and track in which arrays data is placed.

//you can implement it by creating a array and deque is  dynamic i.e. size can be increased. and random access is also possible in it.

#include<iostream>

//include library
#include<deque>
using namespace std;

int main()
{
   //create deque
   deque<int> d;

   //insert elements
    d.push_back(1);//insert at back
    d.push_front(2);//insert at last

    for(int i:d)
    {
        cout<<i<<" ";//ans 2 1 as 2 was inserted at front and 1 was inserted at back.
    }
   cout<<endl;

    //remove
    d.pop_back();//last element will be pop
    d.pop_front();//first element will be pop.
    
 
    //access elements
    d.push_back(3);
    d.push_front(4);

    //access index element
    cout<<"Print 1st index element "<<d.at(0)<<endl;//4
    cout<<"Print 1st index element "<<d.at(1)<<endl;//3

    //front and back element printing
    cout<<"Front "<<d.front()<<endl;//4
    cout<<"back "<<d.back()<<endl;//3

    //check if its empty or not
    cout<<"Empty or not "<<d.empty()<<endl;//0 as not empty.

    //fisrt and last element
    d.begin();
    d.end();

   //for deletion use erase function
   //just check size before and after

   cout<<"before erase "<<d.size()<<endl;

   //here for erasing you have specify what you want to delete as its deque.
    d.erase(d.begin(),d.begin()+1);
    //it will erase from 1st begin to 1st element.

    cout<<"after erase "<<d.size()<<endl;

  //size become zero after you erase all 
  //but your MAX_SIZE i.e. memory allocated to deque will be same at start and end.
   
}
