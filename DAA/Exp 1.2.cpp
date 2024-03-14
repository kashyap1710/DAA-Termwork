#include <bits/stdc++.h>
using namespace std;

int fib(int a);

main()
{
    cout<<"Enter number :";
    int a;
    cin>>a;

    clock_t t = clock();
    fib(a);
    t = clock() - t;

    float time_taken = (float)t / CLOCKS_PER_SEC;
    cout << endl << "Time taken is :" << time_taken << endl;
    return 0;
}

int fib(int a)
{
    if(a <= 1)
    {
        return a;
    }
    else
        return fib(a-1)+fib(a-2);
}