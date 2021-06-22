#include <iostream>
using namespace std;
int main()
{
    string userImput = "";
    double c, d, s;
    int x;


    do
    {
        //User interface
        cout << "To calculate the mass of the solution press 1" << endl;
        cout << "To calculate the mass of the dissolved substance, press 2" << endl;
        cout << "To calculate the percentage concentration, press 3" << endl;
        cout << "Choose which operation you want to do: ";


        //Switch statements pentru operations
        cin >> x;
        switch (x) {
        case 1: //The operation of obtaining the mass of the solution
            cout << "Enter the percentage concentration: ";
            cin >> c;
            cout << "Enter the mass of the dissolved substance: ";
            cin >> d;
            s = 100 * d / c;
            cout << "The mass of the solution is: " << s << " grams" << endl;
            break;

        case 2: //The operation of obtaining the mass of the dissolved substance
            cout << "Introduceti concentratia procentuala: ";
            cin >> c;
            cout << "Enter the solution table: ";
            cin >> s;
            d = c * s / 100;
            cout << "The mass of the dissolved substance is: " << d << " grams" << endl;
            break;

        case 3: //The operation of obtaining the percentage concentration
            cout << "Enter the solution's mass: ";
            cin >> s;
            cout << "Enter the mass of the dissolved substance: ";
            cin >> d;
            c = d * 100 / s;
            cout << "The percentage concentration is: " << c << "%" << endl;
            break;
        }
        cout << "Wanna see me do it again?" << endl;
        cout << "       .--..--..--..--..--..--.                        " << endl;
        cout << "     .' \\  (`._   (_)     _   \\                        " << endl;
        cout << "   .'    |  '._)         (_)  |                        " << endl;
        cout << "   \\ _.')\\      .----..---.   /                        " << endl;
        cout << "   |(_.'  |    /    .-\\-.  \\  |                       " << endl;
        cout << "   \\     0|    |   ( O| O) | o|                       " << endl;
        cout << "    |  _  |  .--.____.'._.-.  |                       " << endl;
        cout << "    \\ (_) | o         -` .-`  |                       " << endl;
        cout << "     |    \\   |`-._ _ _ _ _\\ /                        " << endl;
        cout << "     \\    |   |  `. |_||_|   |                        " << endl;
        cout << "     | o  |    \\_      \\     |     -.   .-.           " << endl;
        cout << "     |.-.  \\     `--..-'   O |     `.`-' .'           " << endl;
        cout << "   _.'  .' |     `-.-'      /-.__   ' .-'             " << endl;
        cout << " .' `-.` '.|='=.='=.='=.='=|._/_ `-'.'                " << endl;
        cout << " `-._  `.  |________/\\_____|    `-.'                  " << endl;
        cout << "    .'   ).| '=' '='\\/ '=' |                          " << endl;
        cout << "    `._.`  '---------------'                          " << endl;
        cout << "            //___\\   //___\\                           " << endl;
        cout << "              ||       ||                              " << endl;
        cout << "              ||_.-.   ||_.-.                          " << endl;
        cout << "             (_.--__) (_.--__)                         " << endl;

        cout << "" << endl;
        cout << "Yes or No?" << endl;
        cout << "Imput: ";
        cin >> userImput;
        cout << "" << endl;
    }     while (userImput != "no" && userImput != "No" && userImput != "NO");

    return 0; //The end
}