#include <iostream>
#include <iterator>
using namespace std;

template <class T1, class T2>
struct AutoMap {
	T1 key;
	T2 value;
	int index;
};

template <class T1, class T2>
class Map
{
	T1 keys[100];
	T2 values[100];
	int count = 0;

	typedef AutoMap<T1, T2>* iterator;
public:

	T2& operator[](T1 key) {
		int index = -1;

		// cautam existenta indexului
		for (int i = 0; i < this->count; i++) {
			if (this->keys[i] == key) {
				index = i;
				break;
			}
		}

		if (index == -1) {
			index = this->count;

			this->count++;
			this->keys[index] = key;
			this->values[index] = NULL;
		}

		return this->values[index];
	}

	/*iterator begin() {
		AutoMap<T1, T2>* start = new AutoMap<T1,T2>;

		start->index = 0;
		start->value = this->values[start->index];
		start->key = this->keys[start->index];

		return start;
	}*/

	/*iterator end() {
		AutoMap<T1, T2>* end = new AutoMap<T1, T2>;

		end->index = this->count - 1;
		end->value = this->values[end->index];
		end->key = this->keys[end->index];

		return end;
	}*/


	void Set(T1 key, T2 value)
	{
		operator[](key) = value;
	}


	int Count() {
		return this->count;
	}

	bool Delete(const T1& key) {
		int index = -1;
		for (int i = 0; i < this->count; i++) {
			if (this->keys[i] == key) {
				index = i;
				break;
			}
		}

		if (index == -1)
			return false;

		this->values[index] = nullptr;
		this->keys[index] = NULL;
		this->count--;

	}

	void Clear()
	{
		for (int i = 0; i <= this->count + 1; i++) {
			Delete(this->keys[i]);
		}

	}

	bool Get(const T1& key, T2& value) {
		int index = -1;
		for (int i = 0; i < this->count; i++) {
			if (this->keys[i] == key) {
				index = i;
				break;
			}
		}

		if (index == -1)
			return false;

		value = this->values[index];
		return true;
	}

};



int main()
{

	Map<int, const char*> m;
	m[10] = "C++";
	m[20] = "test";
	m[30] = "Poo";

	//for (auto [key, value, index] : m) {
	//	printf("Index:%d, Key=%d, Value=%s\n", index, key, value);
	//}
	//cout << m[10] << endl << m[20] << endl << m[30] << endl << m[40];

	const char* value;
	m.Get(20, value);

	cout << value << endl;
	//cout << m[10];



	m[40] = "meree";
	m.Clear();
	m.Set(50, "lalala");
	cout << m[50];


	return 0;
}