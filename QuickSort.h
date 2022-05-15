#include <iostream>
#include "Sort.h"
#include <vector>
#ifndef QUICKSORT_H
#define QUICKSORT_H

class QuickSort:public Sort{
private:
//void swap(int *a, int *b);
std::vector<int> sorthelper(std::vector<int> list,int lowerval, int upperval);

public:
    QuickSort();
    std::vector<int> sort(std::vector<int> list);

};
#endif