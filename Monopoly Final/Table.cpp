#include "Table.h"


void Table::Tax() {
    int playerMoney = 1500;                       //change with rubio
    int playerpos = 4;                      //change with rubio

    if (playerpos == 4)
    {
        cout << "You have some Income Tax to pay" << endl;
        cout << "Pay $200" << endl;
        playerMoney = playerMoney - 200;
        bankMoney += 200;
        cout << playerMoney;
    }
    if (playerpos == 38) {
        if (playerMoney <= 750)
        {
            cout << "Sorry man, I need to take $100.\n";
            playerMoney -= 100;
            bankMoney += 100;
            cout << playerMoney;
        }
        if (playerMoney >= 750) {
            cout << "Okay Mr. Millionare, I will take $100.\n";
            playerMoney -= 100;
            bankMoney += 100;
            cout << playerMoney;
        }
    }
}
//void Table::cardShuffler(string& deck)



void Table::PrintBoard()
{
    cout << "|---------|---------|---------|---------|---------|---------|---------|---------|---------|---------|---------|" << endl;
    cout << "|  Free   | Kentucky| Chance  | Indiana | Illinois| B. & O. |Atlantic | Ventnor |  Water  |  Marvin |  Go To  |" << endl;
    cout << "| Parking |  Avenue |    ?    |  Avenue |  Avenue | Railroad| Avenue  |  Avenue |  Works  | Gardens |  Jail   |" << endl;
    cout << "|         |   $220  |         |   $220  |   $240  |   $200  |  $260   |   $260  |   $150  |  $280   |         |" << endl;
    cout << "|         |   RED   |         |   RED   |   RED   |         | YELLOW  |  YELLOW | UTILITY | YELLOW  |         |" << endl;
    cout << "|---------|---------|---------|---------|---------|---------|---------|---------|---------|---------|---------|" << endl;
    cout << "| New York|                                                                                         | Pacific |" << endl;
    cout << "| Avenue  |                                                                                         |  Avenue |" << endl;
    cout << "|   $200  |                                                                                         |  $300   |" << endl;
    cout << "|  ORANGE |                                                                                         |  GREEN  |" << endl;
    cout << "|---------|                                                                                         |---------|" << endl;
    cout << "|Tennessee|                                                                                         |  North  |" << endl;
    cout << "|  Avenue |                                                                                         |Carolina |" << endl;
    cout << "|   $180  |                                                                                         |  Avenue |" << endl;
    cout << "|         |                                                                                         |  $300   |" << endl;
    cout << "|  ORANGE |                                                                                         |  GREEN  |" << endl;
    cout << "|---------|                                                                                         |---------|" << endl;
    cout << "|Community|                                                                                         |Community|" << endl;
    cout << "|  Chest  |                                                                                         |  Chest  |" << endl;
    cout << "|         |                                                                                         |         |" << endl;
    cout << "|         |                                                                                         |         |" << endl;
    cout << "|---------|                                                                                         |---------|" << endl;
    cout << "| St.James|                                         MONOPOLY                                        |Pennsylva|" << endl;
    cout << "|  Place  |                                                                                         |  -nia   |" << endl;
    cout << "|         |                                      -Alejandro Rubio                                   |  Avenue |" << endl;
    cout << "|   $180  |                                      -Justin Henderson                                  |         |" << endl;
    cout << "|  ORANGE |                                      -Uros Stikovic                                     |   $320  |" << endl;
    cout << "|         |                                      -Jaejoon Lee                                       |  GREEN  |" << endl;
    cout << "|         |                                      -Tanner Wagner                                     |         |" << endl;
    cout << "|         |                                                                                         |         |" << endl;
    cout << "|         |                                                                                         |         |" << endl;
    cout << "|         |                                                                                         |         |" << endl;
    cout << "|---------|                                                                                         |---------|" << endl;
    cout << "|Pennsylva|                                                                                         |ShortLine|" << endl;
    cout << "|  -nia   |                                                                                         | Railroad|" << endl;
    cout << "|Railroad |                                                                                         |         |" << endl;
    cout << "|  $200   |                                                                                         |   $200  |" << endl;
    cout << "|---------|                                                                                         |---------|" << endl;
    cout << "| Virginia|                                                                                         |  Chance |" << endl;
    cout << "|  Avenue |                                                                                         |    ?    |" << endl;
    cout << "|   $160  |                                                                                         |         |" << endl;
    cout << "|   PINK  |                                                                                         |         |" << endl;
    cout << "|---------|                                                                                         |---------|" << endl;
    cout << "|  States |                                                                                         |   Park  |" << endl;
    cout << "|  Avenue |                                                                                         |   Place |" << endl;
    cout << "|   $140  |                                                                                         |   $350  |" << endl;
    cout << "|   PINK  |                                                                                         |   BLUE  |" << endl;
    cout << "|---------|                                                                                         |---------|" << endl;
    cout << "|Electric |                                                                                         |  Luxury |" << endl;
    cout << "| Company |                                                                                         |   Tax   |" << endl;
    cout << "|         |                                                                                         |         |" << endl;
    cout << "|  $150   |                                                                                         |   Pay   |" << endl;
    cout << "| UTILITY |                                                                                         |  $100   |" << endl;
    cout << "|---------|                                                                                         |---------|" << endl;
    cout << "|   St.   |                                                                                         |  Board  |" << endl;
    cout << "| Charles |                                                                                         |  Walk   |" << endl;
    cout << "|  Place  |                                                                                         |         |" << endl;
    cout << "|   $140  |                                                                                         |  $400   |" << endl;
    cout << "|   PINK  |                                                                                         |   BLUE  |" << endl;
    cout << "|---------|---------|---------|---------|---------|---------|---------|---------|---------|---------|---------|" << endl;
    cout << "|  Jail   |Connectic| Vermont |  Chance | Oriental| Reading | Income  | Baltic  |Community|Mediterra|   GO    |" << endl;
    cout << "|         |   -ut   |  Avenue |    ?    |  Avenue | Railroad|  Tax    | Avenue  |  Chest  |  -nean  |         |" << endl;
    cout << "|         |  Avenue |         |         |         |         |         |         |         | Avenue  | Collect |" << endl;
    cout << "|         |  $120   |   $100  |         |   $100  |   $200  | PAY $200|   $60   |         |   $60   |  $200   |" << endl;
    cout << "|         |   SKY   |    SKY  |         |    SKY  |         |         |  BROWN  |         |  BROWN  |         |" << endl;
    cout << "|---------|---------|---------|---------|---------|---------|---------|---------|---------|---------|---------|\n" << endl;
};

