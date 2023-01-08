set yrange [0:5]

set title "Charecter frequency for \"ReinisValtersKobitjevs\""
set xlabel "Charecter"
set ylabel "Frequency"


set style data histograms
plot 'Mode.dat' using 2:xtic(1)
