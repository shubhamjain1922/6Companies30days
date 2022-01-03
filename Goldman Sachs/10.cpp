I will use priority queue of size 10 and then iterate through all the entries and keep updating the queue if i get a number which is greater than the smallest number of the queue
,i.e head of the queue.
 
Time complexity :- 10M*log2(10) because insertion in queue will take log(n) time where n=10 and we are iterating through all the entries once so 10M.
