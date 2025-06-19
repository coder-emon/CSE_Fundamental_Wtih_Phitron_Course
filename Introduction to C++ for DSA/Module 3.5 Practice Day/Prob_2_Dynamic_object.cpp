#include <bits/stdc++.h>
using namespace std;

class Cricketer {
    public:
    int jersey_no;
    string country;
};

int main()
{

    Cricketer * dhoni = new Cricketer;
    dhoni->jersey_no = 5;
    dhoni->country = "Bangladesh";
    
  
    Cricketer * kohli = new Cricketer;
    kohli->jersey_no = dhoni->jersey_no;
    kohli->country = dhoni->country;
    delete dhoni;
    cout << "Dhoni " <<  dhoni->jersey_no << " " <<dhoni->country  << endl;
    cout << "Kohli " <<  kohli->jersey_no << " " << kohli->country  << endl;
    return 0;
}