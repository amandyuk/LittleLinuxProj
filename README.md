# Description

This is quite si,ple program for practicing using autotools.

## Installation

Use autotools to install program:

```bash
aclocal
autoconf
automake --add-missing
./configure
make
make install
```

For sharing you can also use:
```bash
make distcheck
```

# Removing and uninstalling:

```bash
make clean-all
```
