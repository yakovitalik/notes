Vwater = 1340.74
PwaterG = 1.024
PKubKilometrT = PwaterG * (10 ** 9)
VesOkean = 1340.74 * (10 ** 6) * PKubKilometrT

VGoldMG = 0.005
VGoldG = VGoldMG / (10 ** 3)
SumKolGoldG = VGoldG * VesOkean
PGoldG = 19.32
VGoldMetr = PGoldG * (10 ** 6)
SumVGold = SumKolGoldG / VGoldMetr
StoronaGoldKub = SumVGold ** (1/3)
print (StoronaGoldKub)
input()
