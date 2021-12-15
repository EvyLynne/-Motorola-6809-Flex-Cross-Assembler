#define NLABELS 2048 // line 46 of source
#define MAXIDLEN 16
#define MAXLISTBYTES 7
#define FNLEN 30
#define LINELEN 128

#define EXITEVAL {srcptr--;return t;} // line 419 of source

#define RESOLVECAT if((oldcat&15)==0)oldcat=0;\ // line 421 of source
           if((exprcat&15)==0)exprcat=0;\
           if((exprcat==2&&oldcat==34)||(exprcat==34&&oldcat==2)) {\
             exprcat=0;\
             oldcat=0;}\
           exprcat|=oldcat;\  
/* resolve such cases as constant added to address or difference between
   two addresses in same module */

#define RESTORE {srcptr=oldsrcptr;c=*srcptr;goto dodefault;} // line 624 of source
