# DANIX
Danix is a small kernel written in C and C++ which includes a small built in std library.

The point of this project is to experiment with kernel and library design.


# Compiling Danix from source

```bash
git clone https://github.com/McSwaggens/danix/
cd danix
./build.sh
```

# How to boot danix using qemu

```bash
qemu-system-x86_64 -kernel kernel
```

# Sources used

http://wiki.osdev.org

http://www.osdever.net

`cstd` functions are gathered from multiple sources including the GNU FSF's `cstdlib` and others which are given credit.



# License

GNU GPL v3
