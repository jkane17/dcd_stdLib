# DCD C Standard Library

An implementation of the C standard library.

<br />

## Make the static library file

Run the following within the `dcd_stdLib` directory.

```bash
make
```

This will generate a static library file *lib_dcd_stdLib.a* in the current directory.

Note that object (*".o"*) and dependency (*".d"*) files are generated within the `src` directory, but these can be removed following [Clean](#Clean).

<br />

## Linking to your own C programs (GCC)

When compiling your code you can link to the static library as follows

```bash
gcc mySrcFile.c -o myExFile -L path/to/lib_dcd_stdLib.a -l_dcd_stdLib 
```

<br />

## Clean

To remove the static library, as well as the object and dependency files, run the following within the `dcd_stdLib` directory.

```bash
make clean
```
