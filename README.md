# LiteDB

LiteDB is a lightweight SQL database engine written in C.
It is inspired by SQLite but built from scratch as a learning project.

---

## Features (Planned)

- [ ] Create tables with schemas
- [ ] Insert records
- [ ] Select records
- [ ] Simple query parser (SQL-like syntax)
- [ ] File-based storage engine
- [ ] Indexing with B+ trees (planned)
- [ ] Basic transactions (planned)

---

## Repository Structure

```
LiteDB/
 ├── src/         # Source code (.c files)
 ├── include/     # Header files (.h)
 ├── docs/        # Design notes, architecture
 ├── tests/       # Test SQL scripts
 ├── README.md    # Project overview
 └── .gitignore   # Ignore build artifacts
```

---

## Getting Started (Ubuntu)

### 1. Install GCC if not already installed

```bash
sudo apt update
sudo apt install build-essential -y
```

### 2. Clone the repository

```bash
git clone https://github.com/your-username/MiniSQL.git
cd MiniSQL
```

### 3. Build

```bash
gcc src/*.c -Iinclude -o minisql
```

### 4. Run

```bash
./minisql
```

This opens the MiniSQL shell where you can enter commands like:

```
CREATE TABLE students (id INT, name TEXT);
INSERT INTO students VALUES (1, "Aryan");
SELECT * FROM students;
```

---
