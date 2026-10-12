#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin,s);
    bool data[26];
    memset(data,false,sizeof(data));
    int len1 = s.size();
    for (int i = 0; i < len1; i++)
    {
        if(s[i]=='a') {
            data[0]=true;
        }
        else if(s[i]=='b'){
            data[1]=true;
        }
        else if(s[i]=='c'){
            data[2]=true;
        }
        else if(s[i]=='d'){
            data[3]=true;
        }
        else if(s[i]=='e'){
            data[4]=true;
        }
        else if(s[i]=='f'){
            data[5]=true;
        }
        else if(s[i]=='g'){
            data[6]=true;
        }
        else if(s[i]=='h'){
            data[7]=true;
        }
        else if(s[i]=='i'){
            data[8]=true;
        }
        else if(s[i]=='j'){
            data[9]=true;
        }
        else if(s[i]=='k'){
            data[10]=true;
        }
        else if(s[i]=='l'){
            data[11]=true;
        }
        else if(s[i]=='m'){
            data[12]=true;
        }
        else if(s[i]=='n'){
            data[13]=true;
        }
        else if(s[i]=='o'){
            data[14]=true;
        }
        else if(s[i]=='p'){
            data[15]=true;
        }
        else if(s[i]=='q'){
            data[16]=true;
        }
        else if(s[i]=='r'){
            data[17]=true;
        }
        else if(s[i]=='s'){
            data[18]=true;
        }
        else if(s[i]=='t'){
            data[19]=true;
        }
        else if(s[i]=='u'){
            data[20]=true;
        }
        else if(s[i]=='v'){
            data[21]=true;
        }
        else if(s[i]=='w'){
            data[22]=true;
        }
        else if(s[i]=='x'){
            data[23]=true;
        }
        else if(s[i]=='y'){
            data[24]=true;
        } 
        else if(s[i]=='z'){
            data[25]=true;
        }
    }
    string t = ""; 
    for (int i = 0; i < 26; i++)
    {
        if (data[i] == false)
        {
            if (i == 0) 
            {
                t.push_back('a');
            }
            else if (i == 1) 
            {
                t.push_back('b');
            }
            else if (i == 2) 
            {
                t.push_back('c');
            }
            else if (i == 3) 
            {
                t.push_back('d');
            }
            else if (i == 4) 
            {
                t.push_back('e');
            }
            else if (i == 5) 
            {
                t.push_back('f');
            }
            else if (i == 6) 
            {
                t.push_back('g');
            }
            else if (i == 7) 
            {
                t.push_back('h');
            }
            else if (i == 8) 
            {
                t.push_back('i');
            }
            else if (i == 9) 
            {
                t.push_back('j');
            }
            else if (i == 10) 
            {
                t.push_back('k');
            }
            else if (i == 11) 
            {
                t.push_back('l');
            }
            else if (i == 12) 
            {
                t.push_back('m');
            }
            else if (i == 13) 
            {
                t.push_back('n');
            }
            else if (i == 14) 
            {
                t.push_back('o');
            }
            else if (i == 15) 
            {
                t.push_back('p');
            }
            else if (i == 16) 
            {
                t.push_back('q');
            }
            else if (i == 17) 
            {
                t.push_back('r');
            }
            else if (i == 18) 
            {
                t.push_back('s');
            }
            else if (i == 19) 
            {
                t.push_back('t');
            }
            else if (i == 20) 
            {
                t.push_back('u');
            }
            else if (i == 21) 
            {
                t.push_back('v');
            }
            else if (i == 22) 
            {
                t.push_back('w');
            }
            else if (i == 23) 
            {
                t.push_back('x');
            }
            else if (i == 24) 
            {
                t.push_back('y');
            }
            else if (i == 25) 
            {
                t.push_back('z');
            }
        }
    }
    int len2 = t.size();
    if (t.empty()) 
    {
        cout << "None" << endl;
    }
    else
    {
        char p = t[0];
        for (int i = 0; i < len2; i++)
        {
            p = min(p, t[i]);
        }
        cout << p << endl;
    }
    return 0;
}