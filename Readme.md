# SinC Example

This small example show how calculate SinC using a recursive function

## Compile

A Makefile provided to compile these source tree using GCC, just run in command line

```sh
make -$j(nproc) all
```

This example only need standard GNU LibC and NCurses without additional libraries requirements

If compilation succeded, you can run:

```sh
./main
```

### Tips

if your editor runs Clangd or Clang-Tidy for analyzer, you can generate **compile_commands.json** using command like:

```sh
bear -- make -j$(nproc)
```
