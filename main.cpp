#include <iostream>

using namespace std;

/*
int main()
{
    char input[50];

    cout<<"Enter input: "<<endl;
    cin>>input;

    bool isNumeric = true;

    for(int i=0; input[i] !='\0';i++){
        if (input[i]<'0' || input[i]>'9'){
            isNumeric = false;
            break;
        }
    }

    if (isNumeric){
        cout<<"Your Input Was Numeric Constant"<<endl;
    }else{
         cout<<"Your Input Was Not Numerical"<<endl;
         }
    return 0;
}

*/

/*

int main(){
    char input[50];
    cout<<"Enter Input: "<<endl;
    cin>>input;

    int opCount = 0;

    for(int i=0; input[i] !='\0';i++){
       if(input[i] == '+' || input[i] == '-' || input[i] == '*' || input[i] == '/' ||input[i] == '%' || input[i] == '='){
        opCount++;
        cout<<"Operator "<<opCount<<" : "<<input[i]<<endl;
        }
    }

    return 0;
}

*/


/*
int main(){
    char input[50];
    cout<<"Enter a line: ";
    cin>>input;

    if (input[0]=='/' && input[1]=='/'){
        cout<<"This is a Single Line Comment"<<endl;
    } else if (input[0]=='/' && input[1]=='*' || input[0]=='*' && input[1]=='/'){
        cout<<"This is a Multiple Line Comment"<<endl;
    } else {
        cout<<"No Comment Found."<<endl;
    }

    return 0;
}


*/




