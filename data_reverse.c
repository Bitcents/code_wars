#include <stddef.h>

/* Do not allocate any memory but just use rdata and return it back */

unsigned char *data_reverse(unsigned char *rdata, const unsigned char *data, size_t nblk)
{    
  for(size_t i=0; i<nblk; i++){
    for(size_t j=0; j<8; j++){
      rdata[(nblk-i-1)*8 + j] = data[(i)*8 + j];
    }
  }
  return rdata;
}