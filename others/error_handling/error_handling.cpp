#include <iostream>
#include <string>

using namespace std;

class Printer{
    string _name;
    int   _availablePaper;

    public:
    Printer(string name, int paper){
        _name = name;
        _availablePaper = paper;
    }
    void print(string txtDoc){
        int requirePaper = txtDoc.length() / 10 ;


        if(requirePaper > _availablePaper)
            throw "No paper";
        cout <<"Printing... \n" <<txtDoc << endl;
        _availablePaper -= requirePaper;
    }
};




int main(){

    Printer myPrinter("HP DESKJet 1234",10);
    try{
        myPrinter.print("hello my name is clay, I am a software engineeer .");
        myPrinter.print("hello my name is clay, I am a software engineeer .");
        myPrinter.print("hello my name is clay, I am a software engineeer .");
    }
    catch(const char *  txtException){
        cout <<"Exception: " << txtException << endl;
    }
    catch(int exCode){
        cout <<"Exception: " << exCode << endl;
    }
    catch(...){
        cout <<"Exception happended ! "  << endl;
    }
    return 0;
}

















