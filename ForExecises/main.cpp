#include <iostream>
#include <queue>
#include <fstream>
using namespace std;
int main() {

    fstream outFile;
    outFile.open("test.txt",ios::app);

    outFile.unsetf(ios::skipws);
    //outFile << " Adamdýr" ;
    outFile.close();
    //cout << "File updated :)" << endl;

    char c;
    outFile.open("test.txt",ios::out);
    outFile.unsetf(ios::skipws);
    outFile.seekp(0,ios::beg);
    outFile << "There is a intellegence" << endl;
    outFile.close();

    outFile.open("test.txt",ios::in);
    outFile.unsetf(ios::skipws);
    outFile.seekg(5,ios::beg);
    cout << outFile.tellg();

    return 0;
}
