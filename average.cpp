#include<iostream>
#include<cstdlib>
using namespace std;

int main(int argc, char *argv[]){
    double sum;
    if(argc>1){
        for(int i=0; i<argc-1; i++){
            sum += atol(argv[i+1]);
        }
        double aver = sum/(argc-1);
        cout<<"---------------------------------\nAverage of "<< argc-1 <<" numbers = "<< aver;
        cout<<"\n---------------------------------";
    }
    else{
        cout << "Please input numbers to find average.";
    }
}
