#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the timeConversion function below.
 */
string timeConversion(string s) {

	string sHour = s.substr(0,2);
	string ampm = s.substr(s.size()-2);
	string result = "";
	int iHour = stoi(sHour);

	if ("AM" == ampm) {
		if (12 == iHour)
			sHour = "00";
	} else{
		if (12 != iHour)
			iHour = iHour + 12;
		stringstream ss;
		ss << iHour;
		sHour = ss.str();
	}

	result += sHour;
	result += s.substr(2,6);

	return result;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
