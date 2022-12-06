f(x) = sinh(x/2)

set grid
set xrange [-10:10]
set yrange [-10:10]
plot f(x) title 'sinh(x/2)' lw 2 lt rgb "red"
replot s0(x) title 's0' lt rgb "blue"

