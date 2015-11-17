#pragma once

#ifndef TRAINING_DATA_IMPORTER_
#define TRAINING_DATA_IMPORTER_
#include <iostream>
#include <vector>

using namespace std;

class TrainingDataImporter
{
public:
	int dim;
	std::string filePath;

	vector<vector<double>> trainingData;
	TrainingDataImporter(string path);
	vector<vector<double>> getTrainingData();
	void readCSV();
};

#endif TRAINING_DATA_IMPORTER_