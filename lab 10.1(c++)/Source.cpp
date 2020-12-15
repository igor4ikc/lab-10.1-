#include <iostream>
#include <fstream>

using namespace std;

bool Find(fstream& h);
bool Find(fstream& h) {
    char p = 0;
    char f;
    while (h >> f) {
        if (f == 'A' && f == 'G' && f == 'A') return true;
        if (f == 'O' && f == 'G' && f == 'O') return true;
        p = f;
    }
    return false;
}
int main() {
    fstream h("t.txt");
    if (!h) {
        cerr << "file \"t.txt\" not found" << endl;
        return 1;
    }

    bool found = Find(h);
    if (found) {
        cout << "'AGA' or 'OGO' found successfully" << endl;
    }
    else {
        cout << "'AGA' or 'OGO' NOT found" << endl;
    }

    h.close();

    return 0;
}