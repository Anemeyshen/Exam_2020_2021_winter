#pragma once
#include <vector>
using namespace std;
int num_of_args(vector<bool> f) {
	int size;
	int n = 0;
	size = f.size();
	for (; size != 2; n++) {
		size = size / 2;
	}
	return n+1;
}