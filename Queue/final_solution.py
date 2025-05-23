def queue_time(customers, n):
    if len(customers) == 0:  # Jika tidak ada pelanggan, waktu total adalah 0
        return 0

    if len(customers) <= n:  # Jika jumlah pelanggan lebih kecil atau sama dengan jumlah kasir, ambil yang terbesar dari waktu pelanggan
        return max(customers)

    # Jika jumlah pelanggan lebih banyak dari kasir
    cashier_queues = [0] * n  # Kasir mulai kosong
    for j in customers:
        cashier_queues.sort()  # Mengurutkan kasir berdasarkan waktu yang telah digunakan
        cashier_queues[0] += j  # Menambahkan pelanggan ke kasir yang paling kosong
    
    return max(cashier_queues)  # Mengembalikan waktu yang dibutuhkan oleh kasir yang paling lama selesai
