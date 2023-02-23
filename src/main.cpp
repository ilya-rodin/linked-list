#include <iostream>
#include "List.h"

int main()
{
    LinearList list(6);
    LinearList list2;
    LinearList concatenatedList;
    LinearList cinList(6);

    list.addNode('a');
    list.addNode('b');
    list.addNode('c');

    // Copy constructor and '=' overloading
    list2 = list;

    // '+' overloading
    concatenatedList = list + list2;

    // '<<' overloading
    cout << concatenatedList;

    // '>>' overloading
    cin >> cinList;

    cout << cinList;
}
