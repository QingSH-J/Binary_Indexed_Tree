//
//  BIT.cpp
//  Binary_Indexed_Tree
//
//  Created by 金心羽 on 2023/3/15.
//

#include "BIT.hpp"


void BIT::init()
{
    for(int i = 0; i < size; i ++)
    {
        nums.push_back(0);
    }
}

BIT::BIT()
{
    init();
}

int BIT::lowbit(int x)
{
    return x & -x;
}

void BIT::update(int position, int k)
{
    int p = 0;
    for(p = position; p < size; p += lowbit(p))
    {
        nums[p] += k;
    }
}

int BIT::quire(int n)
{
    int ans = 0;
    for(int p = n; p; p -= lowbit(p))
    {
        ans += nums[p];
    }
    return ans;
}

int BIT::quireAB(int a, int b)
{
    return quire(b) - quire(a - 1);
}
