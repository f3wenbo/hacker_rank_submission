#include <bits/stdc++.h>

using namespace std;

// Complete the countingValleys function below.
int countingValleys(int n, string s) {

	if (s.empty()) return 0;

	int seaLevel = 0;
	int oldSeaLevel = 0;
	int countVally = 0;

	for( int i = 0; i < n; i++) {
		oldSeaLevel = seaLevel;
		if ( 0 == s.compare(i, 1, "U")) seaLevel++;
		else seaLevel--;

		if ((0 == s.compare(i, 1, "D")) && (0 == oldSeaLevel)) {
			countVally++;
		}

	}	
	return countVally;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string s;
    getline(cin, s);

    int result = countingValleys(n, s);

    fout << result << "\n";

    fout.close();

    return 0;
}
