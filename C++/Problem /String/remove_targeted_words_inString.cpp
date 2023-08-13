#include <iostream>

using namespace std;

int main() {
    string mixedString = "BRFABCARFARARD";
    string targetWord = "ARF";
    string result;

    for (int i = 0; i < mixedString.length(); ++i)
    {
        bool isMatch = true;
        for (int j = 0; j < targetWord.length(); ++j)
        {
            if (mixedString[i + j] != targetWord[j])
            {
                isMatch = false;
                break;
            }
        }
        if (isMatch)
        {
            i += targetWord.length() - 1;
        }
        else
        {
            result += mixedString[i];
        }
    }

    cout << "Original String: " << mixedString << endl;
    cout << "Modified String: " << result << endl;

    return 0;
}
