# CS121P3
HorseRacing

Algorithm:
include <random>

declare function void advance(integer, pointer)
declare function void printLane(integer, pointer)
declare function boolean isWinner(integer, pointer)

integer main():
	horse0 = 0
	horse1 = 0
	horse2 = 0
	horse3 = 0
	horse4 = 0
	
	KeepGoing = True
	printLane()
	while KeepGoing == True:
		coin = random number 0 through 1
		if coin == 1:
			advance(horse, )
		printLane(horse)
		keepGoing = isWinner(horse)
	return 0

void advance(integer horseNum, pointer horses):
	
