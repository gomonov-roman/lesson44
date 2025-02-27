//#include <iostream>
//#include <string>
//
//using namespace std;
//
//void init(int* vector, int size) {
//	for (int i = 0; i < size; i++)
//	{
//		vector[i] = rand() % 100;
//	}
//}
//
//string convert(int* vector, int size) {
//	string s = "";;
//	for (int i = 0; i < size; i++)
//	{
//		s += to_string(vector[i]) + " ";
//	}
//	return s;
//}
//
//void get_extrem_elements(int* vector, int size, int* Max, int* Min) {
//	 *Max = vector[0];
//	 *Min = vector[0];
//
//	for (int i = 0; i < size; i++)
//	{
//		if (vector[i] > *Max) {
//			*Max = vector[i];
//		}
//		
//
//		if (vector[i] < *Min) {
//			*Min = vector[i];
//		}
//	}
//}
//
//
//int main() {
//	const int SIZE = 10;
//	int vector[SIZE]{};
//	init(vector, SIZE);
//
//	int max, min;
//	get_extrem_elements(vector, SIZE, &max, &min);
//	cout << "Vector " << convert(vector, SIZE) << endl;
//	cout << "max value is " << max << ".\n";
//	cout << "min value is " << min << ".\n";
//
//
//	return 0;
//}
