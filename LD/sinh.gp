f(x) = sinh(x/2)
s0(x) = x/2
s1(x) = s0(x) + (x/2*x**2)/(4*(2*1)*(1*2+1)) 
s2(x) = s1(x) + (x/2*x**2)/(4*(2*2)*(2*2+1)) 
s3(x) = s2(x) + (x/2*x**2)/(4*(2*3)*(3*2+1)) 
s4(x) = s3(x) + (x/2*x**2)/(4*(2*4)*(4*2+1)) 

set grid
set xrange [-10:10]
set yrange [-10:10]
plot f(x) title 'sinh(x/2)' lw 2 lt rgb "red"
replot s0(x) title 's0' lt rgb "blue"
replot s1(x) title 's1' lt rgb "green"
replot s2(x) title 's2' lt rgb "yellow" 
replot s3(x) title 's3' lt rgb "orange"
replot s4(x) title 's4' lt rgb "purple"
