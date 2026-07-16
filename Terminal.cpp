#include <iostream>
#include <string>
#include <ctime>
#include <fstream>
#include <limits>

using namespace std;

string user;
string fi;

void help() {
    cout << "Here are all commands\n";
    cout << "help    : Shows all commands\n";
    cout << "clear   : Clears screen\n";
    cout << "exit    : Closes terminal\n";
    cout << "about   : Shows terminal information\n";
    cout << "version : Shows Corex version\n";
    cout << "time    : Shows current time\n";
}

void about() {
    cout << "Corex Terminal developed by Chitraksh Sahu (Persia Rossi)\n";
    cout << "YouTube : www.youtube.com/@PersiaRossi\n";
    cout << "Instagram : https://www.instagram.com/persia_rossi\n";
    cout << "GitHub : https://github.com/PersiaRossi\n";
}

void version() {
    cout << "Corex v0.1\n";
}

void clearScreen() {
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}

void show_time() {
    time_t now = time(0);
    cout << ctime(&now);
}

void files() {
    cout << "Enter file name (include .txt): ";

    getline(cin, fi);

    ofstream out(fi);

    if (out) {
        cout << "File created successfully!\n";
    } else {
        cout << "Failed to create file!\n";
    }

    out.close();
}

int main() {

    cout << R"(
_______________________________
 / ___| / _ \|  _ \| ____\ \/ /
| |    | | | | |_) |  _|  \  /
| |___ | |_| |  _ <| |___ /  \
 \____| \___/|_| \_\_____/_/\_\
)";

    while (true) {

        cout << "\nCOREX terminal > ";
        getline(cin, user);

        if (user == "help") {
            help();
        }
        else if (user == "exit") {
            break;
        }
        else if (user == "about") {
            about();
        }
        else if (user == "clear") {
            clearScreen();
        }
        else if (user == "version") {
            version();
        }
        else if (user == "time") {
            show_time();
        }
       
        else {
            cout << "Error: Unknown command\n";
        }
    }

    return 0;
}