void get_input(char str[], size_t sz) {
  if (fgets(str, sz, stdin)) {
    char *p;
    if ((p=strchr(str, '\n'))) { // Check if newline exists
      *p = 0;
    } else { // If no newline, the other chars that have not been read yet can be cleared.
      scanf("%*[^\n]");scanf("%*c"); // * means to discard scanned character.
      /*
      Alternative:
      int ch;
      while ((ch = fgetc(stdin)) != '\n' && ch != EOF);
      or while (((ch = getchar()) != EOF) && (ch != '\n'))
      */
    }
  }
  trim_newline(str);
}

void print_with_spaces(char *str) {
  if (!*str) {
    return;
  } else {
    putchar(*str++);
    while (*str) {
      putchar(' ');
      putchar(*str++);
    }
  }
}
