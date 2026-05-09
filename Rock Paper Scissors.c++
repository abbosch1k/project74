#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {

    srand(time(0));

    int player, bot;

    cin >> player;

    bot = rand()%3;

    cout << "Bot: " << bot << endl;

    if(player == bot)
        cout << "Draw";
    else if(
        (player==0&&bot==2)||
        (player==1&&bot==0)||
        (player==2&&bot==1)
    )
        cout << "Win";
    else
        cout << "Lose";
}
