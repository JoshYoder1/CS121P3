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
			userinput = enter
			coin = random number 0 through 1
			if coin == 1:
				advance(horse, horsevalue)
			printLane(horse, horsevalue)
		for horse = 0, horse <5, horse++:
			if horse == 0:
				keepGoing = isWinner(horse, &horse0)
			elif horse == 1:
				keepGoing = isWinner(horse, &horse1)
			elif horse == 2:
				keepGoing = isWinner(horse, &horse2)
			elif horse == 3:
				keepGoing = isWinner(horse, &horse3)
			else:
				keepGoing = isWinner(horse, &horse4)
	return 0

void advance(integer horseNum, pointer horses):
	*horses =+ 1

void printLane(integer horseNum, pointer horses):
//	9....................
	position = 20 - *horses
	for distance = 0, distance < position, distance++:
		cout "."
	cout horseNum
	for distance = position, distance < 21, dtsnace++:
		cout "." end line

bool isWinner(integer horseNum, pointer horses):
	if horses == 21:
	cout "Horse:" horseNum "has won!"
	return False
