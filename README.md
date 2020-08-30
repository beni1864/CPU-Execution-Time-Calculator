# CPU-Execution-Time-Calculator

This calculator...  

- Takes in a list of CPUs and their characteristics (Name, Clock Cycles per Instruction, Clock Rate, Price)  

- Sorts the list by smallest-largest CPU Time  

- Prompts the user for the largest CPU Time they can tolerate  

- Returns the cheapest processor that falls in user's performance range
#
Example:

Please enter the number of processors [1 to 10]:

10

Processor Name (no spaces):
i7-1065G7
Processor cost (US dollars):
499.00
Processor clock rate (in GHz):
3.6
Processor average CPI:
2.0
Processor Name (no spaces):
i7-1060G7
Processor cost (US dollars):
385.00
Processor clock rate (in GHz):
3.6
Processor average CPI:
7.0
Processor Name (no spaces):
i7-10710U
Processor cost (US dollars):
263.00
Processor clock rate (in GHz):
3.7
Processor average CPI:
5.0
3
Processor Name (no spaces):
i7-10510U
Processor cost (US dollars):
149.00
Processor clock rate (in GHz):
2.9
Processor average CPI:
6.0
Processor Name (no spaces):
i7-10510Y
Processor cost (US dollars):
159.00
Processor clock rate (in GHz):
4.0
Processor average CPI:
1.0
Processor Name (no spaces):
i7-8700K
Processor cost (US dollars):
359.00
Processor clock rate (in GHz):
3.7
Processor average CPI:
5.0
Processor Name (no spaces):
i7-8086K
Processor cost (US dollars):
425.00
Processor clock rate (in GHz):
4.0
Processor average CPI:
4.0
Processor Name (no spaces):
i5-8600K
Processor cost (US dollars):
257.00
Processor clock rate (in GHz):
3.6
Processor average CPI:
8.0
4
Processor Name (no spaces):
i5-8400
Processor cost (US dollars):
182.00
Processor clock rate (in GHz):
2.8
Processor average CPI:
3.0
Processor Name (no spaces):
i3-8100
Processor cost (US dollars):
116.00
Processor clock rate (in GHz):
3.6
Processor average CPI:
7.0
Now ranking execution times... from lowest to highest execution time, your results are:
i7-10510Y: 0.0025
i7-1065G7: 0.0056
i7-8086K: 0.0100
i5-8400: 0.0107
i7-10710U: 0.0135
i7-8700K: 0.0135
i7-1060G7: 0.0194
i3-8100: 0.0194
i7-10510U: 0.0207
i5-8600K: 0.0222
What execution time (in seconds) are you targeting?
.02
The cheapest processor to meet your specification is: i3-8100 at a price of $116.00.
