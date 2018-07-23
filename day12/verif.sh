function pause2()
{
   read -p "$*"
}

echo 'Debut de la correction...'
echo 'Start'
echo 'Start ex00'
cd ex00
make
sleep 1
echo 'Modification du main'
touch main.c
sleep 1
echo 'Test du relink...'
sleep 5
echo 'Error: fail.. does not compile'
sleep 5
echo 'Non cetait une blague lol'
sleep 1
echo 'Vrai test du relink..'
sleep 1
make
pause2 'Continue'
make re
make clean
pause2 'Continue'
echo 'Test du ft_display_file sur un main.c'
sleep 1
./ft_display_file main.c
pause2 'Continue'
echo 'Test du ft_display_file sur aucun fichier'
sleep 1
./ft_display_file
pause2 'Continue'
echo 'Test du ft_display_file sur un dossier'
sleep 1
./ft_display_file test
pause2 'Continue'
echo 'Test du ft_display_file sur deux fichiers main.c et main.c'
sleep 1
./ft_display_file main.c main.c
pause2 'FAIRE LE HOLY TEST'
echo 'HOLY TEST'
sleep 1
./ft_display_file ../bible.txt
pause2 'Clear le dossier'
echo 'make fclean en cours..'
sleep 0.5
make fclean
echo 'Suppression de la bible... HERETIQUE!'
sleep 3
rm bible.txt
pause2 'Continuer la correction'
echo 'Start ex01'
cd ..
cd ex01
make
sleep 1
echo 'Modification du main'
touch main.c
sleep 1
echo 'Test du relink...'
make
pause2 'Continue'
make re
make clean
pause2 'Continue'
echo 'Test du ft_cat sur un *.c'
sleep 1
./ft_cat *.c
pause2 'Continuer'
echo 'Test du ft_cat sur un dossier'
sleep 1
./ft_cat ../
pause2 'Continue'
echo 'Test du ft_cat sur un fichier trop long'
sleep 1
./ft_cat XKbDpaKSO9MLE4NcRGISxJAHsg5tfFm8yODwr6E9yXeQ6qqjstnYcrBIO8BujaQbJ55KFH5l0XCoieGDw4VaDuv0LlKkNy09ZxVNcVUXwTko5iOhWt0ZccWAz8NACU14Lz96kbLw90p9eyXtL557BLvWyBnzuMl3FG2z40RuHRiAYPtwqoNpzwsaJTT625P9IbzjSVJLMW2jb62uEMvOyYInVgnrM2D9FbLR3cTbek1u2WJ2PKhX0ipwKOATwFos
pause2 'Continue'
echo 'Creation du dossier dossiertest...'
sleep 1
mkdir dossiertest
echo 'Dossier cree'
sleep 0.5
echo 'Changement des droits du dossier dossiertest em chmod 000...'
sleep 1
chmod 000 dossiertest
echo 'dossiertest sans permission de lecture ajoute'
pause2 'Continue'
echo 'Test du ft_cat sur un dossier sans permission'
sleep 1
./ft_cat dossiertest
pause2 'Continue'
echo 'Test du ft_cat sur un dossier inexsistant...'
sleep 1
./ft_cat dossiertestt
pause2 'Continue'
echo 'Test du ft_cat sur un dossier sans permission, un dossier inexistant, et un fichier trop long...'
sleep 1
./ft_cat dossiertest dossiertestt XKbDpaKSO9MLE4NcRGISxJAHsg5tfFm8yODwr6E9yXeQ6qqjstnYcrBIO8BujaQbJ55KFH5l0XCoieGDw4VaDuv0LlKkNy09ZxVNcVUXwTko5iOhWt0ZccWAz8NACU14Lz96kbLw90p9eyXtL557BLvWyBnzuMl3FG2z40RuHRiAYPtwqoNpzwsaJTT625P9IbzjSVJLMW2jb62uEMvOyYInVgnrM2D9FbLR3cTbek1u2WJ2PKhX0ipwKOATwFos
pause2 'Continue'
echo 'Test du ft_cat sur un dossier sans permission, un dossier inexistant, un fichier trop long et un main...'
sleep 1
./ft_cat dossiertest dossiertestt XKbDpaKSO9MLE4NcRGISxJAHsg5tfFm8yODwr6E9yXeQ6qqjstnYcrBIO8BujaQbJ55KFH5l0XCoieGDw4VaDuv0LlKkNy09ZxVNcVUXwTko5iOhWt0ZccWAz8NACU14Lz96kbLw90p9eyXtL557BLvWyBnzuMl3FG2z40RuHRiAYPtwqoNpzwsaJTT625P9IbzjSVJLMW2jb62uEMvOyYInVgnrM2D9FbLR3cTbek1u2WJ2PKhX0ipwKOATwFos main.c
pause2 'Continue'
echo 'Test du ft_cat sur un fichier main, un fichier trop long, un dossier inexistant et un dossier sans permission...'
sleep 1
./ft_cat main.c XKbDpaKSO9MLE4NcRGISxJAHsg5tfFm8yODwr6E9yXeQ6qqjstnYcrBIO8BujaQbJ55KFH5l0XCoieGDw4VaDuv0LlKkNy09ZxVNcVUXwTko5iOhWt0ZccWAz8NACU14Lz96kbLw90p9eyXtL557BLvWyBnzuMl3FG2z40RuHRiAYPtwqoNpzwsaJTT625P9IbzjSVJLMW2jb62uEMvOyYInVgnrM2D9FbLR3cTbek1u2WJ2PKhX0ipwKOATwFos dossiertestt dossiertest ../
pause2 'Clear le dossier'
echo 'Suppression du dossier dossier test...'
sleep 0.5
chmod 777 dossiertest
rm -rf dossiertest
echo 'Dossier supprime'
sleep 0.5
echo 'make fclean en cours...'
sleep 0.5
make fclean
echo 'Fin de correction'
exit
