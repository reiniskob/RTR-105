f(x) = sinh(x/2)
f(a0) = x/2
s0(x) = f(a0)
f(a1) = (f(a0)*x**2)/(4*(2*1)*(1*2+1))
s1(x) = s0(x) + f(a1)
f(a2) = (f(a1)*x**2)/(4*(2*1)*(1*2+1))
s2(x) = s1(x) + (s1(x)*x**2)/(4*(2*2)*(2*2+1)) 
s3(x) = s2(x) + (s2(x)*x**2)/(4*(2*3)*(3*2+1)) 
s4(x) = s3(x) + (s3(x)*x**2)/(4*(2*4)*(4*2+1)) 

set grid
set xrange [-1:1]
set yrange [-1:1]
plot f(x) title 'sinh(x/2)' lw 2 lt rgb "red"
replot s0(x) title 's0' lt rgb "blue"
replot s1(x) title 's1' lt rgb "green"
replot s2(x) title 's2' lt rgb "yellow" 
replot s3(x) title 's3' lt rgb "orange"
replot s4(x) title 's4' lt rgb "purple"
