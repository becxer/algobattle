	#include <stdio.h>

#define MOOK 0
#define ZZI 1
#define BBA 2

//*************
//use here for global variable
//don't remove comments
int JY = 0;
int you[1000] = {0,};

//*************

int logic(int turn, int other_last_hand){
//*************
//fill here and don't remove comments
int your_hand = MOOK;

if(JY == 0) {
  you[JY] = 2;
  JY++;
  return BBA;
}
you[JY] = other_last_hand;
//if(you[JY-1] you[JY]
JY++;
return other_last_hand;




//*************
return your_hand;
}


//this is simulator main for your testing
int main(void){
int n = 100;
while(n-->0){
logic(100-n, n%3);
}
return 0;
}

