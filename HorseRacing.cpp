#include <random>
#include <iostream>

void advance(int, int*);
void printLane(int, int*);
bool isWinner(int,int*);

int main(){
	std::cout << "Running Program" << std::endl;
	int horses[] = {0, 0, 0, 0, 0};
	bool KeepGoing = true;
//	printLane();
//	KeepGoing = false;
	while(KeepGoing){
		std::cout << "Running While Loop" << std::endl;
		for(int i = 0; i<5; i++){
			std::cout << "Running For Loop" << std::endl;
/*			advance(i, horses);
			printLane(i, horses);
			if(isWinner(i, horses)){*/
				KeepGoing = false;
		//	} // end if
		} // end for
	} // end while
} // end main	
/*
void advance(int horseNum, int* horses){
	for(int i = 0; i < 5; i++){
		std::random_device rd;
		std::uniform_int_distribution<int> dist(0,1);
		int coin = dist(rd);
		if(coin == 1){
			horses[i] = horses[i] + 1;
		} // end if
	} // end for
} // end advance

void printLane(int horseNum, int* horses){}

bool isWinner(int,int*){
	return true;
}*/
