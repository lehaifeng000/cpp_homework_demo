rm -r bin
rm -r build
cmake -B build .
cd build
make
cd ..
./bin/hello
