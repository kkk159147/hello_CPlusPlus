#include <iostream>
#include <ctime>
#include <time.h>

using namespace std;

int main()
{
	time_t start = time(NULL);
	time_t finsin = time(NULL);
	struct tm ptm;
	//localtime_s(&ptm, &now);

	int pass_int = 1;
	time(&start);

	for (int i = 0; i < 100000; i++)
	{
		for (int j = 0; j < 100000; j++)
		{
			pass_int += 1;
		}
	}
	
	time(&finsin);

	cout << "1�� 100�� �� ���ϴ� �ð� : " << difftime(finsin, start) << "�� \n ";

	return 0;

}