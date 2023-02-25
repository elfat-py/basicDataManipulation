#include <iostream>
#include <fstream>


using namespace std;
int main() {

    const int CAPACITY=50;
    int size=0;
    int sum = 0;
    double avg;
    int smallest= 10000000;
    int largest = -10000000;
    ifstream inputFile;
    int numbers[CAPACITY];

    inputFile.open("random_numbers.txt");
    if(!inputFile){
        cout<<"Error. Input file cannot be opened."<<endl;
        cout<<"The program is being terminated.";
        return 0;

    }
    while (inputFile>>numbers[size])
    {
        size++;
    }
    inputFile.close();

    for (int i = 0; i <size ; ++i) {

        sum+=numbers[i];
        if (numbers[i]<smallest){
            smallest=numbers[i];

        }
        if (numbers[i]>largest){
            largest=numbers[i];

        }

    }
    avg=static_cast<double>(sum)/size;
    cout<<"There are "<<size<<" numbers in this list."<<endl;
    cout<<"The smallest number of the file is: "<<smallest<<endl;
    cout<<"The largest number of the file is: "<<largest<<endl;
    cout<<"The average is: "<<avg;
    return 0;
  
}
