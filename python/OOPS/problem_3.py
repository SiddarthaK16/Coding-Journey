import random

class Train:
    def __init__(self, name):
        self.name = name
        self.seats = random.randint(50, 200)  # Random seats available
        self.fare = random.randint(500, 3000) # Random fare
        print(f"Welcome to Indian Railways, {self.name}!")

    def book_ticket(self):
        if self.seats > 0:
            self.seats -= 1
            print(f"Ticket booked successfully for {self.name}. Seats left: {self.seats}")
        else:
            print("Sorry, no seats available.")

    def get_status(self):
        print(f"Seats available for {self.name}: {self.seats}")

    def get_fare(self):
        print(f"Fare for {self.name}: ₹{self.fare}")


# Example usage
passenger = Train("Gopikrishna")

passenger.book_ticket()
passenger.get_status()
passenger.get_fare()
