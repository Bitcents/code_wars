unsigned char wrap(int a)
{
   if(a>255) return 255;
   else if(a<0) return 0;
   else return a;
}

int rgb(int r, int g, int b, char *output)
{
   sprintf(output,"%02X%02X%02X\0",wrap(r),wrap(g),wrap(b));
   return 0; 
}