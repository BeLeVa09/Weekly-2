#include <iostream>
#include <string>

void task1() {
    system("cls");

    int counter1 = 1;

    std::cout << "With a while loop:\n\n";
    system("pause");

    while (counter1 <= 100) {
        std::cout << counter1 << "\n";
        counter1++;
    }

    system("pause");
    system("cls");

    std::cout << "With a for loop:\n\n";
    system("pause");

    for (int i = 0; i <= 100; i++) {
        std::cout << i << "\n";
    }
}

void task2() {
    system("cls");

    for (int i = 100; i > 0; i--) {
        std::cout << i << "\n";
    }
}

void task3() {
    system("cls");
}

void task4() {
    system("cls");

    int counter4 = 5;

    while (counter4 <= 50) {
        std::cout << counter4 << "\n";
        counter4 += 5;
    }
}

void task5() {
    system("cls");

    for (int i = 5; i <= 50; i += 5) {
        std::cout << i << "\n";
    }
}

void task6() {
    system("cls");

    int counter6 = 5;

    do {
        std::cout << counter6 << "\n";
        counter6 += 5;
    } while (counter6 <= 50);
}

void task7() {
    system("cls");

    char answer;

    std::cout << "What grade would you like in Programming 1?\n";
    std::cout << "A, B, C, D, E or F?\n";
    std::cin >> answer;

    switch (answer) {       // I know task 8 is to update this so it accepts upper and lower case inputs and I wasn't sure if you...
    case 'a': case 'A':     // ...meant for them to be two separate tasks and I was going to make it accept both inputs anyway
        std::cout << "Outstanding!\n";
        break;

    case 'b': case 'B':
        std::cout << "Very Good!\n";
        break;

    case 'c': case 'C':
        std::cout << "Good\n";
        break;

    case 'd': case 'D':
        std::cout << "Some flaws\n";
        break;

    case 'e': case 'E':
        std::cout << "Not very good...\n";
        break;

    case 'f': case 'F':
        std::cout << "Fail\n";
        break;

    default:
        std::cout << "That is not a grade!\n";
        break;
    }
}

int main()
{

    int answer;
    char yesno;

    do {
        system("cls");

        std::cout << "------------------\n";
        std::cout << "Leander's weekly 2\n";
        std::cout << "------------------\n\n";
        std::cout << "Which task would you like to see?\n";
        std::cout << "1. Counter to 100\n";
        std::cout << "2. Counter from 100 to 1\n";
        std::cout << "3. Undefined\n"; //------------------------------------------------------|Requires Weekly Task Update|---------------------------------------------------------------
        std::cout << "4. Counter from 5 to 50 in increments of 5 (while loop)\n";
        std::cout << "5. Counter from 5 to 50 in increments of 5 (for loop)\n";
        std::cout << "6. Counter from 5 to 50 in increments of 5 (do while loop)\n";
        std::cout << "7. Choose a grade for programming class\n";

        std::cin >> answer;

        switch (answer) {
        case 1:
            task1();
            break;

        case 2:
            task2();
            break;

        case 3:
            task3();
            break;

        case 4:
            task4();
            break;

        case 5:
            task5();
            break;

        case 6:
            task6();
            break;

        case 7:
            task7();
            break;

        default:
            std::cout << "Invalid Input\n";
            break;
        }

        std::cout << "Would you like to continue? (y/n)\n";
        std::cin >> yesno;

        switch (yesno) {
        case 'y': case 'Y':
            break;

        case 'n': case 'N':
            break;

        default:
            std::cout << "Invalid input\n";
            break;
        }

    } while (yesno != 'n' && yesno != 'N');
}
