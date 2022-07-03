//creating a queue in which 1st element always will be greatest
//i.e.  MAX_HEAP

//default heap will be max_heap and we have convert it into a heap
//priority queue is data structure in which we insert data elements and when we will start to remove them we can use only 2 methods
//1)create max_heap so element which is remove will always be maximum element.
//2)create min_heap so element which is remove will always be minimum element.

#include<iostream>

//here we use queue as liabrary
#include<queue>
using namespace std;

int main()
{
    //create MAX_HEAP
    priority_queue<int>maxi;
    //this is for MAX_HEAP i.e. whenever we will fetch elements, the always greatest element will get fetch first. 

    //create MIN_HEAP
    priority_queue<int,vector<int> , greater<int> >mini;
    //mini- assign name (it can be any name)

    //push data
    maxi.push(1);
    maxi.push(3);
    maxi.push(2);
    maxi.push(0);

    //size
    cout<<"size is = "<<maxi.size()<<endl;//4

    //to print
    int n=maxi.size();
    for(int i=0; i<n; i++)
    {
        cout<<maxi.top()<<" ";//printing the element
        maxi.pop();        //removing the element
        //so every element will be printed and removed from top to bottom.
    }cout<<endl;
    //output = 3 2 1 0 i.e max element get 1st printed.
    //dont use maxi.size in for loop 1st store it in n as every time we pop maxi.size will be decrease and all elements wouldnt print.



    //for MIN_HEAP
    mini.push(5);
    mini.push(1);
    mini.push(0);
    mini.push(4);
    mini.push(3);

    //size
    cout<<"size is = "<<mini.size()<<endl;//5

    //to print
    int m=mini.size();
    for(int i=0; i<m; i++)
    {
        cout<<mini.top()<<" ";//printing the element
        mini.pop();        //removing the element
        //so every element will be printed and removed from top to bottom.
    }cout<<endl;
    //output = 0 1 3 4 5 i.e. min element get 1st printed.


    //empty
    cout<<"empty or not "<<mini.empty()<<endl; 
}
   //1 i.e. true its empty as every element is removed after printing. 
