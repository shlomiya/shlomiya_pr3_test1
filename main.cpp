#include <iostream>

using namespace std;

inline void Usage(const char* cmd)
{
	cout << "Usage: " << cmd << " -m <sss>" << endl;
}

int main(int argc, char* argv[])
{
	if (argc <= 1) 
		Usage(argv[1]);

}

