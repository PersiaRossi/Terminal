#include <iostream>
#include <string>
#include <ctime>
#include <fstream>
using namespace std;
    string user;
    string fi;

void help(){
    cout<<"Here are all cammand"<<"\n";
    cout<<"help : To Shows all commands "<<"\n"<<"clear : To Clears screen "<<"\n"<<"exit : To Closes terminal "<<"\n"<<"about : To see info of terminal"<<"\n"<<"versoin: for chacking os versoin"<<"\n"<<"time: for watching time"<<"\n"<<"cre : for createing text file"<<"\n";

}

void about(){
     cout<<"Corex terminal devlop by Chitraksh Sahu aka Persia Rossi"<<"\n"<<"YouTube : www.youtube.com/@PersiaRossi"<<"\n""insta : https://www.instagram.com/persia_rossi"<<"\n""github : https://github.com/PersiaRossi"<<"\n";
}

void version(){
    cout<< "Corex v0.1"<<"\n";
    }

void claer(){
    system("cls");
}

void show_time(){
    time_t now = time(0);
    cout<< ctime(&now);
    
    }

void files(){

    cout<<"Name file at last addd .txt"<<"\n";
    cin>>fi;
    ofstream out(fi);
    out<<fi;
    cout<<"file created"<<"\n";

}

int main(){
    cout << R"(
_______________________________
 / ___| / _ \|  _ \| ____\ \/ /
| |    | | | | |_) |  _|  \  /
| |___ | |_| |  _ <| |___ /  \
 \____| \___/|_| \_\_____/_/\_\


)";
   while (true)
    {
    // first line show in terminal    

    cout<<"COREX terminal > ";
    getline(cin,user);

    // for help
    if (user == "help"){
        help();

    }
    // for exit
    else if (user == "exit"){
        break;
    }
    // for about
    else if (user == "about"){
        about();
    } 
    // for clear
    else if (user == "clear"){
        claer();
    }
    // for chacking versoin
    else if(user == "version"){
        version();
        }
     // for watching time
    else if(user == "time"){
         show_time();
       }  

    // for create txt file
    else if (user== "cre")
    {
        files();
    }
    
    //  if user write unknown command
    else
    {
        cout<<"Error : Unknown command\n";
    }

    }

    return 0;
}
