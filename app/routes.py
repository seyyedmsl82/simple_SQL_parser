from flask import render_template, request, jsonify
from app import app
from app.parser import SQLParser

class SQLParserAPI:
    @staticmethod
    @app.route('/')
    @app.route('/index')
    def index():
        return render_template('index.html')

    @staticmethod
    @app.route('/parse_sql', methods=['POST'])
    def parse_sql():
        # Get the SQL query from the request data
        data = request.get_json()
        sql_query = data.get('sql_query')

        # Call the SQLParser class to parse the SQL query
        parsed_sql = SQLParser.parse_sql_query(sql_query)

        print(parsed_sql)

        # Return the parsed SQL as JSON response
        return jsonify({'parsed_sql': parsed_sql})
