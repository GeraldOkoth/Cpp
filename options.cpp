#include <iostream>

using namespace std;

int main()
{
    char charOption; //stores a character if the user enters a character.

    cout << "Please pick an option from the following(character): " <<endl;
    cout <<"a)" <<"  " <<"Talk" <<endl; //option selection
    cout <<"b)" <<"  " <<"Eat" <<endl; //option selection
    cout <<"b)" <<"  " <<"Play" <<endl; //option selection
    cout <<"d)" <<"  " <<"Sleep" <<endl; //option selection

    cin >> charOption;

    switch(charOption)
    {
        case 'a': cout <<"You chose talk...talking too much is a bad habit." <<endl;
            break;
        case 'b': cout <<"You chose eat...eating healthy foodstuff is good." <<endl;
            break;
        case 'c': cout <<"You chose play...playing too much every day is bad." <<endl;
            break;
        case 'd': cout <<"You chose sleep...sleeping enough is a good habit." <<endl;
            break;
        default: cout <<"You did not choose anything or invalid choice, so exit this program." <<endl;
            break;
    }

    return 0;
}

