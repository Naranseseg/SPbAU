import flask
from flask import Flask, request

app = Flask(__name__, static_folder="static", static_url_path="", template_folder="templates")


@app.context_processor
def inject_globals():
    return {
        "isclever": [
            "бездне Гигунгагап, Торе и Одине",
            "Имире, Локи или Рагнарёке",
            "Бури, Игдрасиле или Фригг"
        ]
    }




@app.route('/')
def root():
    return flask.render_template(
        'base.html'
    )



if __name__ == '__main__':
   app.run(debug = True)