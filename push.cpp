#include<iostream>
#include<fstream>
#include<string>
using namespace std;

char *AddStr(string a, string b, string c);

int main(void)  {
    
    string serve, quarry;
    cout<< "Enter server <username@server>"<<endl;
    cin>>serve;
    cout<< "what would tou like to push\n[0] - images [1] - css [2] - index"<<endl;
    cin>>quarry;
    
    if (quarry[0] == 'y')   {
        cout<<"pushing to server - "<< serve <<endl;
        system(AddStr("scp /Applications/XAMPP/xamppfiles/htdocs/anish/images/* ",serve,":/unixlab/anish/public_html/images/"));
    }
    if (quarry[1] == 'y')   {
        cout<<"pushing to server - "<< serve <<endl;
        system(AddStr("scp /Applications/XAMPP/xamppfiles/htdocs/anish/css/* ",serve,":/unixlab/anish/public_html/css/"));
    }
    if (quarry[2] == 'y')   {
        cout<<"pushing to server - "<< serve <<endl;
        system(AddStr("scp /Applications/XAMPP/xamppfiles/htdocs/anish/* ",serve,":/unixlab/anish/public_html/"));
    }
		
    return 0;
}

char *AddStr(string a, string b, string c) {
    
    int i=0,j=0,k=0;
    static char buffer[100];// pointer buffer
    char *p = buffer;
    while(a[i] != '\0')*p++ = a[i++];  // copy
    while(b[j] != '\0')*p++ = b[j++];  // append
    while(c[k] != '\0')*p++ = c[k++];  // append
    return buffer;
    
}
