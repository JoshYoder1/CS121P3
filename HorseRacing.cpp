#include <random>
#include <iostream>

void advance(int, int*);
void printLane(int, int*);
bool isWinner(int,int*);

int main(){
	std::cout << "Running Program" << std::endl;
	int horses[] = {0, 0, 0, 0, 0};
	bool KeepGoing = true;
	while(KeepGoing){
		for(int i = 0; i<5; i++){
			advance(i, horses);
			printLane(i, horses);
			if(isWinner(i, horses)){
				KeepGoing = false;
			} // end if
		} // end for
		std::cout << "Press ENTER to continue";
		std::cin.get();
	} // end while
} // end main	

void advance(int horseNum, int* horses){
	std::random_device rd;
	std::uniform_int_distribution<int> dist(0,1);
	int coin = dist(rd);
	if(coin == 1){
		horses[horseNum] = horses[horseNum] + 1;
	} // end if

} // end advance

void printLane(int horseNum, int* horses){
	int position = 20 - horses[horseNum];
	for(int distnce = 20; distnce > position; distnce = distnce - 1){
		std::cout << ".";
	} // end for
	
	std::cout << horseNum;
	
	for(int distnce = 0; distnce < 20 - horses[horseNum]; distnce++){
		std::cout << ".";
	} // end for
	std::cout << std::endl;
} // end printLane

bool isWinner(int horseNum, int* horses){
	if(horses[horseNum] == 20){
		std::cout << "Horse " << horseNum << " has won the race!" << std::endl;
		return true;
	} // end if
	return false;
} // end isWinner
