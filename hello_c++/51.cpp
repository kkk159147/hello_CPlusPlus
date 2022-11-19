#include <iostream>
#include <ctime>
#include <time.h>

using namespace std;

int main()
{
	time_t now = time(NULL);
	struct tm ptm;
	localtime_s(&ptm, &now);

	

	char buffer[64];
	strftime(buffer, 64, "���� �ð��� %Y�� %m�� %d�� %H�� %M�� %S���Դϴ�.(%p) \n", &ptm);

	cout << buffer;

	time_t timer;
    struct tm t;

	timer = time(NULL); // ���� �ð��� �� ������ ���
	localtime_s(&t, &timer); // �� ������ �ð��� �и��Ͽ� ����ü�� �ֱ�


	printf("���н� Ÿ�� (Unix Time): %d ��\n\n", timer); // 1970�� 1�� 1�� 0�� 0�� 0�ʺ��� �����Ͽ� ��������� ��

	printf("���� ��: %d\n", t.tm_year + 1900);
	printf("���� ��: %d\n", t.tm_mon + 1);
	printf("���� ��: %d\n\n", t.tm_mday);

	printf("���� ��: %d\n", t.tm_hour);
	printf("���� ��: %d\n", t.tm_min);
	printf("���� ��: %d\n\n", t.tm_sec);

	printf("���� ����: %d\n", t.tm_wday); // �Ͽ���=0, ������=1, ȭ����=2, ������=3, �����=4, �ݿ���=5, �����=6
	printf("���� �� ��° ��: %d\n", t.tm_yday); // 1�� 1���� 0, 1�� 2���� 1
	printf("����Ÿ�� ���� ����: %d\n", t.tm_isdst); // 0 �̸� ����Ÿ�� ����

	return 0;

}