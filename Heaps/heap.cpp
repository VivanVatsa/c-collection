#include <iostream>
#include <climits>
#include <bits/stdc++.h>

using namespace std;

void swap(int *x, int *y);

class MinHeap {
	int *harr; // pointer for array of elements in the heap
	int capacity; // max possible size of heap used as the end element of the heap
	int heap_size; // current number of elements in min heap
public:
	// default constructor
}