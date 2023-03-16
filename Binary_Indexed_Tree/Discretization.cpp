//
//  Discretization.cpp
//  Binary_Indexed_Tree
//
//  Created by 金心羽 on 2023/3/15.
//

#include "Discretization.hpp"

int n = 0;
void Discretization::DiscreteInit()
{
    
    scanf("%d", &n);
    for(int i = 1; i <= n; i++)
    {
        scanf("%d", &nums[i].x);
        nums[i].id = i;
    }
}

bool Discretization::cmp(Node x, Node y)
{
    if(x.x < y.x)
    {
        return true;
    }
    else if(x.x == y.x && x.id < y.id)
    {
        return true;
    }
    return false;
}

vector<int> Discretization::GetDiscreteNums()
{
    vector<int> a(n + 1);
    DiscreteInit();
    BubleSort();
    for(int i = 1; i <= n; i++)
    {
        a[nums[i].id] = i;
    }
    return a;
}

void Discretization::BubleSort()
{
    for(int i = 1; i < n; i++)
    {
        for(int j = n; j > i; j--)
        {
            if(nums[i].x > nums[j].x)
            {
                int temp = nums[i].x;
                nums[i].x = nums[j].x;
                nums[j].x = temp;
            }
        }
    }
    DeleteTheSameNumber();
}

void Discretization::DeleteTheSameNumber()
{
    int fast = 2;
    int slow = 2;
    while(fast < n)
    {
        if(nums[fast].x != nums[fast - 1].x)
        {
            nums[slow].x = nums[fast].x;
            ++slow;
        }
        ++fast;
    }
    n = slow;
};
