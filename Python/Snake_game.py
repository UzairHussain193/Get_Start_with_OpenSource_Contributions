import tkinter as tk
import random

# Constants
WIDTH, HEIGHT = 400, 400
GRID_SIZE = 20
GRID_WIDTH = WIDTH // GRID_SIZE
GRID_HEIGHT = HEIGHT // GRID_SIZE

# Colors
BG_COLOR = "black"
SNAKE_COLOR = "green"
FOOD_COLOR = "red"

# Directions
UP = (0, -1)
DOWN = (0, 1)
LEFT = (-1, 0)
RIGHT = (1, 0)

class SnakeGame:
    def __init__(self, root):
        self.root = root
        self.root.title("Snake Game")
        
        self.canvas = tk.Canvas(root, width=WIDTH, height=HEIGHT, bg=BG_COLOR)
        self.canvas.pack()
        
        self.snake = [(GRID_WIDTH // 2, GRID_HEIGHT // 2)]
        self.direction = RIGHT
        self.food = self.spawn_food()
        self.score = 0
        self.speed = 100  # Initial speed
        
        self.root.bind("<KeyPress-Up>", self.change_direction)
        self.root.bind("<KeyPress-Down>", self.change_direction)
        self.root.bind("<KeyPress-Left>", self.change_direction)
        self.root.bind("<KeyPress-Right>", self.change_direction)
        
        self.game_over = False
        
        self.restart_button = tk.Button(
            self.root, text="Restart", command=self.restart_game, state=tk.DISABLED)
        self.restart_button.pack()
        
        self.update()
        
    def change_direction(self, event):
        key = event.keysym
        if key == "Up" and self.direction != DOWN:
            self.direction = UP
        elif key == "Down" and self.direction != UP:
            self.direction = DOWN
        elif key == "Left" and self.direction != RIGHT:
            self.direction = LEFT
        elif key == "Right" and self.direction != LEFT:
            self.direction = RIGHT
        
    def spawn_food(self):
        while True:
            food = (
                random.randint(0, GRID_WIDTH - 1),
                random.randint(0, GRID_HEIGHT - 1)
            )
            if food not in self.snake:
                return food
    
    def move(self):
        head_x, head_y = self.snake[0]
        new_head = (head_x + self.direction[0], head_y + self.direction[1])
        
        if new_head == self.food:
            self.score += 1
            self.snake.insert(0, new_head)
            self.food = self.spawn_food()
            
            # Increase speed as the snake grows
            self.speed -= 2
        else:
            self.snake.insert(0, new_head)
            self.snake.pop()
    
    def check_collision(self):
        head = self.snake[0]
        if (
            head in self.snake[1:] or
            head[0] < 0 or
            head[0] >= GRID_WIDTH or
            head[1] < 0 or
            head[1] >= GRID_HEIGHT
        ):
            return True
        return False
    
    def restart_game(self):
        self.snake = [(GRID_WIDTH // 2, GRID_HEIGHT // 2)]
        self.direction = RIGHT
        self.food = self.spawn_food()
        self.score = 0
        self.speed = 100
        self.game_over = False
        self.canvas.delete("all")
        self.restart_button.config(state=tk.DISABLED)
        self.update()
        
    def update(self):
        if not self.game_over:
            if not self.check_collision():
                self.move()
                
                self.canvas.delete("all")
                
                for segment in self.snake:
                    x0, y0 = segment[0] * GRID_SIZE, segment[1] * GRID_SIZE
                    x1, y1 = x0 + GRID_SIZE, y0 + GRID_SIZE
                    self.canvas.create_rectangle(
                        x0, y0, x1, y1, fill=SNAKE_COLOR, outline="")
                
                x0, y0 = self.food[0] * GRID_SIZE, self.food[1] * GRID_SIZE
                x1, y1 = x0 + GRID_SIZE, y0 + GRID_SIZE
                self.canvas.create_oval(x0, y0, x1, y1, fill=FOOD_COLOR, outline="")
                
                self.canvas.create_text(
                    20, 20, text=f"Score: {self.score}", fill="white", anchor="nw")
                
                self.root.after(self.speed, self.update)
            else:
                self.game_over = True
                self.canvas.create_text(
                    WIDTH // 2, HEIGHT // 2,
                    text=f"Game Over! Score: {self.score}",
                    fill="white", font=("Helvetica", 20), anchor="center")
                self.restart_button.config(state=tk.NORMAL)
        else:
            self.restart_button.config(state=tk.NORMAL)

if __name__ == "__main__":
    root = tk.Tk()
    game = SnakeGame(root)
    root.mainloop()
