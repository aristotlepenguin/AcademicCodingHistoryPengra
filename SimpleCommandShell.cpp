//This piece of code is a simple Linux-based shell that works like a primitive 
//command prompt. Because it uses Linux C++ libraries you will need to run it there.
#include <iostream>
#include <cstring>
#include <"unistd.h">
using namespace std;

int main()
{
    char checker;//Checks for the end of line
    char store[100][50];//Stores up to 50 arguments
    int i=0;
    while (1){
        i=0;
        cout<<"Pengra>";
		//Command prompt used our last names as the header
        while (checker !='\n'){

            cin >> store[i];
            if(strcmp(store[i],"exit")==0){
                break;
            }//Exit command canceled the command program
            cin.get(checker);
            i++;

        }
         if(strcmp(store[i],"exit")==0){
                break;
            }
char fileName[100];
strcpy(fileName, store[0]);//Copies the name of the first argument to be executed
if(i>0){
char fileArgs[100][i];
for(int z=0; z<i; z++){
   strcpy(fileArgs[z], store[z+1]);

}
}
pid_t pid;

pid=fork;//Replicates into two forked processes
if(pid<0){cout<<"Error, fork failed.";
return 1;}
else if(pid==0){
    if(i==0){
            cout<<fileName;
        const char * mt=NULL;//Empty char pointer for execv
        int execv(const char *fileName, MT);
        cout<<"Exec failed."//A process under execv won't read this statement
    }
    else{int execv(const char *fileName, char *const fileArgs[]);}
}
else{
    wait(NULL);
    cout<<"Child Complete";//Shows when the process is complete
}



}
return 0;
