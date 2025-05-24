## Nama dan NIM
Nama : Gracia Aurelya

NIM : D121241095

## Problem Link From LeetCode
https://www.codewars.com/kata/57b06f90e298a7b53d000a86

## Difficulty Level
Intermediate

## Short Approach Summary
1. Menangani Kasus : Jika tidak ada pelanggan (customers = []), maka waktu total adalah 0.

2. Kasir Tunggal: Jika hanya ada satu kasir, kita cukup menjumlahkan waktu checkout semua pelanggan.

3. Beberapa Kasir:
- Distribusikan pelanggan ke kasir: Jika jumlah pelanggan lebih banyak dari jumlah kasir, kita akan membagikan pelanggan ke kasir yang tersedia. Kasir dengan waktu paling sedikit (yang paling cepat selesai) akan melayani pelanggan berikutnya.
- Menggunakan penyortiran: Urutkan kasir berdasarkan waktu checkout yang sudah digunakan untuk memastikan pelanggan berikutnya dilayani oleh kasir yang lebih cepat selesai.
- Perbarui waktu kasir: Untuk setiap pelanggan, tambahkan waktu checkout mereka ke kasir yang mereka pilih.

4. Waktu Akhir: Waktu total yang dibutuhkan adalah waktu yang dibutuhkan oleh kasir yang selesai paling lama, karena ini menunjukkan kapan pelanggan terakhir selesai checkout.
