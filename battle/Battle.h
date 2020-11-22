#pragma once
#include <iostream>
#include <windows.h>
#include "test.h"
#include <conio.h> // for kbhit




class Battle
{
private:
    Player* my_player = nullptr;
    Player* other_player = nullptr;

    Pokemon* my_selected_pokemon = nullptr;
    Pokemon* other_selected_pokemon = nullptr;

    bool priority = true;;
    bool changeState = false;
    bool endBattle = false;

public:
    Battle(Player* _my_player, Player* _other_player);

    void startBattle();
    void display();
    void pullPokemon();
    void selectAction();

    // fight
    void selectMove();
    void Attack(Pokemon& attakingPokemon, Pokemon& defendingPokemon, Move& move);
    int calculateDamage(const Pokemon& attakingPokemon, Pokemon& defendingPokemon, const Move& move);
    bool checkSametypeAttackbonus();
    float calculateType();
    bool checkHitSpot();
    int getRanmdomNumber();

    // change
    void selectPokemon();
    void changePokemon();

    // bag
    void selectBag()
    {
    }

    // run
    void selectRun()
    {

    }


    // tool
    void gotoxy(int column, int line);
    bool getArrowkey(int& x1, int& y1);
    // 27ESC, 72Up 80Down 75Left 77Right  32Spacebar

};