#include <iostream>
using namespace std;

int main() {

  bool play = true;

  while (play == true) {

    srand(time(NULL));
    int luck = rand() % 100;

    cout << "The # : " << luck << "\n\n";
    int guess;

    int tries = 5;

    for (int a = 5; a > 0; a--){
      cin >> guess;
      tries = tries-1;
      if (guess == luck) {
        cout << "You guessed correctly!";
        play=false;
        break;
      }
      if (tries==1) {
        cout << "Incorrect : " << tries << " try left! \n\n";
        continue;
      }
      cout << "Incorrect : " << tries << " tries left! \n\n";
    }

    int playagain;
    cout << "\n\nPlay again? 1:Yes 2:No \n";
    cin >> playagain;

    if (playagain == 1) {
      play = true;
      cout << "\n";
    }

  }

}
