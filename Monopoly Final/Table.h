#ifndef TABLE_H
#define TABLE_H
#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <Windows.h>
using namespace std;
class Table
{
public:
    void PrintBoard();
    //int numPlayers();          //rubio
    //string Cards();            //henderson
    //int Dice();                // henderson
    void Bank();
    int Property();         // paying for rent
    void Tax();
    int SetfreeParking(int money); 
    int GetfreeParking();
    void Jail();
    void Tokens();       //vectors (32 houses and 12 hotels)
    string SetstreetCards();
    void firstMove(); //determing first move
    //comunitiy chest             // calling henderson
    //void cardShuffler(string& deck);
                         // calling henderson

private:
    int playMoney;
    int owner;
    int currplayer = 1;
    string streetName;
    long long bankMoney;
    int player1bank;
    int player2bank;
    int player3bank;
    int player4bank;
    int playerbanktest = 1500;
    int reward;

};
#endif
