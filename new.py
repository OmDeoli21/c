count = 0
print("Enter withdrawal amounts for 5 customers:")
for i in range(5):
    amount = int(input(f"Customer {i+1}: ₹"))
    if amount > 10000:
        count += 1
print("\nNumber of customers who exceeded the ₹10,000 limit:", count)
if count == 0:
    print("All customers are within the limit.")