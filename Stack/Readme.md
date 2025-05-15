# Tugas DSA - STACK

Nama: Ainun Jariah  
NIM: D121241074 

Problem Link: 
https://www.geeksforgeeks.org/problems/delete-middle-element-of-a-stack/1 

Difficulty: 
Easy     

## Short Approach Summary
Menghapus elemen tengah dari stack menggunakan hanya operasi dasar stack yaitu push(), pop(), dan empty() tanpa menggunakan struktur data tambahan.  
Gunakan rekursi untuk memproses elemen stack satu per satu dari atas ke bawah.

Langkah Penyelesaian :
1. Gunakan rekursi untuk memproses elemen stack satu per satu dari atas ke bawah.
2. Hitung posisi tengah berdasarkan ukuran stack.
3. Pop elemen satu per satu hingga mencapai elemen tengah.
4. Lewati (tidak push kembali) elemen tengah saat stack dibangun kembali dalam proses backtracking rekursi.
5. Push kembali elemen-elemen lain agar urutan tetap sama kecuali elemen tengah yang dihapus.
