#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

int main(){

    int count = 0;
    float sum = 0;
    
    string text;
    ifstream source("score.txt")
    while (getline(source,text))
    {
        sum+=atof(text.c_str());
        count++;
    }
    cout << "Number of data = ";
    cout << setprecision(3);
    cout << "Mean = ";
    cout << "Standard deviation = ";
    source.close();
    return 0;
}