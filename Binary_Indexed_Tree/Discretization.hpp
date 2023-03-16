//
//  Discretization.hpp
//  Binary_Indexed_Tree
//
//  Created by 金心羽 on 2023/3/15.
//

#ifndef Discretization_hpp
#define Discretization_hpp

#include <stdio.h>
#include <iostream>
#include <math.h>
#include <algorithm>
#include <vector>
#define Max 50000
using namespace std;

struct Node
{
    int x;
    int id;
}Nums;
class Discretization
{
public:
    Node nums[50000];
    vector<int> Discretenums;
public:
    void DiscreteInit();
    vector<int> GetDiscreteNums();
    bool cmp(Node x, Node y);
    void BubleSort();
    void DeleteTheSameNumber();
};


#endif /*Discretization_hpp*/
