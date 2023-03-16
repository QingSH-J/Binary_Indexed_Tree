//
//  BIT.hpp
//  Binary_Indexed_Tree
//
//  Created by 金心羽 on 2023/3/15.
//

#ifndef BIT_hpp
#define BIT_hpp

#include <stdio.h>
#include <iostream>
#include <math.h>
#include <algorithm>
#include <vector>
using namespace std;
class BIT
{
public:
    int size;
    vector<int> nums;
public:
    BIT();
    void init();
    void update(int position, int k);
    int lowbit(int x);
    int quire(int n);
    int quireAB(int a, int b);
};
#endif /* BIT_hpp */
