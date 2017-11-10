/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: agonzalez
 *
 * Created on November 9, 2017, 11:39 PM
 */


#include <iostream>
#include <regex>
#include <string>

using namespace std;

/*
 * 
 */
class makeIPAddress{
public:

   IPAddress(string source, string dest) 
   {
       regex format("((1[1-255]{1})).((1[1-255]{1})).(((1[1-255]{1})).((1[1-99]{1}))");
       if(regex_match(source, format) && regex_match(dest, format))
       {
           cout<< "this is a valid IP Address" << endl;
       }
       else
       {
           throw string "Ripperoini";
       }
   }
   
};
int main(int argc, char** argv) {

    string a1 = "212.112.212.11";
    string a2 = "212.112.212.12";
    
    string b1 = "212.112.212.333";
    string b2 = "212.112.212.33";
    try
    {
        makeIPAddress(a1,a2);
        makeIPAddress(b1,b2);
        
    }
    catch(string &exc){
        cout << "Invalid IP Header - Source IP Address is invalid."<<endl;
    }
    return 0;
}

