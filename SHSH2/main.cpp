//This App Will Save Your Infinite Blobs
//I Hope You Enjoy With This Build
//By @pir_hack
//TSS By TIHMSTAR !!


#include <sys/stat.h>
#include <iostream>
#include <cstdlib>
#include <stdlib.h>
#include <stdio.h>
#include <fstream>
using namespace std;
string x[7];
int main(int argc, char *argv[]){
    cout<<"\t \t \t ****************************\n";
    cout<<"\t \t \t *       SHSH2 Saver        *\n";
    cout<<"\t \t \t *       By @pir_hack       *\n";
    cout<<"\t \t \t *         WELLCOME         *\n";
    cout<<"\t \t \t ****************************\n";
    cout<<"\n \n \n \nEnter Your Device ID (i.e iPhone9,3) \n";
    cout<<"You Can Find It On iTunes. \n";
    cout<<"ID :";
    cin>>x[0];
    cout<<"\nEnter Your ECID \n";
    cout<<"You Can Find It On iTunes. \n";
    cout<<"ECID :";
    cin>>x[1];
    cout<<"\nWhich Version You Wanna Save For (i.e 11.1.2) \n";
    cout<<"iOS :";
    cin>>x[2];
Hi:
    cout<<"\nDo You Like To Add Board Configuration ? \n";
    cout<<"If Yes Write YES If No Write NO. \n";
    cout<<"Your Choice Is :";
    cin>>x[3];
    if (x[3] == "YES") {
        cout<<"Enter Your Board Config \n";
        cout<<"Board :";
        cin>>x[4];
        string d="mkdir ~/Desktop/"+x[2];
        system(d.c_str());
        string y="~/Desktop/infiniteSHSH2/tss -d "+x[0]+" -e "+x[1]+" -i "+x[2]+" -b "+x[4]+"-s --save-path ~/Desktop/"+x[2];
        for (;;){
            system(y.c_str());
    }
    }
    else if (x[3] == "NO"){
        string d="mkdir ~/Desktop/"+x[2];
        system(d.c_str());
        string y="~/Desktop/infiniteSHSH2/tss -d"+x[0]+" -e "+x[1]+" -i "+x[2]+" -s --save-path ~/Desktop/"+x[2];
     for (;;){
          system(y.c_str());
    }
    }
    else {
        cout<<"\n \n \n \n Wrong Choice \n";
        goto Hi;
    }
   
}

