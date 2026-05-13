#include <iostream>
#include <string>
#include <ctime>
using namespace std;

void help_command(){
    cout<<"Here are all cammand"<<"\n";
    cout<<"help : To Shows all commands "<<"\n"<<"clear : To Clears screen "<<"\n"<<"exit : To Closes terminal "<<"\n"<<"about : To see info of terminal"<<"\n"<<"versoin: for chacking os versoin"<<"\n"<<"time: for watching time"<<"\n"<<"hc : change color to green"<<"\n";

}
void about_command(){
     cout<<"casia terminal devlop by Chitraksh Sahu aka Persia Rossi"<<"\n"<<"YouTube : www.youtube.com/@PersiaRossi"<<"\n""insta : https://www.instagram.com/persia_rossi"<<"\n""gethub : https://github.com/PersiaRossi"<<"\n";
}

void version_command(){
    cout<< "CasiaOs v0.1"<<"\n";
    }



void claer_command(){
    system("cls");
}

void time_command(){
    time_t now = time(0);
    cout<< ctime(&now);
    
    }


int main(){

    cout<<"casia os booting"<<"\n";
    cout<<"casia os started"<<"\n";
    

   while (true)
    {
    // first line show in terminal

    cout<<"Casia terminal > ";
    string user;
    getline(cin,user);

    // for help
    if (user == "help"){
        help_command();

    }

    // for exit
    else if (user == "exit"){
        break;
    }

    // for about
    else if (user == "about"){
        about_command();
    } 

    // for clear
    else if (user == "clear"){
        claer_command();
    }
    // for chacking versoin
    else if(user == "version"){
        version_command();
        }
     // for watching time
     else if(user == "time"){
         time_command();
         }
      // for green color
      else if(user == "hc"){
          system("color a0");
      
      }

    //  if user write unknown command
    else
    {
        cout<<"Error : Unknown command\n";
    }

    }

    return 0;
}