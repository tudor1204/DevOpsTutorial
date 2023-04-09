mkdir build_cmd
cd build_cmd
cmake ../
cmake --build .
cd ./main
./main
cd ../test/
./rectangle-test
pause
