#include <iostream>
#include <string>
#include <ctime>
using namespace std;
    string user;

void help(){
    cout<<"Here are all cammand"<<"\n";
    cout<<"help : To Shows all commands "<<"\n"<<"clear : To Clears screen "<<"\n"<<"exit : To Closes terminal "<<"\n"<<"about : To see info of terminal"<<"\n"<<"versoin: for chacking os versoin"<<"\n"<<"time: for watching time"<<"\n"<<"hc : change color to green"<<"\n";

}

void about(){
     cout<<"casia terminal devlop by Chitraksh Sahu aka Persia Rossi"<<"\n"<<"YouTube : www.youtube.com/@PersiaRossi"<<"\n""insta : https://www.instagram.com/persia_rossi"<<"\n""gethub : https://github.com/PersiaRossi"<<"\n";
}

void version(){
    cout<< "CasiaOs v0.1"<<"\n";
    }

void claer(){
    system("cls");
}

void time(){
    time_t now = time(0);
    cout<< ctime(&now);
    
    }
 
int main(){

    cout<<"--------------------------------------------------------------------"<<"\n";
    cout<<"                            COREX                                   "<<"\n";
    cout<<"--------------------------------------------------------------------"<<"\n";


   while (true)
    {
    // first line show in terminal    

    cout<<"Casia terminal > ";
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
         time();
         }
    //  if user write unknown command
    else
    {
        cout<<"Error : Unknown command\n";
    }

    }

    return 0;
}
}
