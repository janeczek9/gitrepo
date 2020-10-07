CREATE TABLE tbUczniowie (
    id INTEGER NOT NULL PRIMARY KEY AUTOINCREMENT,
    imie TEXT,
    nazwisko TEXT,
    plec INTEGER,
    data_ur DATE,
    awatar BLOB,
    egzamin INTEGER,
    srednia_ocen DECIMAL,
    uwagi TEXT
);

CREATE TABLE tbOddzialy (
    id INTEGER NOT NULL PRIMARY KEY AUTOINCREMENT,
    oznaczenie TEXT,
    rok_naboru DATE,
    rok_matury DATE,
);
