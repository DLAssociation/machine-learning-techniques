#include "stdafx.h"
#include <iostream>
#include <vector>
#include <list>
#include "PLA.h"

using namespace std;

//Sign function
int PLA::sign(int s)
{
	if (s < 1)
		return -1;
	else if (s >1)
		return 1;
	else
		return 0;
}

//Dot Product
double PLA::dotProduct(PLA_item item, PLA_weight weight)
{
	return item.x0 * weight.w0 + item.x1 * weight.w1 + item.x2 * weight.w2 + item.x3 * weight.w3 + item.x4 * weight.w4;
}

//Weight update
PLA::PLA_weight PLA::updateWeight(PLA_item item, PLA_weight weight)
{
	PLA_weight newWeight;
	newWeight.w0 = weight.w0 + item.x0 * item.label;
	newWeight.w1 = weight.w1 + item.x1 * item.label;
	newWeight.w2 = weight.w2 + item.x2 * item.label;
	newWeight.w3 = weight.w3 + item.x3 * item.label;
	newWeight.w4 = weight.w4 + item.x4 * item.label;
	return newWeight;
}

//PLA
PLA::PLA_weight PLA::goPLA(vector<PLA_item> item)
{
	PLA_weight wit = {0, 0, 0, 0, 0};
	vector<PLA_item> vItem;

	vItem = item;

	for (vector<PLA_item>::iterator iter = vItem.begin(); iter != vItem.end(); ++iter)
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

PLA::PLA(vector<PLA_item> item)
{
	PLA_weight wit = PLA::goPLA(item);
}

PLA::~PLA()
{

}