## Prompting to AI
## Prompt 1
The key challenges are:
- The number of tills might be smaller than the number of customers, and in such cases, I need to efficiently allocate customers to tills.
- The approach should prioritize filling the tills in a way that the customer who finishes last determines the total time.

Could you explain an efficient algorithm for this problem that works for both the case where the number of tills is smaller than the number of customers, and when it’s larger? Specifically, how can I implement this solution efficiently by managing which tills are free and allocating customers accordingly?

## Prompt 2
I have a problem where multiple customers are waiting in line at a supermarket with a set number of tills (self-checkout counters). Each customer has a different time required to check out. Given an array of customer checkout times and the number of tills available, how can I calculate the total time needed for all customers to complete their checkout?

Key requirements:
- If there is only one till, the total time is the sum of all customer times.
- If there are more tills than customers, the time required will be the time for the longest customer.
- If there are fewer tills than customers, I need to distribute the customers among the tills, minimizing the time required by assigning each customer to the till that is free the soonest.
How can I efficiently implement this solution, ensuring the total time reflects when the last customer finishes?
