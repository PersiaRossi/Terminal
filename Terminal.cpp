#include <iostream>
#include <string>
using namespace std;

void help_cammand(){
    cout<<"Here are all cammand"<<"\n";
    cout<<"help : To Shows all commands :"<<"\n"<<"clear : To Clears screen :"<<"\n"<<"exit : To Closes terminal :"<<"\n"<<"about : To see info of terminal";

}
void about_cammand(){
     cout<<"casia terminal devlop by Chitraksh Sahu aka Persia Rossi"<<"\n"<<"YouTube : www.youtube.com/@PersiaRossi"<<"\n""insta : https://www.instagram.com/persia_rossi"<<"\n""gethub : https://github.com/PersiaRossi"<<"\n";
}
void claer_cammnad(){
    system("cls");
}


int main(){

    cout<<"casia os booting"<<"\n";

   while (true)
    {
    // first line show in terminal
   
    cout<<"Casia terminal > ";
    string user;
    getline(cin,user);
    
    // for help
    if (user == "help"){
        help_cammand();
        
    }
    
    // for exit
    else if (user == "exit"){
        break;
    }
    
    // for about
    else if (user == "about"){
        about_cammand();
    } 
    
    // for clear
    else if (user == "clear"){
        claer_cammnad();
    }

    //  if user write unknown command
    else
    {
        cout<<"Error : Unknown command\n";
    }

    }
    
    return 0;
}
