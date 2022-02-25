#include <stdio.h>

int main() {
  int predel = 26; //  predel do kakoi bykvi / cifri wifrovat. (+1) tk 0 nam nyzhen
  int k,a,b,c,d; //  k - key
  int output_ak;
  int output_bk;
  int output_ck;
  int output_dk;
  scanf("%d%d%d%d%d", &k, &a, &b, &c, &d);
  int res_ak = a + k;
  int res_bk = b + k;
  int res_ck = c + k;
  int res_dk = d + k;

  if (res_ak > predel) {
      output_ak = res_ak % predel;
      printf("%d ", output_ak);
  } else {
      printf("%d ", res_ak);
  }
  if (res_bk > predel) {
      output_bk = res_bk % predel;
      printf("%d ", output_bk);
  } else {
      printf("%d ", res_bk);
  }
  if (res_ck > predel) {
      output_ck = res_ck % predel;
      printf("%d ", output_ck);
  } else {
      printf("%d ", res_ck);
  }
  if (res_dk > predel) {
      output_dk = res_dk % predel;
      printf("%d ", output_dk);
  } else {
      printf("%d ", res_dk);
  }

  return 0;
}
