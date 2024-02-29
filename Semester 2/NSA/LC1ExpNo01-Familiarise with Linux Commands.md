# Experiment No: 1

## Familiarise with Linux Commands

#### 1. Display a Message

```bash
echo -e "Hi Everyone..\nWe are starting Shell Scripting"
```

#### 2. Read and Display Name

```bash
echo "Enter your name:"
read name
echo "Your name is: $name"
```

#### 3. Create and Change Directory

```bash
mkdir -p dir1/dir4 dir1/dir2/dir3
cd dir1/dir2/dir3
```

#### 4. Create and Display File with Nano

```bash
# Create testfile1 using nano
nano testfile1

# Display the file starting with the first 10 lines
head testfile1

# Display the file starting with the 10th line and scroll up using less
tail -n +10 testfile1 | less
```

#### 5. Get Manual Page and Search

```bash
man ls | grep -A1 -B1 "alphabetic"
```

#### 6. Create Files and Modify Permissions

```bash
nano testfile2
nano testfile3

# Modify permissions of testfile2
chmod o+r testfile2
chmod u-w testfile2
chmod g+x testfile2
chmod u+w,go-r testfile2
chmod a+rw testfile2

# Modify permissions of testfile3 using numeric mode
chmod 666 testfile3
chmod 711 testfile3

# Set permissions of testfile2 same as testfile3
chmod --reference=testfile3 testfile2

# Set permissions of dir1 and its descendants to 664
chmod -R 664 dir1
```

#### 7. Change Owner and Group

```bash
chown -R student:student dir2
```

#### 8. Display Current Directory

```bash
pwd
```

#### 9. List Files and Folders

```bash
# (a) List contents of dir1 and all descendants
ls -R dir1

# (b) List contents of dir3
# 1. Alphabetical Order
ls -l dir3 | sort
# 2. Sorted on Time of modification, newest first
ls -lt dir3
# 3. Sorted on Size
ls -lS dir3
# 4. Reverse of above
ls -lSr dir3
# 5. Long listing of files Sorted on Size with smallest first
ls -lhS dir3
# 6. Display in human-readable form
ls -lh --sort=size dir3
```

#### 10. Execute ls and Store Output

```bash
ls > lsoutput
ls -l >> lsoutput
```

#### 11. Execute ls -l with Less

```bash
ls -l | less
```

#### 12. Create and Concatenate Files

```bash
# (a) Create file1
echo "Hello," > file1

# (b) Create file2
echo ", Greetings!!" > file2

# (c) Concatenate files using cat
cat file1 - file2
```

#### 13. Copy, Replace, and Link Files

```bash
# (a) Copy file1 to newfile, replace if exists
cp -f file1 newfile

# (b) Copy file1 to newfile, do not replace if exists
cp -n file1 newfile

# (c) Copy file1 to newfile, ask for consent
cp -i file1 newfile

# (d) Copy only if contents are older
cp -u file1 newfile

# (e) Copy even if newfile is read-only
cp -f file1 newfile --reply=yes

# (f) Create a link
ln file1 newfile

# (g) Copy entire directory tree to dir5
cp -r dir1 dir5
```

#### 14. Manipulate Files and Directories

```bash
# (a) Move files in dir5 to dir6
mv dir5/* dir6/

# (b) Rename newfile to oldfile
mv newfile oldfile

# (c) Move file1 to dir6 with the name file3
mv file1 dir6/file3

# (d) Delete files starting with a vowel
rm [aeiouAEIOU]*

# (e) Delete files with name at least 3 characters
find . -type f -name '??*' -delete

# (f) Delete hidden files and folders
find . -name ".*" -delete
```

#### 15. Using Cut Filter

```bash
# (a) Display filenames starting at column 50
ls -l | cut -c50-

# (b) Display user Id and user name from /etc/passwd
cut -d: -f1,3 /etc/passwd
```

#### 16. Create CSV File from 3 Files

```bash
paste -d',' file1 file2 file3 > combined.csv
```

#### 17. Using Find

```bash
# (a) Count files starting with 'a'
find . -type f -name 'a*' | wc -l

# (b) Delete .c files in parent directory
find .. -type f -name '*.c' -delete

# (c) Copy files starting with 'a' to dir2
find . -type f -name 'a*' -exec cp {} dir2 \;

# (d) Display files modified in the last 30 minutes
find . -mmin -30
```

#### 18. Use Head and Tail with Cat

```bash
# (a) First 12 users
head -n 12 /etc/passwd

# (b) Last 7 users
tail -n 7 /etc/passwd

# (c) All but the first 3
tail -n +4 /etc/passwd

# (d) All but the last 5
head -n -5 /etc/passwd

# (e) Only the 9th
head -n 9 /etc/passwd | tail -n 1
```

#### 19. Use Grep

```bash
# (a) Display lines containing the string 'abc'
grep 'abc' file.txt

# (b) Display lines not containing 'abc'
grep -v 'abc' file.txt

# (c) List .c files containing printf
grep -rl 'printf' *.c

# (d) List .c files not containing printf
grep -rL 'printf' *.c

# (e) Display number of #include statements
grep -c '#include' *.c

# (f) Display line numbers of printf
grep -n 'printf' file.c

# (g) List files containing printf in directory tree
grep -rl 'printf' dir1/

# (h) Display context of printf
grep -C 5 'printf' file.c

# (i) List directories with ls -l starting with 'd'
ls -l | grep '^d'
```
#### 20. Using Expr 
```bash
# (a) Read integers X and Y, display sum, difference, product, quotient, remainder
echo "Enter X and Y:"
read X Y
echo "Sum: $(expr $X + $Y)"
echo "Difference: $(expr $X - $Y)"
echo "Product: $(expr $X \* $Y)"
echo "Quotient: $(expr $X / $Y)"
echo "Remainder: $(expr $X % $Y)"

# (b) Read string S, position p, length l, display substring
echo "Enter string S:"
read S
echo "Enter position p:"
read p
echo "Enter length l:"
read l
echo "Substring: $(expr substr "$S" $p $l)"
```
