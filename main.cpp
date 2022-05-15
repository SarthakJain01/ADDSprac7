#include <iostream>
#include "Sort.h"
#include "BubbleSort.h"
#include "QuickSort.h"
#include "RecursiveBinarySearch.h"
#include <vector>
using namespace std;

int main()
{

vector<int>Array1({1,3,5,4,-5,100,7777,2014});
vector<int>Array2({0,3,5,4,-5,100,7777,2014});
BubbleSort Method;
QuickSort Method2;
RecursiveBinarySearch Method3;
vector<int>result1 = Array1;
bool result2 = 0;
bool result4 = 0;
vector<int>result3 = Array2;

result2 = Method3.search(Array1,1);
if(result2 == 1)
{
cout<<"true ";
}
else
{
cout<<"false ";
}

result1 = Method.sort(result1);
for(int x = 0;x<result1.size();x++){
    cout<<result1.at(x)<<" ";
};
cout<<""<<endl;

result4 = Method3.search(Array2,1);
if(result4 == 1)
{
cout<<"true ";
}
else
{
cout<<"false ";
}
result3 = Method2.sort(result3);
for(int x = 0;x<result3.size();x++){
    cout<<result3.at(x)<<" ";
};
cout<<""<<endl;

}
// vector<int>Array2({1,3,5,4,-5,100,7777,2014});
// QuickSort Method2;
// Array2 = Method2.sort(Array2);
// for(int x = 0;x<Array2.size();x++){
//     cout<<Array2.at(x)<<" ";
// };
// cout<<""<<endl;

// vector<int>Array3({1,3,5,4,-5,100,7777,2014});
// RecursiveBinarySearch Method3;
// bool result = Method3.search(Array3,2);
// if(result == 1)
// {
// cout<<"true"<<endl;
// }
// else
// {
// cout<<"false"<<endl;
// }
// }