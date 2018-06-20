//Name:  Klodjan Hidri 
//AM:	 2726
//login  hidri@csd.uoc.gr
#include <string>
#include <ctime>
#include <iostream>
#include <sstream>
#include <algorithm>
#include <iterator>
#include <vector>
#include <regex>
using namespace std;
vector<string> strs;
string global;
string with;

#define PROGRAM_BEGIN 1;
#define PROGRAM_END   return 0;
#define WITH " "_with; 
#define MATCH(name) match(name);
#define START (*new A())
#define empt 	" "
#define GROUP 1
#define OPTIONAL 1
#define TIMES  A      

#define END  ;for(int i=0;i<strs.size();i++)\
	cout<<" \""<<strs[i]<<"\" ";cout<<"\n\n";\
	strs.clear();	
string nn;
#define CHAR(a) (*new A(#a))
#define TEXT(a) ((A(#a)))
#define REGEX(name) nn=#name; regex name(global);

//==================[DOT]===================
#define DOT  ({const char alphanum[] =\
"0123456789"\
"!@#$%^&*"\
"ABCDEFGHIJKLMNOPQRSTUVWXYZ"\
"abcdefghijklmnopqrstuvwxyz";\
 srand(time(0));\
int stringLength = sizeof(alphanum) - 1;\
	string v;\
	stringstream ss;\
	char tmp=alphanum[rand() % stringLength];\
	ss<<tmp;\
	ss>>v;\
	cout<<v;\
	strs.push_back(v);global+=".";\
	v;});
//=================DOT=======================

void match(regex r1);

