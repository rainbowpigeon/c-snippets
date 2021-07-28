void trim_newline(char str[]) {
  str[strcspn(str, "\r\n")] = 0;
}

void truncate_str(char str[], int max_size) {
  size_t len = strlen(str);
  if (len >= max_size) {
    str[max_size-1] = 0;
  }
}

void convert_lu_to_char(unsigned long lu, char str[]) {
  const int n = snprintf(NULL, 0, "%lu", lu);
  snprintf(str, n+1, "%lu", lu);
}
