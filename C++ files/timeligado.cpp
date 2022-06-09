#include <iostream>
#include <unistd.h>
using namespace std;

int main(){
	int i=0, s=0, m=0, h=0;

 while (i == 0){
 	 s = s + 1;
 	 sleep(1);
 	 if (s == 60){
 	 	m = m + 1;
 	 	s = 0;
	  }
	 if (m == 60){
	 	h = h + 1;
	 	m = 0;
	 }
 	cout << " "<< h <<":"<< m <<":"<< s << endl;
 }


return 0;
}
