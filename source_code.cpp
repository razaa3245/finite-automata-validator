#include <iostream>
#include <fstream>
#include <string>

using namespace std;

bool isAccepted(const string& str) {
    enum State { START, ED, EE, F, D, DD, DDD, ACCEPT } state = START;
    size_t i = 0;

    while (i < str.length()) {
        char ch = str[i];

        switch (state) {
            case START:
                if (ch == 'e') {
                    if (i + 1 < str.length() && str[i + 1] == 'd') {
                        state = ED;
                        i++;
                    } else if (i + 1 < str.length() && str[i + 1] == 'e') {
                        state = EE;
                        i++;
                    } else {
                        return false;
                    }
                } else if (ch == 'f') {
                    state = F;
                } else {
                    return false;
                }
                break;

            case ED:
            case EE:
                if (i == str.length() - 1) {
                    state = ACCEPT;
                } else {
                    return false;
                }
                break;

            case F:
                if (ch == 'd') {
                    state = D;
                } else {
                    return false;
                }
                break;

            case D:
                if (ch == 'd') {
                    state = DD;
                } else {
                    state = ACCEPT;
                }
                break;

            case DD:
                if (ch == 'd') {
                    state = DDD;
                } else {
                    state = ACCEPT;
                }
                break;

            case DDD:
                if (ch == 'd') {
                    state = D;
                } else {
                    state = ACCEPT;
                }
                break;

            case ACCEPT:
                return false;
        }
        i++;
    }

    return state == ED || state == EE || state == F || state == D || state == DD || state == DDD || state == ACCEPT;
}

int main() {
    ifstream inputFile("input.txt");
    if (!inputFile) {
        cerr << "Error: Could not open the file." << endl;
        return 1;
    }

    string input;
    while (getline(inputFile, input)) {
        cout << input << ": " << (isAccepted(input) ? "Accepted" : "Not Accepted") << "\n";
    }

    inputFile.close();
    return 0;
}
