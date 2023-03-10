#pragma once
#include <iostream>

using namespace std;

struct Element
{
    char elem;
    int next;
};

class LinearList
{
private:
    Element* base;
    int beginData;
    int beginFreeSpace = 0;
    int capacity;

public:
    LinearList(const LinearList&);
    LinearList(const int capacity = 10);
    ~LinearList();

    LinearList operator+(LinearList&);
    LinearList& operator=(const LinearList&);
    void addNode(char);
    char shift();
    char pop();
    void displayList();
    int len();
    bool isEmpty();
    friend ostream& operator<<(ostream&, LinearList&);
    friend istream& operator>>(istream&, LinearList&);
};
