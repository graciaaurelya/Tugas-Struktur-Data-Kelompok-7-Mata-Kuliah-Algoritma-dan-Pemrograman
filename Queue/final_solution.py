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


