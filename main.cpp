#include "Finances.h"

using namespace std;

int main(){
    Finances finances("users.xml");

    while (true)
    {
        if (finances.getLoggedInUserId() == 0)
        {
            finances.selectOptionFromMainMenu();

            switch (finances.getChoice())
            {
            case '1':
                finances.registerUser();
                break;
            case '2':
                finances.loginUser();
                break;
            case '9':
                exit(0);
                break;
            default:
                cout << endl << "Nie ma takiej opcji w menu." << endl << endl;
                system("pause");
                break;
            }
        }
        else
        {
            finances.selectOptionFromUserMenu();

            switch (finances.getChoice())
            {
            case '1':
                break;
            case '2':
                break;
            case '3':
                break;
            case '4':
                break;
            case '5':
                break;
            case '6':
                break;
            case '7':
                finances.changePassword();
                break;
            case '8':
                finances.logoutUser();
                break;
            }
        }
    }

    return 0;
}
