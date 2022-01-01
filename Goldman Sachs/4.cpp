string encode(string src)
{     
  string res="";
  res+=src[0];
  int i=1,t=1;
  while(i<src.size()){
      if(src[i-1]==src[i]){
          t++;
      }
      else{
          res+=to_string(t);
          t=1;
          res+=src[i];
      }
      i++;
  }
  res+=to_string(t);
  return res;
}     
 
