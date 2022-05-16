#include <vector>
#include "RecursiveBinarySearch.h"

bool RecursiveBinarySearch::search(std::vector<int> list, int val){
  int len= list.size();
    bool value= boolHelper(list, val, 0, len);
    return value;
}

bool RecursiveBinarySearch::boolHelper(std::vector<int> list, int val, int start, int end){
        
        if(start>=end){
        return false;
        
        }else{
            
             int mid = (end + start)/2;
             if (list.at(mid) == val){
                 return true;
                 
             }else if(val<list.at(mid)){
                 return boolHelper(list, val, start, mid);
                 
             }else if (val>list.at(mid)){
                  return boolHelper(list, val, mid+1, end);
             }
        }
     return false;   
}
