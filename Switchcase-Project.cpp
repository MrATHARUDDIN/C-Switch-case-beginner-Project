#include <iostream>
#include <cstdlib>
#include <ctime>
#include <windows.h>
#include <cmath> // I use this only for Es-7
// Define color codes
#define RED "\033[31m"
#define BLUE "\033[34m"
#define WHITE "\033[37m"
#define GREEN "\033[32m"
#define RESET "\033[0m" // Reset color
using namespace std;


// Function to calculate the average ES-1
void calculateAverage() {

    int N,i,num,avg;
    int sum =0;
    cout<<"How many number you want to calculate : ";
    cin >> N;
    for(i=1 ; i<=N ; i++){
        cout << "Enter number " << i << " : ";
        cin >> num;
        sum =sum+num;
    }
    avg = sum/N;
    cout << "Avarage is : " << avg;
     Sleep(3000); // wait for for 3 seconds
}



// Function to find minimum and maximum ES-2
void calculateMinAndMax() {
    int N, i, num;
    int max, min;

    cout << "How many numbers you want to enter: ";
    cin >> N;

    for(i = 1; i <= N; i++) {
        cout << "Enter number " << i << ": ";
        cin >> num;
        if(i == 1) {
            max = num;
            min = num;
        } else {
            if(num > max)
            {
                max = num;

            }

            if(num < min) {
                min = num;
                }
        }
    }
    cout << "Max number: " << max << "\n";
    cout << "Min number: " << min << "\n";
     Sleep(3600);
}




// Function to calculate factorial of a number Es-3
void calculateFactorial() {
    int n,i,total;
    total=1;
    cout<<"Enter a number ";
    cin >> n;


    for(i=n; i >= 1; i-- ){
       if(i>1){
       cout << i <<"*";
       }
       else{
       cout << i;
       }
        total=total*i;
    }
        cout <<"\nTotal = " << total;
         Sleep(3500);
}


