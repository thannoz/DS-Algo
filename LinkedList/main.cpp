#include <iostream>
#include <cstdlib>
#include "List.h"

using namespace std;

int main() {
    List myList;

    myList.Addnode(10);
    myList.Addnode(20);
    myList.Addnode(30);
    myList.Addnode(40);

    myList.Print();

    myList.DeleteNode(40);

    myList.Print();

    return 0;
}