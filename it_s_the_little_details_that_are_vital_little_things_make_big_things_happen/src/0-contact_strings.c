char *concat_strings(char *dest, const char *src){

  int i, j;
  int count = 0;

    for(i = 0; dest[i] != '\0'; i++){
      count++;
    }
    for(i = count, j = 0; src[j] != '\0'; i++, j++){
      dest[i] = src[j];
    }

    return dest;

}

/* this function concatenates two strings */
