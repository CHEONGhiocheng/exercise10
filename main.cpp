//
//  main.cpp
//  exercise10
//
//  Created by jane cheong  on 24/11/2022.
//

#include <iostream>
#include <vector>
#include <cmath>
#include "myvector.h"
myvector::myvector(){};
myvector::~myvector(){
};
void myvector::setdata(std::vector<int> vecdata){
        myvec_data =vec_data;
        std::cout << myvec_data.size() << std::endl;
    }

myvector operator+(myvector a){
    int val[4] = { 3, 5, 10, 20};
    int *my_data =0;
    my_data = val;
    std::vector<int> myvec_data;
    myvec_data={2,3,5,6,8};
    myvector new_a;
    for(int i=1;i<=5 ; i++){
       new_a.my_data[i] = a.myvec_data[i] + a.my_data[i];
      std::cout<<"The new data is :" << new_a.my_data<<std::endl;
    }
    return new_a;
}



int main(int argc, const char * argv[]) {
    std::vector<int> vec_data{1,2,3,4,5};
    std::vector<int> vedata{2,5,6,8,3};
    for(int i=1; i < vec_data.size();i++){
        vedata[i]=vec_data[i]+1;
        std::cout <<"base data" <<vedata[i] <<std::endl;
    }
    int x,y,z;
    std::cout<<vec_data.size()<<std::endl;
    std::cout<<"The size of vector class:" <<sizeof(vec_data)<<std::endl;
    myvector inher;
    myvector p2;
    std::cout<<"The size of iherit class myvector:" <<sizeof(myvector)<<std::endl;
    std::cout<< inher.size()<<std::endl;
    inher.setdata(vec_data);
    for(int i=1; i<=5;i++){
        x= inher.my_data[i];
        y=p2.my_data[i];
        z=p2.my_data[i];
        x=y+z;
        std::cout<<"The data is :" << x<<std::endl;
    }
    return 0;
}
