#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <fstream>
//Neo Hlumbene
//Logic Design Final

using namespace std;

void displayMenu() //Displaying the menu
{

    cout << "\n1. Guessing game. \n2. Logic Quiz. \n3. Math Quiz. \n4. Exit \n5. Feedback" << endl; //choices.
}

//Function for the Guessing game.
int guessingGame(int *upperBound)
{
    int num, guess, tries = 0; //Declaring variables

    //Calling the Random function and making it start counting at a random position each time.
    srand(time(0));
    num = rand()%(*upperBound+1); //Random number between 0 and user's upperbound.

    //Asking the user to enter input.
    cout << "What is your guess? ";
    cin >> guess;
    tries++; //Incrementing the number of times the user inputs their guess.

    //Output
    while(guess != num)
    {
        if(guess > num)
        {
            cout << "Your guess is too high "; //Output if guess is too high.
            cin >> guess;
            tries++;
        }
        else if(guess < num)
        {
            cout << "Your guess is too low "; //Output if guess is too low.
            cin >> guess;
            tries++;
        }
        if(guess == num)
        {
            cout << "\nThat's correct! You got it after " << tries << " guesses!" << endl; //Output if guess is correct.
        }
    }
    cout << "SECRET NUMBER: " << num << endl; //Displaying the secret number.
    return num;



}

