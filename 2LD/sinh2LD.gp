f(x) = sinh(x/2)
g(x) = 0 
set grid
set xrange [-10:10]
set yrange [-10:10]
set object circle at 0,0 size scr 0.005 lw 5 fc rgb"red"
plot f(x) title 'sinh(x/2)' lw 2 lt rgb "blue"
replot g(x) title '0x' lt rgb "black"
