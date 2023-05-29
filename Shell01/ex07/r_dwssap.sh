cat /etc/passwd | grep -v '#' | sed -n 'n;p' | cut -d: -f1 | rev | sort -r | sed 's/$/, /g' | tr -d '\n' | tr '\n' '.'
