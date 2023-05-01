// Pass	    Array	                            Mid	Check	Eliminate
// 1	    22 25 33 46 50 55 69 70 74 80 86	50	>	    22 25 33 46
// 2	    55 69 70 74 80 86	                70	<	    74 80 86
// 3	    55 69	                            69	found	

// Linear search has a time complexity of O(n) while 
// binary search has a time complexity of O(log n)
// plugging n as 2 and O as 6 binary search is 3 times faster
// common sense 6/3 passes