#!/usr/bin/env bash
count=0
while true; do
	./mag.sh &>>ba.txt
	if [[ $? -ne 0 ]]; then
		cat ba.txt
		echo "failed after $count times"
		break
	fi
	((count++))
done
