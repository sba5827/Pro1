#include"main.hpp"

using namespace std;

int main(int argc, char* args[])
{
    for(int i = 0; i < argc; ++i){
        cout << i << ": " << args[i] << endl;
    }
    return 0;
}
