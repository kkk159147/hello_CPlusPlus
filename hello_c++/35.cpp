#include <iostream>

using namespace std;

int main()
{
	string str = "The Jin state was formed in southern korea by the 3rd century BC";

	int size = str.size();
	char find = 'a';

	int count = 0;

	for(int i = 0; i < size; i++)
	{
		if (str[i] == find)
		{
			count++;
		}
	}
	
	cout << count << endl;


	return 0;

}