#include <bits/stdc++.h>
using namespace std;
class Cricketer {
    public:
    string country;
    int jersey_no;
    Cricketer(string country, int jersey_no){
        this->country = country;
        this->jersey_no = jersey_no;
    }
};
int main()
{
    Cricketer *dhoni = new Cricketer("India", 45);
    Cricketer *kohli = new Cricketer("Nepal", 34);

    // kohli->country = dhoni->country;
    // kohli->jersey_no = dhoni->jersey_no;

    *kohli = *dhoni;
    delete dhoni;

    // cout << "Dhoni " << dhoni->country << " " << dhoni->jersey_no << endl;
    cout << "Kohli " << kohli->country << " " << kohli->jersey_no << endl;
    return 0;
}