#include <iostream>
#include "set.h"

using namespace std;

int main()
{


    set moj_set;    
    cout << "dodaje 7:\n";
    moj_set.insert(7);
    moj_set.insert(7);
    moj_set.insert(7);
    moj_set.insert(7);
    moj_set.insert(7);
    moj_set.insert(10);
    moj_set.insert(12);
    moj_set.display();

    cout << "czyszcze \n";
    moj_set.clear();
    moj_set.display();
}


