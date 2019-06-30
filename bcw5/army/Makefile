state:
	# cd C:/bcw5/army/state
	# g++ /bcw5/army/state/State.cpp -std=c++0x -std=c++0x -c
	# g++ MagicState.cpp -std=c++0x -c
	# g++ BerserkerState.cpp -std=c++0x -c
	# g++ NecroState.cpp -std=c++0x -c
	# g++ TurnWolfState.cpp -std=c++0x -c
	# g++ VampireState.cpp -std=c++0x -c
	g++ state/*.cpp -std=c++0x -c

ability:
	# cd C:/bcw5/army/ability
	# g++ Ability.cpp -std=c++0x -c
	# g++ HealerAbility.cpp -std=c++0x -c
	# g++ MagicAbility.cpp -std=c++0x -c
	# g++ NecroAbility.cpp -std=c++0x -c
	# g++ PriestAbility.cpp -std=c++0x -c
	# g++ RogueAbility.cpp -std=c++0x -c
	# g++ SoldierAbility.cpp -std=c++0x -c
	# g++ VampireAbility.cpp -std=c++0x -c
	# g++ WarlockAbility.cpp -std=c++0x -c
	# g++ WerewolfAbility.cpp -std=c++0x -c
	g++ ability/*.cpp -std=c++0x -c

interface:
	# cd C:/bcw5/army/interface
	# g++ Observable.cpp -std=c++0x -c
	g++ interface/*.cpp -std=c++0x -c

spell: 
	# cd C:/bcw5/army/spell
	# g++ Spell.cpp -std=c++0x -c
	# g++ SpellBook.cpp -std=c++0x -c
	# g++ ChaosFlame.cpp -std=c++0x -c
	# g++ Curse.cpp -std=c++0x -c
	# g++ Exorcism.cpp -std=c++0x -c
	# g++ Fireball.cpp -std=c++0x -c
	g++ spell/*.cpp -std=c++0x -c

spellcaster:
	# cd C:/bcw5/army/spellcaster
	# g++ SpellCaster.cpp -std=c++0x -c
	# g++ Healer.cpp -std=c++0x -c
	# g++ Necromancer.cpp -std=c++0x -c
	# g++ Priest.cpp -std=c++0x -c
	# g++ Warlock.cpp -std=c++0x -c
	g++ spellcaster/*.cpp -std=c++0x -c

unit: 
	# cd C:/bcw5/army/unit
	# g++ Unit.cpp -std=c++0x -c
	# g++ Berserker.cpp -std=c++0x -c
	# g++ Demon.cpp -std=c++0x -c
	# g++ Rogue.cpp -std=c++0x -c
	# g++ Soldier.cpp -std=c++0x -c
	# g++ Vampire.cpp -std=c++0x -c 
	g++ unit/*.cpp -std=c++0x -c

main: state unit ability interface spell spellcaster 
	g++ main.cpp -c -std=c++0x 
	g++ *.o 