string Table::SetstreetCards() {
    string streetName = "Vermont Avenue";
    return streetName;
};


void Table::Bank() {
    int bankMoney;
        int player1bank = 0;
        int player2bank = 0;
        int player3bank = 0;
        int player4bank = 0;
        int playerpos = 0;
        if (playerpos == 0) {
            cout << "Here is your balance" << endl;
            player1bank = player1bank + 1500;
            player2bank = player2bank + 1500;
            player3bank = player3bank + 1500;
            player4bank = player4bank + 1500;
        }
        bankMoney = 20580 - 1500 - 1500 - 1500 - 1500;
        //cout << bankMoney << endl;
        cout << "Player 1: " << player1bank << endl;
        cout << "Player 2: " << player2bank << endl;
        cout << "Player 3: " << player3bank << endl;
        cout << "Player 4 :" << player4bank << endl;
}

void Table::Jail() {
    int dices = 6;
    int moves = 3;
    int move1 = 1;
    int move2 = 1;
    int move3 = 1;
    int move_MAX = 18;
    int cardJail = 1;
    bool usertrue = false;
    if (move_MAX == 3 * dices) { 
        do {
            cout << "You are in Jail. You can get out by paying $50, having Get out of the Jail free card, or skipping your turn 3 times. What do you wnat to dou??" << endl;
            cout << "1. I have the card" << endl << "2. I'm going to pay" << endl << "3. I will skip" << endl;
            int userchoise;
            cin >> userchoise;
            if (userchoise == 1) {
                if (cardJail == 1) {
                    cout << "Okay, you used your card, you are now just a visitor" << endl;
                    cardJail = cardJail - 1; //FIX MEEEEEEEEEEEEEEEEEEEEEEEE ( calls player class when it's finshed
                    usertrue = true;
                }
                else{
                    cout << "You don't have that card. Choose something else" << endl;
                    usertrue;
                }
            }
            if (userchoise == 2) {
                cout << "Okay, you are going to pay $50" << endl;
                playerbanktest -= 50;
                bankMoney += 50;
                cout << bankMoney << endl;
                cout << playerbanktest << endl;
                usertrue = true;
            }
            if (userchoise == 3) {
                do {
                    cout << "Okay, you will miss 3 turns" << endl;
                    moves;
                    move1 = move1 - 1;
                    move2 = move2 - 1;
                    move3 = move3 - 1;
                    if (((move1 == 0) && (move2 == 0) && (move3 == 0))) {
                        moves - 1;
                        
                    }
                    cout << moves;
                } while (moves < 3);
                usertrue = true;
            }
        } while (!usertrue);
    }
}
int Table::SetfreeParking(int money) {
    reward = money;
    return reward;
}
int Table::GetfreeParking() {
    return reward;
}


   


    int sumofNum(int& num1, int& num2)
    {
        return num1 + num2;
    }

    /*void cardShuffler(string& deck) {
        srand(time(0));
    }

        for (int i = 0; i < 1; ++i) {

            int randCard = rand() % deck.size();
            cout << deck.at(randCard) << endl;
            
    } */
