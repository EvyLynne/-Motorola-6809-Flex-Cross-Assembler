


int main(int argc,char *argv[])
{
 char c;
 getoptions(argc,argv);
 pass=1;
 errors=0;
 generating=0;
 terminate=0;
 processfile(srcname);
 if(errors) {
  fprintf(stderr,"%d Pass 1 Errors, Continue?",errors);
  c=getchar();
  if(c=='n'||c=='N') exit(3);
 }
 pass=2;
 loccounter=0;
 errors=0;
 generating=0;
 terminate=0;
 if(listing&&((listfile=fopen(listname,"w"))==0)) {
  fprintf(stderr,"Cannot open list file");
  exit(4);
 }

 if (outmode == 0) {
  /* open Binary output file */
  if((objfile=fopen(objname,"wb"))==0) {
   fprintf(stderr,"Cannot write object file\n");
   exit(4);
  }
 } else {
  /* open Hex output file */
  if((objfile=fopen(objname,"w"))==0) {
   fprintf(stderr,"Cannot write object file\n");
   exit(4);
  }
 }

 processfile(srcname);

 if(errors) {
  fprintf(stderr,"%d Pass2 errors.\n",errors);
 }

 if(listing) {
  if(errors) {
   fprintf(listfile,"%d Pass 2 errors.\n",errors);
  }
  outsymtable();
  fclose(listfile);
 }
 if(outmode == 1){
  flushhex();
  fprintf(objfile,"S9030000FC\n");
 }
 if(outmode == 2){
  flushihex();
  fprintf(objfile, ":00000001FF\n");
 }

 fclose(objfile);
}
