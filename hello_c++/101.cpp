#include <iostream>
#include <filesystem>
#include <string>

using namespace std;
namespace fs = std::filesystem;

int main()
{
	fs::copy("txt/연개수영 전설.txt", "txt/연개수영 전설_복사.txt");
	fs::remove("txt/연개수영 전설.txt");

	return 0;
}

