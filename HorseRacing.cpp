#include <random>
#include <iostream>

void advance(int, int*);
void printLane(int, int*);
bool isWinner(int,int*);

int main(){
	int horses[] = [0, 0, 0, 0, 0]
	bool KeepGoing = true;
//	printLane();
	while(KeepGoing){
		for(int i = 0, i<5, i++){
			advance(i, horses);
			printLane(i, horses);
			if(isWinner(i, horses)){
				keepGoing = false
			} // end if
		} // end for
	} // end while
} // end main	

void advance(int horseNum, int* horses){
	for(int i = 0, i < 5, i++){
		std::random_device rd;
		std::uniform_int_distributuion<int> dist(0,1);
		int coin = dist(Rd);
		if(coin == 1){
			*horses[i] = horses[i] + 1;
		} // end if
	} // end for
} // end advance

void printLane(int horseNum, int* horses
