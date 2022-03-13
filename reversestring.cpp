void reverse(char *begin, char *end)
{
    char temp;
    while (begin < end)
    {
    temp = *begin;
    *begin++ = *end;
    *end--= temp;
    }
}

/*Function to reverse words*/
void reverseWords(char *s)
{
  char *word_begin= s;
  char *temp = s; /* temp is for word boundry*/
  /*STEP 1 of the above algorithm */
  while( *temp )
  {
      temp++;
      if (*temp == '\0')
      {
      reverse(word_begin, temp-1);
      }
      else if(*temp == ' ')
      {
      reverse(word_begin, temp-1);
      word_begin= temp+1;
      }
  } /* End of while */
  reverse(s, temp-1);
}
