#include <iostream>
#include <vector>
#ifndef RECURSIVEBINARYSEARCH_H
#define RECURSIVEBINARYSEARCH_H

class RecursiveBinarySearch
{
private:
void sorthelper(std::vector<int> list);
bool searchhelper(std::vector<int>, int low,int high,int val);
public:
bool search(std::vector<int>, int);
};
#endif