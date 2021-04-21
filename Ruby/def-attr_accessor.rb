
class Game
  attr_accessor :price

  def initialize(title = 'LOL', price = 200)
    @title = title
    @price = price
  end

  def show()
    puts "Title: #{@title}"
    puts "Price: #{@price}"
  end
end

game = Game.new()
game.show()

puts 'Title is ' + game.respond_to?('title').to_s
puts 'Price is ' + game.respond_to?('price').to_s

# game.title = "OL"
game.price = 150
game.show()
