//coded by github.com/dev7060
#include <iostream>
#include <string>
using namespace std;

int main(int argc, char **argv)
{
    unsigned long int beg, fin;
    char *temp;
    beg = strtoul(argv[1],&temp, 10);
    fin = strtoul(argv[2],&temp, 10);
    unsigned long int user=beg;
    string url;
    string cmd;
    for( ; user<=fin; user++){
        url = "https://avatars0.githubusercontent.com/u/";
        url = url + to_string(user);
        cmd = "curl " + url + " --output " + to_string(user) + ".jpg";
        cout<<"user "<<user<<"\n";
        system(cmd.c_str());
        cout<<"\n";
    }
    return 0;
}