// Function to draw characters ES-4
void drawCharacters() {
   int charnum,color;

    cout << " chose one of them from those \n ";
    cout << "1 : pokimon ball  \n ";
    cout << "2 : cake\n ";
    cout << "3 : Cube \n ";


   cin >> charnum;

    cout << " chose one of them from those \n ";
    cout << "1 : Red  \n ";
    cout << "2 : Blue\n ";
    cout << "3 : White \n ";
    cout << "4 : Green \n ";


   cin >> color;


  switch (color) {
        case 1:
            cout << RED;
            break;
        case 2:
            cout << BLUE;
            break;
        case 3:
            cout << WHITE;
            break;
        case 4:
            cout << GREEN;
            break;
        default:
            cout << RESET; // Reset
            break;
    }

   switch(charnum){
       case 1:
       cout<<"                                  ..',;;::;;,'...                       \n";
cout<<"                              .l0XNWMMMMMMMMWWNXKOxl'                     \n";
cout<<"                      .'lO0l.   'oKMMMMMMMMMMMMMMMMM0.   .                \n";
cout<<"                   .;xKWMMMMXx,   .:ONMMMMMMMMMMMMMMK,  'OOl.              \n";
cout<<"                 .l0WMMMMMMMMMW0c.   'oXMMMMMMMMMMMMX:  .OWMXx;           \n";
cout<<"               'xNMMMMMMMMMMMMMMMXx,   .:kNMMMMMMMMMNc  .xWMMMW0:          \n";
cout<<"             .oXMMMMMMMMMMMMMMMMMMMWO:.   'oXMMMMMMMWo.  lNMMMMMWO,         \n";
cout<<"            :KMMMMMMMMMMMMMMMMMMWWWNXKOl.   .:kNMMMMWx.  :NMMMMMMMNx.       \n";
cout<<"          .oNMMMMWNXKK0Okxdocc:;,'.....        .dXWMWO.  ;XMMMMMMMMWO'      \n";
cout<<"          .;;,''....                             .:ONK'  '0MMMMMMMMMMK;       \n";
cout<<"                ....',;:cl;.                        ,l'  .OWMMMMMMMMMWO.       \n";
cout<<"        cxOOKXXNNNNWWWWWXl.                              .xWMMMMMMMMXo.        \n";
cout<<"       ;NMMMMMMMMMMMMMWk'                                .oWMMMMMMWk'   .      \n";
cout<<"      .xWMMMMMMMMMMMWO,                                   cNMMMMWO,   'kK;     \n";
cout<<"      '0MMMMMMMMMMMXc.                                    :XMMMXc.  .oXMNl     \n";
cout<<"      :NMMMMMMMMMKo.                                      ,KWXo.  .lXMMMWx.     \n";
cout<<"      lNMMMMMMMNx.                                        'Od.   :0WMMMMWO.      \n";
cout<<"      lNMMMMMWO,   ,kl                                     .   'OWMMMMMMWO.      \n";
cout<<"      cNMMMW0:   .dNWx.                                      .dXMMMMMMMMWx.      \n";
cout<<"      ,KMWKl.  .oXMMWk.                                    .oXMMMMMMMMMMWo       \n";
cout<<"      .xXd.   :0WMMMM0'                                   :0WMMMMMMMMMMMX;       \n";
cout<<"       ..   ;OWMMMMMMX,                                 ;0WMMMMMMMMMMMMWx.       \n";
cout<<"          'xWMMMMMMMMN:                               'xWMMMMMMWWWWNNXX0'       \n";
cout<<"         :XMMMMMMMMMMNl   ;:.                        ;xxxdolc:;;''....           \n";
cout<<"         .kWMMMMMMMMMWd.  lNKo'                                  .....           \n";
cout<<"          .xWMMMMMMMMWk.  :XMMWO;.              ....',;:clodxkO0KXXN0;          \n";
cout<<"           .lXMMMMMMMMK'  ,KMMMMW0o'    .cxO0KKXXNNNWWMMMMMMMMMMMMWO'            \n";
cout<<"             'xNMMMMMMN;  '0MMMMMMMNk;.   ,dXMMMMMMMMMMMMMMMMMMMWKc              \n";
cout<<"               ;0WMMMMN:  .kWMMMMMMMMWKo.   .l0WMMMMMMMMMMMMMMMXl.               \n";
cout<<"                 ,xXMMWo  .xWMMMMMMMMMMMNk:.   ,xXMMMMMMMMMMW0c.               \n";
cout<<"                   .lOXx   lWMMMMMMMMMMMMMWKo.   .l0WMMMMWKx,                    \n";
cout<<"                      ..   cNMMMMMMMMMMMMMMMMNk;.   ;xKOl'.                      \n";
cout<<"                           .ok0XNWWMMMMMMMMMMMWNk:                              \n";
cout<<"                               ..',;cclllllc:;'..                             \n";

       break;

       case 2:
       cout<<" /dNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNm+"<<endl;
cout<<"mMs::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::sMN"<<endl;
cout<<"mM+                                                                                              +MM"<<endl;
cout<<"mM+                                                                                              +MM"<<endl;
cout<<"mM+                                                                                              +MM"<<endl;
cout<<"mM+                                                                                              +MM"<<endl;
cout<<"mM+                                     -s-                                                      +MM"<<endl;
cout<<"mM+                                     /NN:                                                     +MM"<<endl;
cout<<"mM+                                      -yN+                                                    +MM"<<endl;
cout<<"mM+                                       `+Mo                                                   +MM"<<endl;
cout<<"mM+                                      `/yy-                                                   +MM"<<endl;
cout<<"mM+                             `..`   `+yo.                                                     +MM"<<endl;
cout<<"mM+                          `/ydmmmd:`o+.                                    ``..--             +MM"<<endl;
cout<<"mM+                         -dMMMMMMy/ymmdy:                      ``..-:/+osyhdmmmds             +MM"<<endl;
cout<<"mM+                    `:oo`mMMMMMMs/NMMMMMN/         ```.--:/osyhhhhhhyyyhdNmds/-.-+`           +MM"<<endl;
cout<<"mM+                  `+dNs`:MMMMMMMNNMMMMMMMm `-:/+ssyhhhhhyyo+/:--..-/shdho:..-ohmMN`           +MM"<<endl;
cout<<"mM+                  yMMs  /MMMMMMMMMMMMMMMMm :dNmyo+:-.``      `-+yhdy+-..-ohmMMMMMN`           +MM"<<endl;
cout<<"mM+                ``oMMs  `mMMMMMMMMMMMMMMMs   :NMNm:     `.:oydds/-``:ohmMMMMMMMMMN`           +MM"<<endl;
cout<<"mM+           -+syyhh-+NN.  -dNMMMMMMMMMMNm+   `+NNm+` `./shdho:.``:ohmMMMMMMMMMMMMMN`           +MM"<<endl;
cout<<"mM+           yMN+-..  -hs  +y/ohdmNNmdy+:`  `odms:.-+yhdy+:```:ohNMMMMMMMMMMMMMMMNdo            +MM"<<endl;
cout<<"mM+           yMdms-`    .  `ym+.``.-:/      :+::oydds/-` `:ohNMMMMMMMMMMMMMMMNds:.              +MM"<<endl;
cout<<"mM+           yM.-smds/-``    +mNmdmds-   `./shmho:.  `:ohNMMMMMMMMMMMMMMMNdo:.   `-/`           +MM"<<endl;
cout<<"mM+           yM.   -+sdmdhsso++yhy+////+ydmy+-`  `:odNMMMMMMMMMMMMMMMNdo:`   `-+ymMN`           +MM"<<endl;
cout<<"mM+           yM.        .-:/+ossssysssss/.   `:sdNMMMMMMMMMMMMMMMNdo:`   `-ohNMMMMMN`           +MM"<<endl;
cout<<"mM+           yM.                         `:sdNMMMMMMMMMMMMMMMNdo:`   `-ohNMMMMMMMMMN`           +MM"<<endl;
cout<<"mM+           yM.                        yMMMMMMMMMMMMMMMMNho-`   `-ohNMMMMMMMMMMMMMN`           +MM"<<endl;
cout<<"mM+           yM.                       `mMMMMMMMMMMMMNho-`   `-ohNMMMMMMMMMMMMMMMMdo            +MM"<<endl;
cout<<"mM+           yM.                       `mMMMMMMMMNh+-`   `:ohNMMMMMMMMMMMMMMMNds:`              +MM"<<endl;
cout<<"mM+           yM.                       `mMMMMNho-`   `:odNMMMMMMMMMMMMMMMNdo:`  ./yd`           +MM"<<endl;
cout<<"mM+           yM.                       `mmy+-`   `:ohNMMMMMMMMMMMMMMMNho:`  -/ymNMMN`           +MM"<<endl;
cout<<"mM+           yM.                        .`   .:odNMMMMMMMMMMMMMMMNho:` `-+ymNMMMMMMN`           +MM"<<endl;
cout<<"mM+           yM.                         .:sdNMMMMMMMMMMMMMMMNho:```-+ymNMMMMMMMMMMN`           +MM"<<endl;
cout<<"mM+           yM.                        yNMMMMMMMMMMMMMMMNho:.``-+ymNMMMMMMMMMMMMMMm`           +MM"<<endl;
cout<<"mM+           yM.                       `mMMMMMMMMMMMMmho:. `-+ymNMMMMMMMMMMMMMMNdy/.            +MM"<<endl;
cout<<"mM+           yM.                       `mMMMMMMMMmho:.``-+ymNMMMMMMMMMMMMMMNdy/-`               +MM"<<endl;
cout<<"mM+           yM.                       `mMMMMmho:. `-+ymNMMMMMMMMMMMMMMNds/.`                   +MM"<<endl;
cout<<"mM+           yM.                       `dmho:.``-+ymNMMMMMMMMMMMMMMNdy/.`                       +MM"<<endl;
cout<<"mM+           yM.                        .. .-+ymNMMMMMMMMMMMMMMNds/.`                           +MM"<<endl;
cout<<"mM+           yM.                        -+hmNMMMMMMMMMMMMMMNds/-`                               +MM"<<endl;
cout<<"mM+           +M+                       `dMMMMMMMMMMMMMMNds/.`                                   +MM"<<endl;
cout<<"mM+           `sNo.                     `mMMMMMMMMMMNds/.`                                       +MM"<<endl;
cout<<"mM+             :hdy:.`                 `mMMMMMMNds/.                                            +MM"<<endl;
cout<<"mM+               -+hdhyo/:-...````````..mMMNds/.                                                +MM"<<endl;
cout<<"mM+                  `-:+syhdhhhhhhhhhhhhhs/.                                                    +MM"<<endl;
cout<<"mM+                           ``````````                                                         +MM"<<endl;
cout<<"mM+                                                                                              +MM"<<endl;
cout<<"mM+                                                                                              +MM"<<endl;
cout<<"mM+                                                                                              +MM"<<endl;
cout<<"mM+                                                                                              +MM"<<endl;
cout<<"mMs----------------------------------------------------------------------------------------------oMN"<<endl;
cout<<"/mMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMm+"<<endl;
       break;

       case 3:
       cout<<"               `/ooooooooooooooooooooo+.                    `/ooooooooooooooooooooo+.                "<<endl;
  cout<<"           `/dMMMMMMMMMMMMMMMMMMMMMMN:                    `dMMMMMMMMMMMMMMMMMMMMMMNo.              "<<endl;
  cout<<"        `+dMMMMMMMMMMMMMMMMMMMMMMMMN:                    `dMMMMMMMMMMMMMMMMMMMMMMMMNo.            "<<endl;
  cout<<"         `+dMMMMMMMMMMMMMMMMMMMMMMMMMMN:                    `dMMMMMMMMMMMMMMMMMMMMMMMMMMNs.          "<<endl;
  cout<<"       `+dMMMMMMMMMMMMMMMMMMMMMMMMMMMMN: .////////////////. `dMMMMMMMMMMMMMMMMMMMMMMMMMMMMms.        "<<endl;
  cout<<"     .+dMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMN: :NMMMMMMMMMMMMMMM/ `dMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMms-      "<<endl;
  cout<<"     sMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMN: :NMMMMMMMMMMMMMMM/ `dMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMN      "<<endl;
  cout<<"     sMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMN: :NMMMMMMMMMMMMMMM/ `dMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM      "<<endl;
  cout<<"     sMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMN: :NMMMMMMMMMMMMMMM/ `dMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM      "<<endl;
  cout<<"     sMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMN: :NMMMMMMMMMMMMMMM/ `dMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM      "<<endl;
  cout<<"     sMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMN: -yyyyyyyyyyyyyyyy: `dMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM      "<<endl;
  cout<<"     sMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMN:                    `dMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM      "<<endl;
  cout<<"     sMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNy.                    `+mMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM      "<<endl;
  cout<<"     sMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNy-`      ```.....``       .omMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM      "<<endl;
  cout<<"     sMMMMMMMMMMMMMMMMMMMMMMMMMMMNy-    `.:+shdmmNNmmddyo/.`    .omMMMMMMMMMMMMMMMMMMMMMMMMMMMM      "<<endl;
  cout<<"     sMMMMMMMMMMMMMMMMMMMMMMMMMNy-    ./ymMMMMMMMMMMMMMMMMNh+-`   .omMMMMMMMMMMMMMMMMMMMMMMMMMM      "<<endl;
  cout<<"    sMMMMMMMMMMMMMMMMMMMMMMMNs-    .omMMMMMMMMMMMMMMMMMMMMMMNy:`   .omMMMMMMMMMMMMMMMMMMMMMMMM      "<<endl;
  cout<<"     sNNNNNNNNNNNNNNNNNNNNNms-    `omMMMMMMMMMMMMMMMMMMMMMMMMMMNy.    .omNNNNNNNNNNNNNNNNNNNNNN      "<<endl;
  cout<<"     `......................     .yMMMMMMNmmmNMMMMMMMMNNmmNNMMMMMd:     `......................      "<<endl;
  cout<<"             oddddddddddd       .dMMMMds:.``.-+hNMMMd+-.``.-+hNMMMm:       yddddddddddy`             "<<endl;
  cout<<"             yMMMMMMMMMMM      `yMMMMs`         :dm/`         :mMMMd.      dMMMMMMMMMMm`             "<<endl;
  cout<<"             yMMMMMMMMMMM      :NMMMy            `.            /NMMMo      dMMMMMMMMMMm`             "<<endl;
  cout<<"             yMMMMMMMMMMM      +MMMM+                          -mMMMh`     dMMMMMMMMMMm`             "<<endl;
  cout<<"             yMMMMMMMMMMM      oMMMMy                          +NMMMd`     dMMMMMMMMMMm`             "<<endl;
  cout<<"             yMMMMMMMMMMM      +MMMMMs`                       +NMMMMh`     dMMMMMMMMMMm`             "<<endl;
  cout<<"             yMMMMMMMMMMM      -NMMMMMd/`                   :hMMMMMMo      dMMMMMMMMMMm`             "<<endl;
  cout<<"             yMMMMMMMMMMM      `yMMMMMMMNy/.            `/ymMMMMMMMd.      dMMMMMMMMMMm`             "<<endl;
  cout<<"             ohhyyyyyyyyh       .hMMMMMMMMMNd/`      `/hNMMMMMMMMMm:       shyyyyyyyyhy`             "<<endl;
  cout<<"             ````````````        .yMMMMMMMMMMMmo.  `+dNMMMMMMMMMMd:        `````````````             "<<endl;
  cout<<"     yddddddddddddddddddddddy:    `omMMMMMMMMMMMd--dMMMMMMMMMMMNy.    .oddddddddddddddddddddddd.     "<<endl;
  cout<<"     mMMMMMMMMMMMMMMMMMMMMMMMNs-    .omMMMMMMMMMMmdMMMMMMMMMMNy-`   `+mMMMMMMMMMMMMMMMMMMMMMMMM.     "<<endl;
  cout<<"     mMMMMMMMMMMMMMMMMMMMMMMMMMNs.    .:ymMMMMMMMMMMMMMMMMmh+.    `+mMMMMMMMMMMMMMMMMMMMMMMMMMM.     "<<endl;
  cout<<"     mMMMMMMMMMMMMMMMMMMMMMMMMMMMms.     `-+shdmmmmmmdhyo:.`    `+dMMMMMMMMMMMMMMMMMMMMMMMMMMMM.     "<<endl;
  cout<<"     mMMMMMMMMMMMMMMMMMMMMMMMMMMMMMmo.       ```....```       `/hMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM.     "<<endl;
  cout<<"     mMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMmo.                    `/hMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM.     "<<endl;
  cout<<"     mMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM+                    -mMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM.     "<<endl;
  cout<<"    mMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMo -hhhhhhhhhhhhhhhh: -mMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM.     "<<endl;
  cout<<"    mMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMo :NMMMMMMMMMMMMMMM/ -mMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM.     "<<endl;
  cout<<"    mMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMo :NMMMMMMMMMMMMMMM/ -mMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM.     "<<endl;
  cout<<"     mMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMo :NMMMMMMMMMMMMMMM/ -mMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM.     "<<endl;
  cout<<"     yMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMo :NMMMMMMMMMMMMMMM/ -mMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMm`     "<<endl;
  cout<<"     `/dMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMo :NNNNNNNNNNNNNNNN/ -mMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNo.      "<<endl;
  cout<<"       `+dMMMMMMMMMMMMMMMMMMMMMMMMMMMMMo `::::::::::::::::. -mMMMMMMMMMMMMMMMMMMMMMMMMMMMMNs-        "<<endl;
  cout<<"         `smMMMMMMMMMMMMMMMMMMMMMMMMMMMo                    -mMMMMMMMMMMMMMMMMMMMMMMMMMMNy-          "<<endl;
  cout<<"           .oNMMMMMMMMMMMMMMMMMMMMMMMMMo                    -mMMMMMMMMMMMMMMMMMMMMMMMMNh-            "<<endl;
  cout<<"             .sNMMMMMMMMMMMMMMMMMMMMMMMo                    -mMMMMMMMMMMMMMMMMMMMMMMMh:              "<<endl;
  cout<<"               -+++++++++++++++++++++++-                    `/++++++++++++++++++++++/                "<<endl;
       break;
   }

   cout << "\n Think you for your selection \n ";

     cout << RESET;
      Sleep(2800);
}


