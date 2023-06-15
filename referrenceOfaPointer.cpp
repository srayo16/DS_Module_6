#include <bits/stdc++.h>
using namespace std;

void fun(int *&p)
{
    cout << *&p;
}

int main()
{
    int val = 10;
    int all = 20;
    int *ptr = &val;
    fun(ptr);
    // cout << *ptr;

    return 0;
}