# Making C++ talk to other languages with SWIG (Supporting Repo)

This repository can be used as a reference when reading through the blog post "Making C++ talk to other languages with SWIG".

## Requirements
- MacOS 10.14
- CMake 3.14
- SWIG
- Python 3.7

## Build

```
mkdir build && cd build
cmake ..
make
```

## Run
Run the python shell.
```
python3
```
Example usage of the family module.
```
>>> parent = family.Parent()
>>> child = familty.Child(10)
>>> child = family.Child(10)
>>> parent.addChild(child)
>>> print(parent.getChildren()[0].getSizeOfHead())
10.0
```
