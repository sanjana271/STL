//queue works on first in first out stratergy

#include<iostream>
#include<queue>

using namespace std;

int main()
{
  //create
  queue<string>q;

  //insert
  q.push("sanjana");
  q.push("narayan");
  q.push("alam");

  //front element
  cout<<"first element "<<q.front()<<endl;//sanjana

  //pop
  q.pop();

  cout<<"first element "<<q.front()<<endl;//narayan as first element is removed.

  //size
  cout<<"size after pop "<<q.size()<<endl;//2 as 1 element is popped out.

  //other operation are same as others
  //complexity will be o(1);

}