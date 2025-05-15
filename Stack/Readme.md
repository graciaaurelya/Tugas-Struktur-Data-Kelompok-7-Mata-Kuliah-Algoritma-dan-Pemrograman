# Tugas DSA - STACK

Nama: Ainun Jariah  
NIM: D121241074 

Problem Link: 
https://www.geeksforgeeks.org/problems/delete-middle-element-of-a-stack/1 

Difficulty: 
Easy     

## Short Approach Summary
Menghapus elemen tengah dari stack menggunakan hanya operasi dasar stack yaitu push(), pop(), dan empty() tanpa menggunakan struktur data tambahan.  L
Gunakan rekursi untuk memproses elemen stack satu per satu dari atas ke bawah.

Langkah Penyelesaian :
1. Hitung posisi tengah berdasarkan ukuran stack.
2. Pop elemen satu per satu hingga mencapai elemen tengah.
3. Lewati (tidak push kembali) elemen tengah saat stack dibangun kembali dalam proses backtracking rekursi.
4. Push kembali elemen-elemen lain agar urutan tetap sama kecuali elemen tengah yang dihapus.
