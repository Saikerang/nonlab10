#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){

    int count = 0;
    float sum = 0;
    float num = 0;
    float SD;
    float x;
    
    string text;
    ifstream source("score.txt");

    while (getline(source,text))
    {   
        x = atof(text.c_str());
        sum+=atof(text.c_str());
        count++;
        num += pow(x,2);

    }
   
    SD = sqrt((num/count)-pow((sum/count),2));

    
    
    cout << "Number of data = "<<count<<'\n';
    cout << setprecision(3);
    cout << "Mean = "<<sum/count<<'\n';
    cout << "Standard deviation = "<<SD<<'\n';
    source.close();
    return 0;
}