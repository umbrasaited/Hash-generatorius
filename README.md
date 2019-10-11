# Hash-generatorius

Pirmoji Blockchain kurso užduotis - Hash generatoriaus kūrimas

Užduočiai atlikti, domėjausi jau egzistuojančiomis hash funkcijomis ir pagal tai, rašiau savąją versiją. Programoje galima įvesti duomenis ranka arba naudotis Command Line Arguments ir skaityti failus. Testams atlikti, failo skaitymas buvo naudojamas dvejopas: skaitant ir hash'uojant visą failą iš karto (naudojama pirmojo testo atveju), skaitant failą po eilutę (naudojama antrojo, trečiojo ir ketvirtojo testo atveju), taip pat skaičiuojamas programos veikimo laikas.

## Programos veikimas

gaunamas input'as string formatu, vėliau konvertuojamas į char masyvą, kurio dydis iki 100000 simbolių. Naudojama maišos funkcija gauna char simbolių masyvą ir naudodama shift operatorius paverčia į long formato 8 skaitmenų skaičių, išvedant galutinį hash'ą skaičius dar konvertuojamas hex formatu. 

## Programos veikimo nesklandumai

Funkcija nėra deterministinė. Naudojant maišos funkciją dideliems failams, output'as ne visuomet yra fiksuoto dydžio.

## Programos testavimas

tekstiniame faile `results.txt` išvedami pirmosios tyrimo-analizės pukto gauti rezultatai;
`kon_results.txt` faila hash'uojama konstitucija ir laikas; trečiojo ir ketvirtojo punkto testiniai failai ir rezultatai nėra patalpinti repositorijoje dėl didelės apimties. 

## [v1.0](https://github.com/umbrasaited/Hash-generatorius/releases/tag/v1.0)

Pirmojoje versijoje patalpintas programos kodas ir testiniai failai.

## [v1.0.1](https://github.com/umbrasaited/Hash-generatorius/releases/tag/v1.0.1)

Papildytas `readme` failas ir pridėtas `makefile`.
