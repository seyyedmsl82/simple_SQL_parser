from flask import Flask

# Create Flask application instance
app = Flask(__name__)

# Import routes module to register routes
from app import routes
