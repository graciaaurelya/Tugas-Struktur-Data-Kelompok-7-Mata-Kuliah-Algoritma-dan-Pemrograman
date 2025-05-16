class MyQueue:
    def __init__(self):
        self.stack1 = []  # Stack untuk push
        self.stack2 = []  # Stack untuk pop dan peek
    
    def push(self, x: int) -> None:
        # Menambahkan elemen ke belakang antrian (ke stack1)
        self.stack1.append(x)
    
    def pop(self) -> int:
        # Jika stack2 kosong, pindahkan semua elemen dari stack1 ke stack2
        if not self.stack2:
            while self.stack1:
                self.stack2.append(self.stack1.pop())
        
        # Pop elemen dari stack2 (elemen di depan antrian)
        return self.stack2.pop()
    
    def peek(self) -> int:
        # Jika stack2 kosong, pindahkan semua elemen dari stack1 ke stack2
        if not self.stack2:
            while self.stack1:
                self.stack2.append(self.stack1.pop())
        
        # Mengambil elemen di depan antrian (top dari stack2)
        return self.stack2[-1]
    
    def empty(self) -> bool:
        # Antrian kosong jika kedua stack kosong
        return not self.stack1 and not self.stack2

# Membuat objek antrian
antrian = MyQueue()

# Menambahkan angka 1 sampai 5 ke antrian
antrian.push(1)
antrian.push(2)
antrian.push(3)
antrian.push(4)
antrian.push(5)

# Melihat elemen paling depan (harusnya 1)
print("Peek:", antrian.peek())  # Output: Peek: 1

# Mengeluarkan elemen paling depan satu per satu
print("Pop:", antrian.pop())    # Output: Pop: 1
print("Pop:", antrian.pop())    # Output: Pop: 2
print("Pop:", antrian.pop())    # Output: Pop: 3

# Melihat elemen paling depan setelah pop beberapa elemen (harusnya 4)
print("Peek:", antrian.peek())  # Output: Peek: 4

# Mengecek apakah antrian kosong (harus False)
print("Empty?", antrian.empty()) # Output: Empty? False

# Mengeluarkan sisa elemen
print("Pop:", antrian.pop())    # Output: Pop: 4
print("Pop:", antrian.pop())    # Output: Pop: 5

# Mengecek apakah antrian kosong sekarang (harus True)
print("Empty?", antrian.empty()) # Output: Empty? True


