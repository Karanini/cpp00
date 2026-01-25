# Generate test input for PhoneBook

def generate_input():
    with open("test_input.txt", "w") as f:
        # Add 8 contacts
        for i in range(1, 9):
            f.write("ADD\n")
            f.write(f"User{i}\n")
            f.write(f"Last{i}\n")
            f.write(f"Nick{i}\n")
            f.write(f"123456789\n")
            f.write(f"Secret{i}\n")
        
        # Add 9th contact
        f.write("ADD\n")
        f.write("User9\n")
        f.write("Last9\n")
        f.write("Nick9\n")
        f.write("999999999\n")
        f.write("Secret9\n")
        
        # Search and Select Index 0 (Should be User9 now)
        f.write("SEARCH\n")
        f.write("0\n")
        
        # Search and Select Index 1 (Should be User2)
        f.write("SEARCH\n")
        f.write("1\n")

        f.write("EXIT\n")

if __name__ == "__main__":
    generate_input()
