#include "util.h"
#include "logic.h"


int main() {
	int* vector;
	int size;


	cout << "Input of vector: ";
	cin >> size;

	vector = new int[size];

	init(vector, size, -20, 50);
		
	cout << "Vector: " << convert(vector, size) << endl;

	cout << "sum of ivent elements is " << sum_event_elements(vector, size);

	delete[] vector;

	return 0;
}