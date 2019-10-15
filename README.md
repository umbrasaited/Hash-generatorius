# Hash-generatorius

Pirmoji Blockchain kurso užduotis - Hash generatoriaus kūrimas

Užduočiai atlikti, domėjausi jau egzistuojančiomis hash funkcijomis ir pagal tai, rašiau savąją versiją. Programoje galima įvesti duomenis ranka arba naudotis Command Line Arguments ir skaityti failus. Testams atlikti, failo skaitymas buvo naudojamas dvejopas: skaitant ir hash'uojant visą failą iš karto (naudojama pirmojo testo atveju), skaitant failą po eilutę (naudojama antrojo, trečiojo ir ketvirtojo testo atveju), taip pat skaičiuojamas programos veikimo laikas.

## Programos veikimas

Naudojama maišos funkcija gauna input'ą string formatu ir naudodama shift operatorius paverčia į long formato 8 skaitmenų skaičių, išvedant galutinį hash'ą, skaičius dar konvertuojamas hex formatu. 

## Programos veikimo nesklandumai

Naudojamas sprendimas nėra pats efektyviausias.

## Programos testavimas

tekstiniame faile `results.txt` išvedami pirmosios tyrimo-analizės pukto gauti rezultatai;
`kon_results.txt` faile hash'uojama konstitucija ir išvedama programos veikimo laikas; 
trečiojo ir ketvirtojo punkto rezultatai patalpinti failuose `test3.txt` ir `test4.txt'

## [v1.0](https://github.com/umbrasaited/Hash-generatorius/releases/tag/v1.0)

Pirmojoje versijoje patalpintas programos kodas ir testiniai failai.

## [v1.0.1](https://github.com/umbrasaited/Hash-generatorius/releases/tag/v1.0.1)

Papildytas `readme` failas ir pridėtas `makefile`.

## [v1.0.2]()

Pataisytas programos kodas
