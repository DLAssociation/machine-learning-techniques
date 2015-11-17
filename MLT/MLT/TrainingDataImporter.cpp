#include "stdafx.h"
#include "TrainingDataImporter.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

using namespace std;

TrainingDataImporter::TrainingDataImporter(string path)
{
	filePath = path;
	readCSV();
}

vector<vector<double>> TrainingDataImporter::getTrainingData()
{
	return trainingData;
}

void TrainingDataImporter::readCSV()
{
	ifstream fin(filePath);

	string line;

	while (getline(fin, line))
	{
		istringstream sin(line);
		vector<string> fields;
		string field;
		while (getline(sin, field, ','))
		{
			fields.push_back(field);
		}

		vector<double> singleData;

		dim = fields.size() - 1;
		for (int i = 0; i < fields.size(); i++)
		{
			cout << fields[i] << " ";
			string str = fields[i];

			singleData.push_back(atof(str.c_str()));
		}

		cout << " " << endl;
		trainingData.push_back(singleData);
	}
}