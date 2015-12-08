#pragma once

#ifndef PERCEPTRON_LEARNING_ALGORITHM_
#define PERCEPTRON_LEARNING_ALGORITHM_

using namespace std;

class PLA
{
public:
	typedef struct Item
	{
		int x0;
		double x1, x2, x3, x4;
		int label;
	}PLA_item;
	typedef struct Weight
	{
		double w0, w1, w2, w3, w4;
	}PLA_weight;
	//Sign function
	int sign(int s);
	//Dot Product
	double dotProduct(PLA_item item, PLA_weight weight);
	//Weight update
	PLA_weight updateWeight(PLA_item item, PLA_weight weight);
	//PLA
	PLA::PLA_weight goPLA(vector<PLA_item> item);

	PLA(vector<PLA_item> item);
	~PLA();

private:
};

#endif PERCEPTRON_LEARNING_ALGORITHM_