//
// Created by 刘健 on 2023/4/11.
//

#include "Solution12.h"
#include <iostream>
#include <map>
#include <sys/time.h>

using namespace std;

std::string GetTime(uint32_t timestamp)
{
    char now[64];
    time_t tt = timestamp;
    struct tm *ttime = localtime(&tt);
    strftime(now,64,"%Y-%m-%d %H:%M:%S",ttime);
    return now;
}

int main() {
    // todo
//    map<int, std::pair<int , string>> map_;
//    for (auto it : map_) {
//        cout << it.first << it.second.first
//    }
    cout << GetTime(1672984089) << endl;
    return 0;
}
