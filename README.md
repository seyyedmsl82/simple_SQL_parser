
# SQL Parser Web Application

This is a simple web application built with Flask that allows users to parse SQL queries using a C parser.

## Features

- Parse SQL queries and display the parsed SQL.
- Supports parsing SQL queries with basic syntax.
- Provides a user-friendly interface for parsing SQL queries.

## Requirements

- Python 3.x
- Flask
- C compiler (for compiling the C parser)

## Installation

1. Clone the repository to your local machine:

    ```bash
    git clone https://github.com/your-username/sql-parser-web-app.git
    ```

2. Navigate to the project directory:

    ```bash
    cd sql-parser-web-app
    ```

3. Install the required Python packages:

    ```bash
    pip install -r requirements.txt
    ```

4. Compile the C parser (if required) located in the `app` folder.

5. Run the application:

    ```bash
    python run.py
    ```

6. Access the application in your web browser at `http://localhost:5000`.

## Usage

1. Enter your SQL query into the text box.
2. Click the "Parse" button to parse the SQL query.
3. The parsed SQL will be displayed below the text box.

