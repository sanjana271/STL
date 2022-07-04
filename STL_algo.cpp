//NOTE : ITS IMPORTANT PART

#include<iostream>
#include<vector>
//liabrary to include
#include<algorithm>

using namespace std;

int main()
{
    // for binary search:
    // suppose we have a vector.

    vector<int> v;
    
    //now for binary search array should be sorted.
    v.push_back(1);
    v.push_back(3);
    v.push_back(6);
    v.push_back(7);

    //so now for binary search:to find 6
    //use function binary_search 
    //int()add v.begin(), v.end() as we are gonna search from 1st to last.
    //at end add the element you are searching for.
    //you will get result as 0 and 1 i.e. true or false.

    cout<<"binary search of element "<<binary_search(v.begin(), v.end(), 6)<<endl;
    //o/p - 1 as its  present

    //find iterator of present element:
    //what is iterator:
    //An iterator is an object (like a pointer) that points to an element inside the container. 
    //We can use iterators to move through the contents of the container. 
    //They can be visualized as something similar to a pointer pointing to some location
    //and we can access the content at that particular location using them

    //to find lower bound:
    //what is lower bound?
    //The lower_bound() method in C++ is used to return an iterator pointing to the first element in the range [first, last) which has a value not less than val
   
    //lower bound of 6:
    //it will return a iterator:
    cout<<"lower bound= "<<lower_bound(v.begin(), v.end(), 6)-v.begin()<<endl;
    //in() use (start, end , element)
    //o/p =2 
    //as 6 is single element and present at index 2.
    //and if element is not present in array then it will return the adress of element greater than that element.
    

    //for upper bound:
    //what is upper bound:
    //upper_bound() is a standard library function in C++ defined in the header . 
    //It returns an iterator pointing to the first element in the range [first, last) that is greater than value,
    // or last if no such element is found. The elements in the range shall already be sorted or at least partitioned with respect to val.
   
    cout<<"upper bound= "<<upper_bound(v.begin(), v.end(), 4)-v.begin()<<endl;
    //o/p =2
    //it will always return a adress of element greater than current element.
    //i.e if we give the element as 3 which is present but it will still give adress of element greater than 3.
    //as 4 is not present in a array it will return a adress of element 

    //some other operations:

    //print max and min:
    int a=3;
    int b=5;

    cout<<"max ele is "<<max(a,b)<<endl;//5
    cout<<"min ele is "<<min(a,b)<<endl;//3

    //also swap
    swap(a,b);
    cout<<"A is "<<a<<endl;//5
    cout<<"B is "<<b<<endl;//3

    //u can use swap function on all other containers we use uptil now.

    //reverse the string:
    string abcd= "abcd";
    reverse(abcd.begin(), abcd.end());
    cout<<"string= "<<abcd<<endl;
    //o/p - string= dcba

    //rotate vector:
    rotate(v.begin(),v.begin()+1,v.end());
    //use rotate function write from where you want to rotate
    //then specify how many elements you want to rotate.
    //then specify the last element.
    //here we start rotating from begining element and we want to rotate 1 element.
     
    //now print to see
    cout<<"after rotate "<<endl;

    for(int i:v)
    {
        cout<<i<<" ";
    }cout<<endl;

    //given vector
    // v.push_back(1);
    // v.push_back(3);
    // v.push_back(6);
    // v.push_back(7);

    // after rotate
    // 3 6 7 1


    //sort function
    sort(v.begin(),v.end());
    //sort function based on a intro sort
    //intro sort is a combination of 3 algorithm
    //1)quick sort
    //2)heap sort
    //3)insertion sort
    //so intro sort is made from this sort and wroks behind the scene.

    //now check
    cout<<"After sorting "<<endl;
    for(int i:v)
    {
        cout<<i<<" ";
    }
    //o/p= 1 3 6 7
}