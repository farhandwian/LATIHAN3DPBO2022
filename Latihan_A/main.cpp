#include <bits/stdc++.h>
#include <string>

using namespace std;

#include "Processor.cpp"
#include "Disk.cpp"
#include "Ram.cpp"
#include "Pc.cpp"

int main()
{
    // buat objek 
    Processor objProc("core i 5", 12000320);
    Disk objDisk("SSD", "10000 TB", 12345);
    Ram objRam("1234 GB", 12345);

    int total = objProc.getPrice() + objDisk.getPrice() + objRam.getPrice(); // sum
    Pc computer(objProc, objDisk, objRam, total); //buat objek pc lalu pass objek sebelumnya sebagai argument
    computer.printComputer(); // print hasilnya

    return 0;
}
