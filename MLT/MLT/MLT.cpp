// MLT.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "TrainingDataImporter.h"
#include "PLA.h"
#include "MLT.h"

using namespace std;

int main(int argc, const char * argv[])
{
	//please set the path of your trainning dataset here 
	TrainingDataImporter tdi("trainingDataset.csv");
	vector<PLA::Item> data;


	for (int i = 0; i < tdi.trainingData.size(); i++)
	{
		PLA::Item data_;
		data_.x0 = tdi.trainingData[i][0];
		data_.x1 = tdi.trainingData[i][1];
		data_.x2 = tdi.trainingData[i][2];
		data_.x3 = tdi.trainingData[i][3];
		data_.x4 = tdi.trainingData[i][4];
		data_.label = tdi.trainingData[i][5];

		data.push_back(data_);
	}

	PLA pla = PLA(data);
	PLA::Weight wit = pla.goPLA(data);

	cout << "The final w vector:" << endl;
	cout << "w0 = " << wit.w0 << "; w1 = " << wit.w1 << "; w2 = " << wit.w2 << "; w3 = " << wit.w3 << "; w4 = " << wit.w4 << endl;
	cout << "try" << endl;
	return 0;
}