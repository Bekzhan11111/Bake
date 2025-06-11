#include <iostream>
#include <string>
using namespace std;

int main() {
    string text;
    getline(cin, text);
    cout << "Length: " << text.length() << endl;
    return 0;
}


/*#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string word;
    cin >> word;
    reverse(word.begin(), word.end());
    cout << "Reversed: " << word << endl;
    return 0;
}
*/