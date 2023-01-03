set grid 
set xrange [-10:10]
set yrange [-10:10]
set size ratio -1
set key right bottom
set title "Derivative" 
plot   "derivative.dat" every ::1 using 1:3  w l lt 7 title "analytical formula sinh(x/2)"
replot "derivative.dat" every ::1 using 1:5  w l lt 6 title "analytical formula (cosh(x/2))/2" 
replot "derivative.dat" every ::1 using 1:7  w l lt 4 title "finite difference  (sinh(x/2))'" 
replot "derivative.dat" every ::1 using 1:9  w l lt 2 title "analytical formula (sinh(x/2))/4" 
replot "derivative.dat" every ::1 using 1:11 w l lt 1 title "finite differnece  (sinh(x/2))''" 


