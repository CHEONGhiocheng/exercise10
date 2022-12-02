//
//  myvector.h
//  exercise10
//
//  Created by jane cheong  on 24/11/2022.
//

#ifndef myvector_h
#define myvector_h
#include <vector>
std::vector<int> vec_data(4,9);
class myvector:public std::vector<int>{
public:
    myvector();
    ~myvector();
    void setdata(std::vector<int> vecdata);
    myvector operator+(myvector a);
    std::vector<int> myvec_data;
    int *my_data;
};

 

#endif /* myvector_h */
