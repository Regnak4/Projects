main:
	g++ -std=c++11 -c ../state/State.cpp
	g++ -std=c++11 -c ../unit/Unit.cpp
	g++ -std=c++11 -c ../unit/Soldier.cpp
	g++ -std=c++11 -c ../unit/Rogue.cpp
	g++ -std=c++11 -c ../ability/Ability.cpp
	g++ -std=c++11 -c ../ability/SoldierAbility.cpp
	g++ -std=c++11 -c ../ability/RogueAbility.cpp
	#g++ -std=c++11 -c tests.cpp
	g++ -std=c++11 tests.cpp *.o -o test.exe
	rm *.o
	./test.exe > result.txt
	cat result.txt