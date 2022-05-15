#include <iostream>
#include "BubbleSort.h"
#include <vector>
using namespace std;
vector<int> BubbleSort::sort(vector<int> list)
{
    int i,j;
    int counter = list.size();
    int tempval;
    for(i = 0;i<counter-1;i++){
        for(j = 0;j<counter-i-1;j++){
            if(list[j] > list[j+1])
            {
                tempval = list[j];
                list[j] = list[j+1];
                list[j+1] = tempval;
                // cout<<list[j]<<endl;
                // cout<<list[j+1]<<endl;
            }
        }
    }
    return list;
}