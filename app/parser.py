import subprocess

class SQLParser:
    @staticmethod
    def parse_sql_query(sql_query):
        # Execute the C parser as a subprocess
        process = subprocess.Popen([r'app\sql_parser.exe'], 
                                    stdin=subprocess.PIPE, 
                                    stdout=subprocess.PIPE,
                                    stderr=subprocess.PIPE)
        
        # Send SQL query to the parser
        query_bytes = sql_query.encode('utf-8')
        stdout, stderr = process.communicate(input=query_bytes)

        # Process the output (parsed SQL)
        parsed_sql = stdout.decode('utf-8')

        return parsed_sql
