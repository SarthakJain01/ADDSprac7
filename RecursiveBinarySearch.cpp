#include <iostream>
#include "RecursiveBinarySearch.h"
#include <vector>
using namespace std;
void RecursiveBinarySearch::sorthelper(vector<int> list)
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
};
bool RecursiveBinarySearch::searchhelper(vector<int> list, int low, int high, int value)
{
    int mid;
if(low<=high){

    mid = ((high+low)/2);
        if (list[mid] == value)
        {
        return true;
        }
        else if (list[mid] >value)
            return searchhelper(list,low,mid -1, value);
        else
            return searchhelper(list,mid+1,high, value);
}
else{
return false;
}


};
bool RecursiveBinarySearch::search(vector<int> list,int number)
{
sorthelper(list);
return searchhelper(list,0,list.size(),number);

};