// Function to generate numbers and display frequency chart Es-5
void generateNumbersAndChart() {
       int one = 0, two = 0, three = 0, four = 0, five = 0;

    srand(time(0));


    for (int i = 0; i < 100; ++i) {
        int num = rand() % 5 + 1;

        switch(num){
            case 1: one++; break;
            case 2: two++; break;
            case 3: three++; break;
            case 4: four++; break;
            case 5: five++; break;
        }
    }

    for (int i = 1; i <= 5; ++i) {
        cout << i << ": ";

        int count = 0;
        switch(i) {
            case 1: count = one; break;
            case 2: count = two; break;
            case 3: count = three; break;
            case 4: count = four; break;
            case 5: count = five; break;
        }

        for (int j = 0; j < count; ++j) {
            cout << "*";
        }
        cout << " " << count;
        cout << "\n";
    }
    Sleep(1800);
}


// Function for the game "Seven and a Half" Es-6
void gameSevenAndHalf() {
     srand(static_cast<unsigned>(time(0)));  // Seed the random number generator

    float playerScore = 0;
    char choice;

    cout << "Welcome to 7 e mezzo! Try to get as close to 7.5 without going over." << endl;

    do {
        // Generate a random card value
        int cardType = rand() % 10 + 1;
        float drawnCard;

        // Assign value to the drawn card based on the random number
        switch (cardType) {
            case 1: drawnCard = 1; break;
            case 2: drawnCard = 2; break;
            case 3: drawnCard = 3; break;
            case 4: drawnCard = 4; break;
            case 5: drawnCard = 5; break;
            case 6: drawnCard = 6; break;
            case 7: drawnCard = 7; break;
            case 8: // Face card (Jack)
            case 9: // Face card (Queen)
            case 10: // Face card (King)
                drawnCard = 0.5;
                break;
        }

        playerScore += drawnCard;

        // Display the drawn card and current score
        cout << "You drew a card with value: " << drawnCard << endl;
        cout << "Current score: " << playerScore << endl;

        // Check if player has gone over 7.5
        if (playerScore > 7.5) {
            cout << "Bust! Your score is over 7.5. You lose." << endl;
            break;
        }

        // Ask the player if they want to draw another card
        cout << "Do you want to draw another card? (y/n): ";
        cin >> choice;

        // Handle player choice with switch statement
        switch (choice) {
            case 'y':
            case 'Y':
                // Continue to draw another card
                break;
            case 'n':
            case 'N':
                // Display the final score and outcome
                cout << "Final score: " << playerScore << endl;
                if (playerScore == 7.5) {
                    cout << "Perfect! You scored exactly 7.5. You win!" << endl;
                } else {
                    cout << "Your final score is " << playerScore << ". Thanks for playing!" << endl;
                }

            default:
                cout << "Invalid input. Please enter 'y' or 'n'." << endl;
                break;
        }

    } while (true);
     Sleep(3000);
}



