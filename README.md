# p7zip android jni lib

# P7zip-Android(P7Zip安卓)

An Android compress and extract library, P7Zip port for Android

## Details

This project is for me to learn Streams, NDK, and for fun.

- More information: <http://p7zip.sourceforge.net/>
- P7zip Index: <http://www.7-zip.org/>
- P7zip Suport: <http://www.7-zip.org/support.html>
- Compiled native code with gradle-experimental
- Tested on android 4.x
- Supported common archive formats:
- Relative Java File:[P7zipUtils.java](java/com/kw/lib/p7zip/P7zipUtils.java)

  | Format | Creation | Filename Extensions | |:-------|:---------|:-----------------| | 7z | X | 7z | | BZIP2 | X | bz2 bzip2 tbz2 tbz | | GZIP | X | gz gzip tgz | | TAR | X | tar | | WIM | X | wim swm | | XZ | X | xz txz | | zip | X | zip zipx jar xpi odt ods docx xlsx epub |
