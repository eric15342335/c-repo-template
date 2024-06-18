# C/C++ Repo Template

1. [GNU Make](#gnu-make)
2. [CMake](#cmake)
3. [Misc](#misc)

## GNU Make

```bash
make
```

## CMake

```bash
cmake -B build -S .
cmake --build build
cmake --install build --prefix .
```

## Misc

* [Continuous Integration](./.github/workflows/ci.yml)
* [Git Ignore Files](./.gitignore)
* [Clang Format](.clang-format)
  * `clang-format src/*.c include/*.h -i`
