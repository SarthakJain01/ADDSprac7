#include <iostream>
#include "QuickSort.h"
#include <vector>
using namespace std;
#include <algorithm>
QuickSort::QuickSort(){

}

// void QuickSort::swap(int *a, int *b){
// int tempval;
//         tempval = a;
//         a = b;
//         b = tempval;
// }
vector<int> QuickSort::sorthelper(vector<int> list,int lowerval,int upperval)
{
int pivot;
int i,j;

if(lowerval<=upperval)
    {
        if(upperval-lowerval >=2)
        {
            pivot = list[lowerval+2];
            swap(list[upperval],list[lowerval+2]);
        }
        else
        {
            pivot = list[upperval];
        }
        i = (lowerval-1);
        for(j = lowerval;j<=upperval-1;j++)
        {
            if(list[j]<pivot)
            {
                i++;
                swap(list[j],list[i]);
            }
        }
        swap(list[upperval],list[i+1]);
        list = sorthelper(list,lowerval,i);
        list = sorthelper(list,i+2,upperval);
    }
    return list;
// for(j = 0;j<list.size()-1;j++){
//     if(list[j]<=pivot){
//         i++;
//         swap(list[i],list[j]);
//     }
// }
}
vector<int> QuickSort::sort(vector<int> list){
    return sorthelper(list,0,list.size()-1);
}
