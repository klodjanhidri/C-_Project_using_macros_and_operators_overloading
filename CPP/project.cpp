#include "project.hpp"

class A
{
   public:
	   string sstring;
	   int loop1,loop2;
      A() :sstring(" "){}
	  A(int a) :loop1(a){
		 string r, ww=strs.back();
		 for(int i=0;i<loop1;i++)
		 	r+=ww;
		
		 strs.pop_back();
		 strs.push_back(r);
		 global=r;
	}
	A(int a,int b) :loop1(a),loop2(b){
		  string r, tmp,ww=strs.back();
		  strs.pop_back();
		  tmp=ww;
		  for(int i=0;i<loop1;i++){
			 r+=ww;
			 	if(i==(loop1-2))
			  		strs.push_back(r);
		   } 
		  strs.push_back(r);
		  ww=strs[strs.size()-2];
		  strs.pop_back();
		  strs.pop_back();
		for(int j=loop1;j<=loop2;j++){
		 	 ww+=tmp;
			 strs.push_back(ww);
		}	  
	}
	A(string s):sstring(s){}
vector<string> &operator[](A aa){
	string v;
	sstring +="[";
	stringstream ss;
	for (int i=0; i<aa.sstring.length(); ++i){
		if(aa.sstring.at(i)!=' '){
		ss<<aa.sstring.at(i);
		ss>>v;
		sstring +=v;
		ss.clear();
		cout<<"\"" <<v<<"\"  ";
		strs.push_back(v);
		
		}
	}
	sstring+="]";
	return strs;
   	}
	   
	vector<string> &operator[](vector<string> s){
		sstring+="[";
		string v,aa;
		stringstream ss;
		for(int j=0;j<s.size();j++){
			aa=s[j];
			for (int i=0; i<aa.length(); ++i){
				if(aa.at(i)!=' '){
					ss<<aa.at(i);
					ss>>v;
					sstring +=v;
					ss.clear();
					strs.push_back(v);
				}
			}
		}
		sstring+="]";
		return strs;
     }
	 
	vector<string> operator+(A a){
		string k;
		for(int i=0;i<100;i++){
			k +=a.sstring;
			//strs.push_back(k);			
		}
		a.sstring+="+";
		global=a.sstring;
			return strs;
		}
	vector<string> operator*(A a){
		
		string k;
		//strs.push_back(empt);
		for(int i=1;i<100;i++){
			k +=a.sstring;
			//strs.push_back(k);			
		}    a.sstring+="*";
		global=a.sstring;

			return strs;
		}
friend vector<string> &operator|(A aa,A bb);
///////////////////////////////
//////FOR THE TEXT()///////////
///////////////////////////////	
vector<string> operator()(A a){
	string v,aa=a.sstring;
	stringstream ss;
	for (int i=0; i<aa.length(); ++i){
		if(aa.at(i)!=' '){
		ss<<aa.at(i);
		ss>>v;
		ss.clear();
		}
	}
	strs.push_back(a.sstring);
	global=a.sstring;
	return strs;
 	}		
}; 
 
 
vector<string> operator-(A aa,A bb){
		char a,b;
		string v,v1;
		stringstream ss;
		a=aa.sstring.at(0);
		b=bb.sstring.at(0);
		int first,sec,ascii;
		first=(int)a;
		sec=(int)b;
		for(int i=first;i<=sec;i++){
				a=(char)i;
				ss<<a;
				ss>>v;
				v1+=v;
				strs.push_back(v);
				ss.clear();
		 } 
		 global=v1;
	 return strs;
}
 
 vector<string> &operator|(A aa,A bb){
	strs.push_back(aa.sstring);
	strs.push_back(bb.sstring);
	string v;v+=aa.sstring;
	v+="|";
	v+=bb.sstring;
	global=v;
	return strs;
}

void match(regex r1){
	stringstream ss;
	string v,tmp;
	for (int i=0; i<with.length(); ++i){
		if(with.at(i)!=' '){
			ss<<with.at(i);
			ss>>v;
		 	tmp+=v;
			ss.clear();
		}
	}	
	if (std::regex_match (tmp,r1))
		cout <<"//prints:regular expression "<<nn<<" matches  "<<"\""<<tmp<<"\"\n";
	else
 		cout <<"//prints:regular expression "<<nn<<" does not matches "<<"\""<<tmp<<"\"\n";
}

void operator"" _with(char const * a,size_t const size){
		string s=*new string(a,a+size);
	 	with=s;
}
		
vector<string> operator+(string a){
		
		return strs;
 }
 vector<string> operator*(string a){
		
		return strs;
 }



 int main(){
PROGRAM_BEGIN
	START;CHAR(a)-CHAR(d)END
	START TEXT(ss);
	START TEXT(hidri); DOT END
	START CHAR(q) END
	START [TEXT(xyz)]END
	START [CHAR(a)-CHAR(c)] END
	START [TEXT(a)]END
	START [TEXT(qwe)]END
	START TEXT(qwerty); TEXT(zzz) END
	START CHAR(q) END
	START *TEXT(a) END
	START +TEXT(a) END	
	START; CHAR(a)-CHAR(e)END
	START  [TEXT(qwerty)] END
	START TEXT(s); TIMES{3,5}END
	START TEXT(s); TIMES{3} END
    START [TEXT(a)|TEXT(b)]END
	TEXT(a)|TEXT(b)END
 
	START TEXT(a) END REGEX(r1)
 	"a" WITH MATCH(r1)
	"aa" WITH MATCH(r1)

	START *TEXT(ab) END REGEX(r2)  
	"abc" WITH MATCH(r2)
	"abb" WITH MATCH(r2)
PROGRAM_END
}





 
 
