//
//  Lowbit.cpp
//  Binary_Indexed_Tree
//
//  Created by 金心羽 on 2023/3/16.
//

#include "Lowbit.hpp"

Lowbit::Lowbit(int val)
{
    x = val;
}

int Lowbit::CalLowbit()
{
    return x & (-x);
}
