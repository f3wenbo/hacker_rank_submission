#include <bits/stdc++.h>

using namespace std;

// Complete the repeatedString function below.
long repeatedString(string s, long n) {

	if(s.empty()) return 0;
	else if ("a" == s) return n;

	long countA = 0;
	long quotient = n / s.size();
	long remainder = n % s.size();
	for ( int i = 0; i < s.size(); i++ ) {
		if (0 == s.compare(i, 1, "a")) countA++;
	}
	countA = countA * quotient;
	if (0 != remainder){
		for(int i = 0; i < remainder; i++) {
			if (0 == s.compare(i, 1, "a")) countA++;
		}
	}
	return countA;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    long n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    long result = repeatedString(s, n);

    fout << result << "\n";

    fout.close();

    return 0;
}
