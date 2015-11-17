#include "stdafx.h"
#include <iostream>
#include <vector>
#include <list>

using namespace std;
/*
struct Item
{
	int x0;
	double x1, x2, x3, x4;
	int label;
};

struct Weight
{
	double w0, w1, w2, w3, w4;
} W0 = { 0, 0, 0, 0, 0 };

//Sign function
int sign(int s)
{
	if (s < 1)
		return -1;
	else if (s >1)
		return 1;
	else
		return 0;
}

//Dot Product
double dotProduct(Item item, Weight weight)
{
	return item.x0 * weight.w0 + item.x1 * weight.w1 + item.x2 * weight.w2 + item.x3 * weight.w3 + item.x4 * weight.w4;
}

//Weight update
Weight updateWeight(Item item, Weight weight)
{
	Weight newWeight;
	newWeight.w0 = weight.w0 + item.x0 * item.label;
	newWeight.w1 = weight.w1 + item.x1 * item.label;
	newWeight.w2 = weight.w2 + item.x2 * item.label;
	newWeight.w3 = weight.w3 + item.x3 * item.label;
	newWeight.w4 = weight.w4 + item.x4 * item.label;
	return newWeight;
}


//PLA
Weight goPLA(vector<Item> item)
{
	Weight wit = W0;
	vector<Item> vItem;

	vItem = item;

	for (vector<Item>::iterator iter = vItem.begin(); iter != vItem.end(); ++iter)
	{
		//mistake occur 
		if ((*iter).label != sign(dotProduct(*iter, wit)))
		{
			wit = updateWeight(*iter, wit);
			iter = vItem.begin();  //after updating, iterate from begin again until no uncorrected prediction 
		}
	}
	return wit;
}
*/