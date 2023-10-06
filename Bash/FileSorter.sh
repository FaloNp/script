#!/bin/bash

# Uzyskaj aktualną ścieżkę roboczą
current_directory="$PWD"

# Wyświetl aktualną ścieżkę roboczą
echo "Aktualna ścieżka robocza: $current_directory"

# Inicjalizuj licznik
counter=0

# Przejdź przez wszystkie pliki w katalogu
for file in "$current_directory"/*; do
    # Sprawdź, czy to jest plik
    if [ -f "$file" ]; then
        # Ustal nową nazwę pliku
        new_name="${counter}.png"
        # Zmieniamy nazwę pliku
        mv "$file" "$new_name"
        # Zwiększamy licznik
        counter=$((counter+1))
    fi
done

echo "Zmieniono nazwy plików na 0.png, 1.png, 2.png, ..."
