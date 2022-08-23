#include <bits/stdc++.h>

using namespace std;

int main(int argn,char *args[]) {
    if (argn<=1)
    {
        cout<<"No input provided!"<<endl;
        return 0;
    }
    string arg1 = args[1];
    string name = arg1.substr(0,arg1.find("."));
    string command = "g++ "+arg1+" -o "+name;
    system(command.c_str());
    command="";
    for(int i = 2;i<argn;i++){
        command = command+" "+(string)args[i];
    }
    command = "./"+name+" "+command;
    system(command.c_str());
    return 0;
}

