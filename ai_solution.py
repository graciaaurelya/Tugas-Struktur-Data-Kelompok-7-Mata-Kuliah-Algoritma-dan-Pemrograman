class MyQueue:
    def __init__(self, max_size=10**5):
        self.stack1 = []  # Stack pertama untuk push
        self.stack2 = []  # Stack kedua untuk pop dan peek
        self.size = 0  # Menyimpan jumlah elemen dalam antrian
        self.max_size = max_size  # Batas kapasitas queue (opsional)
    
    def _validate_capacity(self):
        # Memeriksa apakah antrian sudah penuh
        if self.size >= self.max_size:
            raise OverflowError("Queue is full")
    
    def _validate_non_empty(self):
        # Memastikan antrian tidak kosong sebelum melakukan operasi pop/peek
        if self.size == 0:
            raise IndexError("Queue is empty")
    
    def push(self, x: int) -> None:
        # Validasi kapasitas sebelum melakukan push
        self._validate_capacity()
        
        # Menambahkan elemen ke dalam stack1
        self.stack1.append(x)
        self.size += 1  # Increment ukuran antrian
        print(f"Push: {x}, Current Queue: {self.stack1 + list(reversed(self.stack2))}")
    
    def pop(self) -> int:
        # Memastikan antrian tidak kosong sebelum pop
        self._validate_non_empty()
        
        # Jika stack2 kosong, kita perlu memindahkan elemen dari stack1 ke stack2
        if not self.stack2:
            while self.stack1:
                self.stack2.append(self.stack1.pop())
        
        # Menghapus dan mengembalikan elemen yang ada di depan antrian
        popped_element = self.stack2.pop()
        self.size -= 1  # Decrement ukuran antrian
        print(f"Pop: {popped_element}, Current Queue: {self.stack1 + list(reversed(self.stack2))}")
        return popped_element
    
    def peek(self) -> int:
        # Memastikan antrian tidak kosong sebelum peek
        self._validate_non_empty()
        
        # Jika stack2 kosong, kita perlu memindahkan elemen dari stack1 ke stack2
        if not self.stack2:
            while self.stack1:
                self.stack2.append(self.stack1.pop())
        
        # Mengembalikan elemen yang ada di depan antrian tanpa menghapusnya
        front_element = self.stack2[-1]
        print(f"Peek: {front_element}, Current Queue: {self.stack1 + list(reversed(self.stack2))}")
        return front_element
    
    def empty(self) -> bool:
        # Mengecek apakah antrian kosong
        return self.size == 0

