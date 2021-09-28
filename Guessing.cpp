#include <iostream>
using namespace std;

int main() {

  bool play = true;

  while (play == true) {

    //random #s
    srand(time(NULL));
    int luck = rand() % 100;

    cout << "The # : " << luck << "\n\n";
    int guess;

    int times = 0;

    // infinite loof of guessing; if correctly guessed then it breaks loop
    while (true){
      cin >> guess;
      times++;
      if (guess == luck) {
        cout << "You guessed correctly!" << "You tried " << times << " times!";
        play=false;
        break;
      }
      if (guess < luck) {
        cout << "Lower #\n";
      }
      if (guess > luck) {
        cout << "Higher than #!\n";
      }
    }

    // play again q&a
    int playagain;
    cout << "\n\nPlay again? 1:Yes 2:No \n";
    cin >> playagain;

    if (playagain == 1) {
      play = true;
      cout << "\n";
    }

  }

}
