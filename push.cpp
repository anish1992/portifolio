#include<iostream>
#include<fstream>
using namespace std;

int main(void)  {
	system("scp /Applications/XAMPP/xamppfiles/htdocs/anish/images/* anish@unixlab.sfsu.edu:/unixlab/anish/public_html/images/");
	system("scp /Applications/XAMPP/xamppfiles/htdocs/anish/css/* anish@unixlab.sfsu.edu:/unixlab/anish/public_html/css/");
	system("scp /Applications/XAMPP/xamppfiles/htdocs/anish/* anish@unixlab.sfsu.edu:/unixlab/anish/public_html/");
    return 0;
}