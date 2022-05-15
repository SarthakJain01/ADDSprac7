#include <iostream>
#include "Sort.h"
#include "BubbleSort.h"
#include "QuickSort.h"
#include "RecursiveBinarySearch.h"
#include <vector>
using namespace std;

void print(vector<int>list)
{
    for(int i = 0;i<list.size();i++)
    {
        cout<<list[i]<<" ";
    }
    cout<<endl;
}

vector<int>input(){
    vector<int>list;
    int number;
    while(cin>>number){
        list.push_back(number);
    }
    return list;
}

int main(void)
{
    vector<int>list;

    list = input();
    QuickSort Method;
    list = Method.sort(list);
    RecursiveBinarySearch Method2;
    bool result = Method2.search(list,1);
    if(result == 1)
    {
        cout<<"true ";
    }
    else
    {
        cout<<"false ";
    }
    print(list);
}