#!/bin/bash

cd ~/cng

find . -type f \( \
    -iname "*.pdf" -o \
    -iname "*.jpg" -o \
    -iname "*.jpeg" -o \
    -iname "*.png" -o \
    -iname "*.webp" -o \
    -iname "*.gif" -o \
    -iname "*.bmp" \
\) -print0 |
while IFS= read -r -d '' file; do

    ref="${file}.reference.md"

    if [ ! -f "$ref" ]; then

        case "$file" in
            *.pdf)
                type="PDF"
                ;;
            *)
                type="image"
                ;;
        esac

        cat > "$ref" <<EOF2
# Reference: $(basename "$file")

Original local file:
\`$file\`

This $type is intentionally not tracked by Git.
The actual file remains on the local computer.
EOF2

        echo "Created: $ref"

    else
        echo "Already exists: $ref"
    fi

done
