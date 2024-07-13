// 31: Number of words in a text 

#include<iostream>
#include<string>
using namespace std;
int main (){
    string str;
    int ch=0, word=0;
    cout<<"Enter line of string: ";
    getline(cin,str);
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]==' '){
            word ++;
        }
    }
    cout<<"total words = "<<word;
    return 0;
}
