unsigned long fsize(FILE *f) {
  fseek(f, 0, SEEK_END);
  unsigned long f_sz = ftell(f);
  rewind(f);
  return f_sz;
}

void close_all(int n, ...) {
  va_list files;
  va_start(files, n);
  for (int i=0; i < n; i++) {
      fclose(va_arg(files, FILE *));
  }
  va_end(files);
}

int copy_to_file(FILE *rf, FILE *wf) {
  // rf is file to be read, while wf is file to be written to.
  unsigned long rf_sz = fsize(rf);
  if (rf_sz < BUFFERSIZE) {
    char *buffer = (char *)malloc(rf_sz*sizeof(char));
    if (buffer == NULL) {
      printf("Out of memory.\n");
      return 1;
    } else {
      fread(buffer, rf_sz, 1, rf);
      fwrite(buffer, rf_sz, 1, wf);
      free(buffer);
    }
  } else {
    char buffer[BUFFERSIZE];
    size_t bytes_read = 0;
    while ((bytes_read = fread(buffer, 1, sizeof(buffer), rf))> 0) {
      fwrite(buffer, sizeof(buffer), 1, wf);
    }
  }
  return 0;
}