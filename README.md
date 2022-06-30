# cpprun

A utility program to run c++ code with an easier method

Instead of `g++ input.cpp -o output.exe` then `./output.exe`.

Just run `cpprun input.cpp`.

It will produce the exe with the same name (for example `name.exe` for `name.cpp`) and run the produced `.exe`

To run it globally just add the path of the `cpprun.exe` file to your environment variable.

You need to have mingw installed on your system as this program uses it behind the curtains.
