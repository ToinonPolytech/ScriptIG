#!/bin/bash

cfgpass=`zenity --forms \
    --title="Vérification aléatoire d'identités" \
    --text="Vérification aléatoire d'identités" \
    --add-entry="Nom de l'utilisateur" \
    --add-password="Mot de passe" \
    --separator="|"`

#Si on clique sur le bouton Annuler
if [ "$?" -eq 1 ]; then
    #On quitte le script
    sh test.sh
    exit
fi

util="$(echo "$cfgpass" | cut -d "|" -f1)"
echo "${util}"
pass="$(echo "$cfgpass" | cut -d "|" -f2)"
echo "${pass}"

if [ "$util" = "" ]
	then
		sh test.sh
		exit
fi
if [ "$pass" = "" ]
	then
		sh test.sh
		exit
fi

