#include <iostream>
#include <vector>

using namespace std;

int main()
{
	//Declare 2 empty vectors
	vector<int> vector1;
	vector<int> vector2;

	//Add 10 and 20 to vector1
	vector1.push_back(10);
	vector1.push_back(20);

	//Display the elements of vector1 and size
	cout << vector1.at(0) << endl;
	cout << vector1.at(1) << endl;

	cout << vector1.size() << endl;

	//Add 100 and 200 to vector 2
	vector2.push_back(100);
	vector2.push_back(200);

	//Display the elements of vector2 and size
	cout << vector2.at(0) << endl;
	cout << vector2.at(1) << endl;

	cout << vector2.size() << endl;

	//Declare vector 2D and add vector1 and vector2 to Vector 2D
	vector<vector<int>> vector_2d;

	vector_2d.push_back(vector1);
	vector_2d.push_back(vector2);

	//Display vector 2D
	cout << vector_2d.at(0).at(0) << " " << vector_2d.at(0).at(1) << endl;
	cout << vector_2d.at(1).at(0) << " " << vector_2d.at(1).at(1) << endl;


	return 0;
}