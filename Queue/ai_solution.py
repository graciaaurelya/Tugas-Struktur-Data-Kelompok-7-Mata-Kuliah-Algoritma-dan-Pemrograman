import heapq

def queueTime(customers, n):
    if n == 1:  # If there's only one till, just sum all the customer times
        return sum(customers)
    
    # Initialize the tills with 0 time (using a min-heap)
    tills = [0] * n
    
    for time in customers:
        # Assign the current customer to the till with the minimum load
        heapq.heapify(tills)
        heapq.heappush(tills, heapq.heappop(tills) + time)
    
    # The total time is the max value in the tills array
    return max(tills)
