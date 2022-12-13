f(x) = sinh(x/2)

set grid
set xrange [-10:10]
set yrange [-10:10]	
set arrow from 1,-10 to 1,10 lt 6 dt 2 nohead
set arrow from 5,-10 to 5,10 lt 6 dt 2 nohead

plot f(x) title 'sinh(x/2)' lw 2 lt rgb "red"
replot [1:5] f(x) with filledcurves above y1=0.0
