cat /etc/passwd | grep -v '#' | sed '1!n;d' | cut -d":" -f1 | rev | sort -r | head -n $FT_LINE2 | tail -n +$FT_LINE1 | tr "\n" "," | sed 's/,/, /g' | rev | sed 's/ ,/./' | rev | tr -d "\n"
