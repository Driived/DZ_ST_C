#pragma once
#include <iostream>
using namespace std;
class Reservoir
{
	int width;
	int length;
	int depth;
	int volume;
public:
	Reservoir(){}
	Reservoir(int w, int l, int d, int v) :width{ w }, length{ l }, depth{ d }, volume{ v } {}
	void Volume(int w, int l, int d, int v) {
		v = w * l * d;
		cout << v << endl;
	}
};

