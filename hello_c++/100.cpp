#include <iostream>
#include <filesystem>
#include <fstream>

using namespace std;
namespace fs = std::filesystem;

int main()
{
	fs::create_directory("txt/temp");
	fs::copy("txt/temp", "txt/temp_copy");
	fs::remove("txt/temp");
	fs::remove("txt/temp_copy");

	return 0;
}

