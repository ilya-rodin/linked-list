#include <iostream>
#include "List.h"

int main()
{
    LinearList list(6);
    LinearList list2;
    LinearList concatenatedList;
    LinearList cinList(10);

    list.addNode('a');
    list.addNode('b');
    list.addNode('c');

    // Copy constructor and '=' overloading
    list2 = list;

    list2.pop();
    list2.shift();

    cout << "First list with NO changes: " << list << endl;
    cout << "Second list with changes: " << list2 << endl << endl;

    // '+' overloading
    concatenatedList = list + list2;

    // '<<' overloading
    cout << "list + list2: " << concatenatedList << endl << endl;

    // '>>' overloading
    cin >> cinList;

    cout << "\nList created by using '>>' overloading: " << cinList << endl;
}
