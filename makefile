graficas : graficas.py data.dat data1.dat  Euler.x
	python graficas.py
    
data1.dat : Euler.x
	./Euler.x 10 > data1.dat
    
Euler.x : Euler.cpp
	c++ Euler.cpp -o Euler.x
    
data.dat : Rk.x
	./Rk.x 0 > data.dat
Rk.x : Rk.cpp
	c++ Rk.cpp -o Rk.x
    
clean :
	rm -r *.x *.dat *.png