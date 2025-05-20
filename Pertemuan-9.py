# Definisi variabel input
Juara = int(input("Apakah Bayu Mendapatkan Juara di Kelas (1 = Ya, 0 = Tidak): "))
Hapal = int(input("Apakah Bayu Hafal Juz 30 (1 = Ya, 0 = Tidak): "))

# Logika AND tanpa penyederhanaan (nested if)
if Juara == 1:
    if Hapal == 1:
        print("Bayu Mendapatkan Hadiah Sepeda (And tanpa penyederhanaan)")
    else:
        print("Bayu Tidak Mendapatkan Hadiah Sepeda (And tanpa penyederhanaan")
else:
    if Hapal == 1:
        print("Bayu Tidak Mendapatkan Hadiah Sepeda (And tanpa penyederhanaan")
    else:
        print("Bayu Tidak Mendapatkan Hadiah Sepeda (And tanpa penyederhanaan")

# Logika AND dengan penyederhanaan
if Juara == 1 and Hapal == 1:
    print("Bayu Mendapatkan Hadiah Sepeda (AND dengan penyederhanaan)")
else:
    print("Bayu Tidak Mendapatkan Hadiah Sepeda (AND dengan penyederhanaan)")

# Logika OR tanpa penyederhanaan (nested if)
if Juara == 1:
    if Hapal == 1:
        print("Bayu Mendapatkan Hadiah Sepeda (OR tanpa penyederhanaan)")
    else:
        print("Bayu Mendapatkan Hadiah Sepeda (OR tanpa penyederhanaan)")
else:
    if Hapal == 1:
        print("Bayu Mendapatkan Hadiah Sepeda (OR tanpa penyederhanaan)")
    else:
        print("Bayu Tidak Mendapatkan Hadiah Sepeda (OR tanpa penyederhanaan)")

# Logika OR dengan penyederhanaan
if Juara == 1 or Hapal == 1:
    print("Bayu Mendapatkan Hadiah Sepeda (OR tanpa penyederhanaan)")
else:
    print("Bayu Tidak Mendapatkan Hadiah Sepeda (OR tanpa penyederhanaan)")

