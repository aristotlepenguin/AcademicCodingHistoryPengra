//This is a recursive strategy for solving the Hanoi problem.

#include <iostream>
#include <string>
using namespace std;

void hanoiBuster(int, int, int, int);

int main(){
int blockNum;
cout << "Enter number of blocks:";
cin >> blockNum;

hanoiBuster(1, 3, 2, blockNum);

return 0;}

void hanoiBuster(int source, int destination, int other ,int blockNum){
    if(blockNum==2){
       cout << "Move from position "<< source << " to position " << other<<endl;
       cout << "Move from position "<< source << " to position " << destination<<endl;//Simple instruuction output
       cout << "Move from position "<< other << " to position " << destination<<endl;
    }
    else{
        hanoiBuster(source, other, destination, blockNum-1);

      if(blockNum%2==0){
        cout<<"Move from position "<<source<< " to position "<<destination<<"--s"<< blockNum<<endl;
        hanoiBuster(other, destination, source, blockNum-1);
      }
      else{cout<<"Move from position "<<source<< " to position "<<destination<<"--s"<<blockNum<<endl;
      hanoiBuster(other, destination, source, blockNum-1);
      }


    }


}




