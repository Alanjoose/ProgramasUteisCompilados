/*
    @Author: Alan JS;
    @Repo: ProgramasUteisCompilados;
    @Language: C++;
*/
#include <chrono>
#include <iostream>
#include <iomanip>

using namespace std;
using namespace std::chrono;

int main()
{
    auto now = system_clock::now();
    time_t timeNow = system_clock::to_time_t(now);
    cout << "Atual time : " << put_time(localtime(&timeNow), "%c") << endl;
    //Recommended to use endl to prevent the output from concatenating with the terminal;
    return 0;
}