//Function for the logic quiz game.
int logicQuiz(int *pQuestions)
{
    //Declaring and initialising variables.
    srand(time(0));
    int num; //number
    int correctAnswers = 0; //number of correct answers entered by the user.
    char answer;
    int count = 0;

    //The output of the game.
    while(count < *pQuestions)
    {
        num = rand()%(16); //A function to make the program ask the user questions randomly.
        switch(num)
        {
        case 1:
            cout << "\nHow many continents do we have in the world?" << endl; //Asking the user a question.
            cout << "A. 4 \nB. 8 \nC. 7\n"; //Displaying a multiple choice list the user can choose from.
            cin >> answer; //Getting the user's answer.
            if(answer == 'C' || answer == 'c') //Evaluating the user's answer.
            {
                cout << "\nThats correct!" << endl; //Giving feedback to the user if answer is correct.
                correctAnswers++; //Incrementing correctAnswers by 1.
            }
            else
            {
                cout << "\nThat's not the correct answer." << endl; //Giving feedback to the user if answer is incorrect.
            }
            break; //Each case follows the same algorithm.

        case 2:
            cout << "\nHow many World Wars exist in the history of the world?" << endl;
            cout << "\nA. 5 \nB. 2 \nC. 4 \n";
            cin >> answer;

            if(answer == 'B' || answer == 'b')
            {
                cout << "\nThats correct!" << endl;
                correctAnswers++;
            }
            else
            {
                cout << "\nThat's not the correct answer." << endl;
            }
            break;

        case 3:
            cout << "\nWhat is the study of numbers called?" << endl;
            cout << "\nA. Numbercology \nB. Study of Numbers \nC. Mathematics \n";
            cin >> answer;

            if(answer == 'C' || answer == 'c')
            {
                cout << "\nThats correct!" << endl;
                correctAnswers++;
            }
            else
            {
                cout << "\nThat's not the correct answer." << endl;
            }
            break;

        case 4:
            cout << "\nWhat species are humans classified under? " << endl;
            cout << "\nA. Animals \nB. Homo Sapiens \nC. Mammals \n";
            cin >> answer;

            if(answer == 'B' || answer == 'b')
            {
                cout << "\nThats correct!" << endl;
                correctAnswers++;
            }
            else
            {
                cout << "\nThat's not the correct answer." << endl;
            }
            break;

        case 5:
            cout << "\nWhat is the result of a fusion between an egg and sperm cell called? " << endl;
            cout << "\nA. Xygote \nB. Embryo \nC. Feutus \n";
            cin >> answer;

            if(answer == 'A' || answer == 'a')
            {
                cout << "\nThats correct!" << endl;
                correctAnswers++;
            }
            else
            {
                cout << "\nThat's not the correct answer." << endl;
            }
            break;

        case 6:
            cout << "\nA greek philosopher who was Alexandre The Great's teacher. " << endl;
            cout << "\nA. Isaac Newton \nB. Theodore Roosevelt  \nC. Aristotle \n";
            cin >> answer;

            if(answer == 'C' || answer == 'c')
            {
                cout << "\nThats correct!" << endl;
                correctAnswers++;
            }
            else
            {
                cout << "\nThat's not the correct answer." << endl;
            }
            break;

        case 7:
            cout << "\nWhich football club won the premier league in 1994? " << endl;
            cout << "\nA. Chelsea \nB. New Castle FC \nC. Manchester United \n";
            cin >> answer;

            if(answer == 'C' || answer == 'c')
            {
                cout << "\nThats correct!" << endl;
                correctAnswers++;
            }
            else
            {
                cout << "\nThat's not the correct answer." << endl;
            }
            break;

        case 8:
            cout << "\nOn what day is Youth Day celebrated in South Africa? " << endl;
            cout << "\nA. 16 July \nB. 16 August \nC. 16 June \n";
            cin >> answer;

            if(answer == 'C' || answer == 'c')
            {
                cout << "\nThats correct!" << endl;
                correctAnswers++;
            }
            else
            {
                cout << "\nThat's not the correct answer." << endl;
            }
            break;

        case 9:
            cout << "\nWhich galaxy are we in? " << endl;
            cout << "\nA. Star Way \nB. Milky Way \nC. Star Wars \n";
            cin >> answer;

            if(answer == 'B' || answer == 'b')
            {
                cout << "\nThats correct!" << endl;
                correctAnswers++;
            }
            else
            {
                cout << "\nThat's not the correct answer." << endl;
            }
            break;

        case 10:
            cout << "\nA computer language named after a type of snake. " << endl;
            cout << "\nA. Python \nB. Java \nC. Anaconda \n";
            cin >> answer;

            if(answer == 'A' || answer == 'a')
            {
                cout << "\nThats correct!" << endl;
                correctAnswers++;
            }
            else
            {
                cout << "\nThat's not the correct answer." << endl;
            }
            break;

        case 11:
            cout << "\nHow many official languages does South Africa have? " << endl;
            cout << "\nA. 12 \nB. 10 \nC. 11 \n";
            cin >> answer;

            if(answer == 'C' || answer == 'c')
            {
                cout << "\nThats correct!" << endl;
                correctAnswers++;
            }
            else
            {
                cout << "\nThat's not the correct answer." << endl;
            }
            break;

        case 12:
            cout << "\nWho won the Miss Universe peagent in 2020? " << endl;
            cout << "\nA. Liesl Khumalo \nB. Zozibini Tunzi \nC. Bonang Matheba \n";
            cin >> answer;

            if(answer == 'B' || answer == 'b')
            {
                cout << "\nThats correct!" << endl;
                correctAnswers++;
            }
            else
            {
                cout << "\nThat's not the correct answer." << endl;
            }
            break;

        case 13:
            cout << "\nA primary colour. " << endl;
            cout << "\nA. White \nB. Red \nC. Green \n";
            cin >> answer;

            if((answer == 'B' || answer == 'b') || (answer == 'C' || answer == 'c'))
            {
                cout << "\nThats correct!" << endl;
                correctAnswers++;
            }
            else
            {
                cout << "\nThat's not the correct answer." << endl;
            }
            break;

        case 14:
            cout << "\nWhat is the most spoken language in South Africa? " << endl;
            cout << "\nA. English \nB. Zulu \nC. Afrokaans \n";
            cin >> answer;

            if(answer == 'A' || answer == 'a')
            {
                cout << "\nThats correct!" << endl;
                correctAnswers++;
            }
            else
            {
                cout << "\nThat's not the correct answer." << endl;
            }
            break;

        case 15:
            cout << "\nWhat is the name of the male pratogonist who is referred to as 'THE ONE' in The Matrix movie. " << endl;
            cout << "\nA. One \nB. Neo \nC. Trinity \n";
            cin >> answer;

            if(answer == 'B' || answer == 'b')
            {
                cout << "\nThats correct!" << endl;
                correctAnswers++;
            }
            else
            {
                cout << "\nThat's not the correct answer." << endl;
            }
            break;

        }
        count++;
    }
    cout << "\nYou got " << correctAnswers << "/" << *pQuestions << " correct answers." << endl; //Giving the user feedback on their score.
    return correctAnswers;
}
//Function thst checks answers provided by the user on the math quiz.
int checkAnswer(int num1, int num2)
{
    if(num1 == num2)
    {
        cout << "\nCorrect!" << endl; //Program output if user's answer is correct.
    }
    else
    {
        cout << "\nIncorrect" << endl; //Program output if user's answer is incorrect.
    }
    return num2;
}

