#include <iostream>
#include <string>
using namespace std;

string ReadNameFromUser()
{
    string name;
    cout << "Please Enter Your String?" << endl;
    getline(cin, name);

    return name;
}


void ConverSmallLetterForCapitalLetter(string name)
{

    bool IsFisrtLetter = true;

    for (int i = 0; i < name.length(); i++)
    {



        if (name[i] != ' ' && IsFisrtLetter)
        {

           name[i]= char(name[i]-32) ;
           

        }
        IsFisrtLetter = (name[i] == ' ' ? true : false);

       
      

    }
    cout << "\nString afer Conversion : " << endl;
    cout << "\n" << name ;

}

int main()
{

    ConverSmallLetterForCapitalLetter(ReadNameFromUser());
   system("pause>0");

}

