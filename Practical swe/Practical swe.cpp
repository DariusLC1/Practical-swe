// Practical swe.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>


bool going = true;
int right = 0;
int wrong = 0;
int a;
void test();

int main()
{
    while (going)
    {
        test();
        going = false;
    }
    std::cout << " you got: " << right << "/" << 4 << " so you had " << wrong << " wrong answers";
}

void test()
{
    bool blank = true;
    while (blank)
    {
        int num;
        std::cout << "Which one of these numbers is easy divided by 3" << "\n";
        std::cout << "1). 12314 \n2). 87328 \n3). 75362 \n4). 963822\n";
        std::cin >> num;
        switch (num)
        {
        case 1:
            std::cout << "wrong";
            ++wrong;
            system("pause");
            break;
        case 2:
            std::cout << "wrong";
            ++wrong;
            system("pause");
            break;
        case 3:
            std::cout << "wrong";
            ++wrong;
            system("pause");
            break;
        case 4:
            std::cout << "right";
            ++right;
            system("pause");
            break;
        }
        system("cls");

        int num1;
        std::cout << "Which one of these days is monday" << "\n";
        std::cout << "1). july 1, 2022 \n2). march 16, 2020 \n3). october 12, 2022 \n4). november 10, 2021\n";
        std::cin >> num1;
        switch (num1)
        {
        case 1:
            std::cout << "wrong\n";
            ++wrong;
            system("pause");
            break;
        case 2:
            std::cout << "right\n";
            ++right;
            system("pause");
            break;
        case 3:
            std::cout << "wrong\n";
            ++wrong;
            system("pause");
            break;
        case 4:
            std::cout << "wrong\n";
            ++wrong;
            system("pause");
            break;
        }
        system("cls");

        int num2;
        std::cout << "what is the captial of spain" << "\n";
        std::cout << "1). Madrid \n2). Seville \n3). Barcelona \n4). Valencia\n";
        std::cin >> num2;
        switch (num2)
        {
        case 1:
            std::cout << "right";
            ++right;
            std::cout << "r\n";
            system("pause");
            break;
        case 2:
            std::cout << "wrong\n";
            ++wrong;
            system("pause");
            break;
        case 3:
            std::cout << "wrong\n";
            ++wrong;
            system("pause");
            break;
        case 4:
            std::cout << "right\n";
            ++right;
            system("pause");
            break;
        }
        system("cls");

        int num3;
        std::cout << "what is the smallest mountain in the world\n";
        std::cout << "1). Mauna Kea \n2). Mont Blanc \n3). Mount Wycheproof \n4). Mount Elbert\n";
        std::cin >> num3;
        switch (num3)
        {
        case 1:
            std::cout << "right";
            ++right;
            std::cout << "r\n";
            system("pause");
            break;
        case 2:
            std::cout << "wrong\n";
            ++wrong;
            system("pause");
            break;
        case 3:
            std::cout << "right\n";
            ++right;
            system("pause");
            break;
        case 4:
            std::cout << "right\n";
            ++right;
            system("pause");
            break;
        }
        system("cls");
        blank = false;
    }
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
