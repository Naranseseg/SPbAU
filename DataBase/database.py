import _sqlite3

global db
global sql

db = _sqlite3.connect('sever.db')
sql = db.cursor()

sql.execute("""CREATE TABLE IF NOT EXISTS History (
     event VARCHAR,
     age VARCHAR   
)""")

db.commit()

event = input('Событие: ')
age = input('Год: ')

sql.execute(f"SELECT event FROM History WHERE event = '{event}'")
if sql.fetchone() is None:
    sql.execute(f"INSERT INTO History VALUES (?, ?)", (event, age))
    db.commit()
    print("Зарегестрировано.")
else:
    print('Такая запись уже имеется.')

for value in sql.execute("SELECT * FROM History"):
        print(value)