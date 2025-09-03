code


#include <cstdlib>
#include <ctime>
int rndNum(int lengthOf) { //lengthof is the length of the random number (100... format)
	srand(time(0));
	int rndnum = rand() % lengthOf;
	return rndnum;
}
