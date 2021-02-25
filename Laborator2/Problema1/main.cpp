#include <iostream>
#include "NumberList.h"
using namespace std;


int main()
{
    NumberList v;

    v.Init();
    v.Add(16);
    v.Add(7);
    v.Add(9);
    v.Add(13);
    v.Add(5);
    v.Add(9);
    v.Add(9);

    v.Sort();
    v.Print();

    return 0;
}
