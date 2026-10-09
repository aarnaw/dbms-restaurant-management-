# Restaurant Management DBMS

A relational database-driven restaurant management system for handling:
- menu items
- customers
- staff
- tables
- reservations
- orders
- payments
- inventory

## Features
- Manage menu categories and items
- Track customer reservations
- Handle table occupancy and order status
- Record payments and billing
- Generate basic sales and reporting queries
- Support database-driven backend operations

## Tech Stack
- Database: MySQL / PostgreSQL
- Backend: Python Flask or Node.js
- Frontend: HTML, CSS, JavaScript
- Optional: REST API for data access

## Project Structure
- `database/` — SQL schema, sample data, and queries
- `backend/` — application logic and API
- `frontend/` — UI files
- `docs/` — project documentation

## Database Schema
Core tables:
- `customers`
- `tables`
- `employees`
- `menu_categories`
- `menu_items`
- `reservations`
- `orders`
- `order_items`
- `payments`

## Setup
1. Create a database:
   ```sql
   CREATE DATABASE restaurant_db;