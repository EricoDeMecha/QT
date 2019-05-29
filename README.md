# Qt 5.12   Projects

Qt project using  c++. 
Projects containing mysql database connections require the installation of mysql server , preferably  XAMPP . Have mysql c++ connector also installed.

## How to compile 
 Make sure you have Qt 5.9.x or later installed. Open the .pro file in the project directory . This loads all the other project files  . Build and run the program.


```bash
git clone "https://github.com/EricoDeMecha/QT.git"
```

## Usage
# Example
Bankie_ project
```C++ Qt
 QString command = "SELECT name FROM my_val;";
 QString command = "SELECT _password FROM my_val;";
 QString command ="INSERT INTO my_val VALUES('"+name+"','"+_pass+"','"+date_time+"','"+choice+"');";
```
# make sure to edit the commands to suit your database names
## Contributing
Pull requests are welcome. For major changes, please open an issue first to discuss what you would like to change.

Please make sure to update tests as appropriate.

## License
[MIT](https://choosealicense.com/licenses/mit/)
```

