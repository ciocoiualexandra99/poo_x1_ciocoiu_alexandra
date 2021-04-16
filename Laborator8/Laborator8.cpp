#include <iostream>
#include <fstream>
#include <string>
#include <map>
#include <locale>
#include <vector>
#include <queue>					
using namespace std;

class Compare
{
public:
	bool operator()(pair<string, int>n1, pair<string, int>n2) {

		if (n1.second == n2.second)
		{
			if (n1.first.compare(n2.first) > 0)
				return true;
			return false;
		}
		return n1.second < n2.second;

	}
};

int main()
{
	map<string, int> myMap;
	ifstream file("file.txt");
	string sentence;
	getline(file, sentence);

	string const delimiter{ " .,?!" };
	size_t begin, pos = 0;

	while ((begin = sentence.find_first_not_of(delimiter, pos)) != string::npos)
	{
		pos = sentence.find_first_of(delimiter, begin + 1);
		string word = sentence.substr(begin, pos - begin);
		for (size_t i = 0; i < word.size(); ++i)
		{
			char character = tolower(word[i]);
			word[i] = character;
		}

		myMap[word]++;

	}

	priority_queue<pair<string, int>, vector<pair<string, int>>, Compare> q;

	for (const auto& word : myMap)

		q.push(word);


	while (!q.empty())
	{
		cout << q.top().first << " -> " << q.top().second << endl;
		q.pop();
	}

}