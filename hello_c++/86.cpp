#include <iostream>
#include <iostream>
#include <vector>


using namespace std;

int main()
{
	int data1[10] = { 1, };
	fill(data1, data1 + 3, 10);
	fill(data1 + 4, data1 + 8, 20);

	for (size_t i = 0; i < 10; i++)
	{
		cout << data1[i] << " , ";
	}

	vector<int> data2({ 0,1,2,3,4,5,6,7 });
	fill(data2.begin(), data2.begin() + 3, 30);


	cout << endl << endl;

	for (size_t i = 0; i < data2.size(); i++)
	{
		cout << data2.at(i) << " , ";
	}


	return 0;

}