![logo](logo.png)
# Emerald
An OS written in C.<br/><br/>
The os is currently not functional since a lot of code still needs to be ported.
You are more than welcome to help porting the old code to this new and improved
project.

## Why is this better?
Well, there are many reasons for that, but one of the big ones is the makefile
and general project structure. The old project lacked any real consistency.
This "rewrite" uses recursive makefiles that are fully POSIX compliant, and
also support the `-j` option perfectly. The second reason is the that a lot of
the code just wasn't properly written, some header files miss guards, and
sometimes the header definition is just not implemented.

## Abb1x
This repo is a fork of [Abb1x/emerald](https://github.com/Abb1x/emerald), but
a lot of code has been changed.

## License
License of code is visible in the source code. My code is under
[BSD-2-Clause](./LICENSE).
