//Similar data type and stored in contiguous memory location


#include<iostream>

//for arrays 1st include liabrary:
#include<array>
using namespace std;

//create array:
int main()
{
    //this array is static and cant be use in cp
    
    array<int,4> a = {1,2,3,4};

    // array-create array
    // int- type of elements to be added
    // 4-size of array
    // a - name of array
    // {1,2,3}- add elements

    //size of array
    int size= a.size();

    //Traverse:
    for(int i=0; i<size; i++)
    {
        cout<<a[i]<<endl;//print array
    }

    //element at specific index

    cout<<"Element at 2nd index "<<a.at(2)<<endl;
    cout<<"Element at 2nd index "<<a.at(3)<<endl;
    //a-name of array and use at function (index)

    //check if element is empty or not

    cout<<"Empty or not = "<<a.empty()<<endl;
    //array name and use empty() it will return true or false value i.e 0 = false means not empty and 1 means true i.e array is empty.
    
    //find the 1st and last element of array

    cout<<"First element = "<<a.front()<<endl;
    cout<<"last element = "<<a.back()<<endl;
    //use front for 1st and back for last element

  //all the operations are perform by o(1) complexity
}
