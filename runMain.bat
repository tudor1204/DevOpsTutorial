mkdir build_cmd
cd build_cmd
cmake ../
cmake --build .
cd main/Debug
main
cd ../../test/Debug
rectangle-test
pause