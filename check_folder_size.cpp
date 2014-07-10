#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

long max_size = 6000000;

int main(int argc, char* argv[]){
        long size;
        if (argc > 1) max_size = strtol(argv[1], 0, 0);
        cin >> size;
        if (size > max_size) exit(1);
        else exit(0);

}
