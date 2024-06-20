#!/usr/bin/env bash
count=10
for ((i = 0; i < count; i++)); do
	touch $i.html
done
echo "Files created successfully"
