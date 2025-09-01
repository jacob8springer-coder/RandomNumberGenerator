#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
	srand(time(0));
	int rndnum = rand() % 100;
	cout << "rnd number = " << rndnum << endl;
	return rndnum;
}