//Function for the math quiz game.
int mathQuiz(int round)
{
    //Declaring and initialising variables.
    int a, b, c, d, e, f, x, y;
    int count = 0;
    int numRound = 1; //Number of rounds played by the user.
    int answer, results;

    //OUTPUT.
    while(count < round)
    {
        cout << "\nROUND " << numRound << ": \n" << endl; //Displaying the round the user is currently playing.
        srand(time(0));
        cout << "\nADDITION (+): " << endl; //ADDITION.
        a = rand()%1001; //Random number between 0 and 1000.
        b = rand()%1001;
        results = a + b; //Calculating the total so it can be compared to the users input.
        cout << "\n" << a << " + " << b << " = ";
        cin >> answer;
        checkAnswer(answer, results);

        srand(time(0));
        cout << "\nSUBTRACTION (-): " << endl; //SUBTRACTION.
        c = rand()%1001;
        d = rand()%1001;
        results = c - d;
        cout << "\n" << c << " - " << d << " = ";
        cin >> answer;
        checkAnswer(answer, results);

        srand(time(0));
        cout << "\nMULTIPLICATION (X): " << endl; //MULTIPLICATION.
        e = rand()%101; //Number between 0 and 100.
        f = rand()%101;
        results = e*f;
        cout << "\n" << e << " X " << f << " = ";
        cin >> answer;
        checkAnswer(answer, results);

        srand(time(0));
        cout << "\nDIVISION (/): " << endl; //DIVISION.
        x = rand()%1001;
        y = rand()%101;
        int divisibility = x%y;
        if(x<y && divisibility != 0 )
        {
           y = rand()%101;
        }
        else
        {
            results = x/y;
            cout << "\n" << x << " / " << y << " = ";
            cin >> answer;
            checkAnswer(answer, results);
        }
        count++; //incrementing the count value for the loop.
        numRound++; //incrementing the number of rounds played.
    }
    cout << "\nTHANK YOU FOR PLAYING THE MATH QUIZ!" << endl;
    return numRound;
}
//Struct for the user's information and feedback
struct PlayerInfo
{
    string name;
    int age;
    string game; //User's favorite game from the list.
};
//Main function.
int main()
{
    //Declaring and initializing variables.
    int choice;
    int count = 0;
    int games = 0;
    //Interacting with the user.
    cout << "Greetings" << endl;
    cout << "WELCOME TO TRINITY GAMES!" << endl;
    cout << "Choose a game: " << endl;
    displayMenu(); //Displaying the menu.
    cin >> choice;
    games++; //incrementing the number of games played by the user.

    int *pNum; //Declaring a pointer value.

    PlayerInfo player; //declaring a variable with PLayerInfo struct data type.


    while(choice != 4 && count < 4)
    {

        if(choice == 5)
        {
            ofstream outputFile; //Opening an ofstream.
            outputFile.open("feedback.txt"); //Opening a text file.

            //Interacting with the user.
            cout << "Thank you for choosing TRINITY GAMES. You played " << games-1 << " times" << endl;
            cout << "Please enter your name, age and your favorite game from our list (Logic/Math/Guessing) ";

            //Player's input.
                cin >> player.name;
                cin >> player.age;
                cin >> player.game;

            //Saving user's input in a textfile.
                outputFile << player.name;
                outputFile << player.age;
                outputFile << player.game;

            outputFile.close(); //Closing file.


            return 1; //Closing program.
        }
        else
        {
            if(choice == 1)
            {
            int maximum;
            cout << "The game will generate a number between 1 (as the lower bound) and the number of your choice as an upperbound" << endl;
            cout << "Now enter your upperboud: ";
            cin >> maximum;

            //int *pMax;
            pNum = &maximum; //Upper bound.
            guessingGame(pNum); //Sending the address not contents!! Calling the guessing game function.

            }
            else if(choice == 2)
            {
                int questions;
                cout << "Welcome to the LOGIC QUIZ Game. \nLets see how well you know the world around us. " << endl;
                cout << "\nHow many questions do you want? ";
                cin >> questions;

                //int *pQuestions; //Number of questions.
                pNum = &questions;

                logicQuiz(pNum); //Calling the logic quiz function.

            }
            else if(choice == 3)
            {
                int questions;
                cout << "Welcome to the MATH QUIZ!" << endl;
                cout << "\nEnter the number of rounds you want to play: ";
                cin >> questions; //Number of rounds.

                mathQuiz(questions); //Calling the math quiz function.
            }
        }
        cout << "\nChoose another game (; (or Exit)\n" << endl;
        displayMenu();
        cin >> choice;
        games++;
        count++; //Incrementing the count value.
    }

    return 0;
}
