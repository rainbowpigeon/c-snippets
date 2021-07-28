# cpp-snippets
C/C++ Code Snippets

Check out my site at https://rainbowpigeon.netlify.app!

## Files

### `files.c`

| Function       | Description                                         |
|----------------|-----------------------------------------------------|
| `close_all`    | Calls `fclose` on a variable number of `FILE *`s    |
| `copy_to_file` | Uses `fread` and `fwrite` to copy file contents     |
| `fsize`        | Uses `fseek`, `ftell`, `rewind` to return file size |

## Strings

### `strings.c`

| Function             | Description                                                         |
|----------------------|---------------------------------------------------------------------|
| `trim_newline`       | Uses `strcspn` to trim `\r\n` or `\n` from string                   |
| `truncate_str`       | Truncates string to `max_size` length which includes null terminator|
| `convert_lu_to_char` | Uses `snprintf` to convert `lu` to `char []`                        |

## IO

### `io.c`

| Function             | Description                                                      |
|----------------------|------------------------------------------------------------------|
| `get_input`          | Uses `fgets` and `scanf` to get input from `stdin`               |
| `print_with_spaces`  | Uses `putchar` to print `char`s in string with spaces in between |
