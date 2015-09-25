#include <bitset>
#include <vector>
#include <string>
using namespace std;

enum FieldType {TYPE_N, TYPE_AN, TYPE_ANS, LLVAR, LLLVAR}; 
typedef unsigned char BYTE;

class iso8583Field
{
	FieldType type;
	int length;
	string value;			
};

class iso8583Trans
{
public:
	BYTE tpdu[5];
	BYTE header[6];
	bitset<64> primaryBitmap;

	vector<iso8583Field> fields(64);
public:
	iso8583Trans();
	setField(int num, string value);
};




