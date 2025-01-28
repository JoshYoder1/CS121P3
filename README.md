# CS121P3
HorseRacing

Algorithm:
include <random>

declare function void advance(integer, pointer)
declare function void printLane(integer, pointer)
declare function boolean isWinner(integer, pointer)

integer main():
	integer horse0 = 0
	integer horse1 = 0
	integer horse2 = 0
	integer horse3 = 0
	integer horse4 = 0
	pointer horsenum
	
	KeepGoing = True
	printLane()
	while KeepGoing == True:
		for horse = 0, horse < 5, horse++:
			if horse == 0:
				horsevalue = &horse0
			elif horse == 1:
				horsevalue = &horse1
			elif horse == 2:
				horsevalue = &horse2
			elif horse == 3:
				horsevalue = &horse3
			else:
				horsevalue = &horse4
			cin >> enter
			coin = random number 0 through 1
			if coin == 1:
				advance(horse, horsevalue)
			printLane(horse, horsevalue)
			keepGoing = isWinner(horse, horsevalue)
	return 0

void advance(integer horseNum, pointer horses):
	

void printLane(integer horseNum, pointer horses):
	

bool isWinner(integer horseNum, pointer horses):
