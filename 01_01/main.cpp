#include <iostream>
#include <list>
using namespace std;

int main()
{

    list<string> stations = {
        "Tokyo", "Kanda", "Akihabara", "Okachimachi", "Ueno",
        "Uguisudani", "Nippori", "Tabata", "Komagome",
        "Sugamo", "Otsuka", "Ikebukuro", "Mejiro", "Takadanobaba",
        "Shin-Okubo", "Shinjuku", "Yoyogi", "Harajuku", "Shibuya",
        "Ebisu", "Meguro", "Gotanda", "Osaki", "Shinagawa",
        "Tamachi", "Hamamatsucho", "Shimbashi", "Yurakucho"
    };

    cout << "1970年" << endl;
    for (const auto& s : stations) {
        cout << s << endl;
    }

    cout << "=============================" << endl;
    cout << "2019年" << endl;

    for (list<string>::iterator itr = stations.begin(); itr != stations.end(); ++itr) {
        if (*itr == "Tabata") {

            itr = stations.insert(itr, "Nishi-Nippori");
            ++itr;
        }
    }

    for (const auto& s : stations) {
        cout << s << endl;
    }

    cout << "=============================" << endl;
    cout << "2022年" << endl;
    for (list<string>::iterator itr = stations.begin(); itr != stations.end(); ++itr) {
        if (*itr == "Tamachi") {
            itr = stations.insert(itr, "Takanawa GateWay");
            ++itr;
        }
    }

    for (const auto& s : stations) {
        cout << s << endl;
    }
    return 0;
}