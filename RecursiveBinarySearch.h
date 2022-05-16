#ifndef RECURSIVEBINARYSEARCH_H
#define RECURSIVEBINARYSEARCH_H
#include <vector>

class RecursiveBinarySearch{

    public:
    bool search(std::vector<int>, int);

    protected:
    bool boolHelper(std::vector<int> list, int find, int start, int end);
};
#endif