// Function to verify if a number is an Armstrong number Es-7
void checkArmstrongNumber() {
     int number, originalNumber, remainder, numDigits = 0;
    int sum = 0;

    cout << "Enter a number: ";
    cin >> number;

    originalNumber = number;

    // Find the number of digits in the number
    int temp = number;
    while (temp != 0) {
        temp /= 10;
        numDigits++;
    }

    // Calculate the sum of the digits raised to the power of numDigits
    temp = number;
    while (temp != 0) {
        remainder = temp % 10;
        sum += pow(remainder, numDigits);
        temp /= 10;
    }

    // sum equals the original number
    if (sum == originalNumber) {
        cout << originalNumber << " is an Armstrong number." << endl;
    } else {
        cout << originalNumber << " is not an Armstrong number." << endl;
    }

    Sleep(2000);
}


// Main Function
int main() {
    int choice;

    do {
        cout <<"\n *********************************************************************\n";
        cout << "1. Calculate Average\n";
        cout << "2. Calculate Minimum and Maximum\n";
        cout << "3. Calculate Factorial of a Number\n";
        cout << "4. Draw Characters\n";
        cout << "5. Generate 100 numbers from 1 to 5, display frequency chart\n";
        cout << "6. Game: Seven and a Half\n";
        cout << "7. Check if a Number is Armstrong\n";
        cout << "8. Exit Program\n";
        cout << "*********************************************************************\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                calculateAverage();
                break;
            case 2:
                calculateMinAndMax();
                break;
            case 3:
                calculateFactorial();
                break;
            case 4:
                drawCharacters();
                break;
            case 5:
                generateNumbersAndChart();
                break;
            case 6:
                gameSevenAndHalf();
                break;
            case 7:
                checkArmstrongNumber();
                break;
            case 8:
                cout << "Exiting program.\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
                break;
        }
    } while (choice != 8);

    return 0;
}


