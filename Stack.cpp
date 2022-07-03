//stack works on first in last out stratergy.

#include<iostream>
#include<stack>
using namespace std;

int main()
{
    //create - type = string
    stack<string>s;

    //push elements

    s.push("sanjana");
    s.push("narayan");
    s.push("alam");

   //print top elements
   cout<<"Top element "<<s.top()<<endl;//alam- as it is inserted last and appear to 1st i.e. on top.

   //pop
   s.pop();

   //now lets check top element
   cout<<"Top element "<<s.top()<<endl;//narayan -as alam was last top element and it get pop out.

   //size
   cout<<"size of stack "<<s.size()<<endl;//2

   //empty or not
   cout<<"Empty or not= "<<s.empty()<<endl;

   //emplace
   //cout<<s.emplace

}