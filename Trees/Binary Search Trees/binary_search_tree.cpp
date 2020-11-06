#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <bits/stdc++.h>

using namespace std;

class node
{
    int data;
    node *left, *right;

    node(int item)
    {
        this.data = item;
        this.left = this.right = NULL;
    }
}