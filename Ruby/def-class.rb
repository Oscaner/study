# Define ======================================= #

class Player
  def initialize(name = 'Oscaner')
    @name = name
  end

  def show()
    puts "player: #{@name}"
  end
end

oscaner = Player.new()
oscaner.show()

curry = Player.new('Curry')
curry.show()

harden = Player.new('Harden')
harden.show()

# instance_methods ================================ #

puts "\ninstance_methods"

class Game
  def initialize(title = 'LOL', price = 200)
    @title = title
    @price = price
  end

  def show()
    puts "Title: #{@title}"
    puts "Price: #{@price}"
  end

  def show2()

  end

  def show3()

  end

  def self.toStr
    puts 'I love this game.'
  end
end

puts Game.instance_methods(false)

# respond_to?/send ================================ #

puts "\nespond_to?/send"

mario = Game.new('超级马里奥', 350)

if mario.respond_to?('show')
  mario.send('show')
end

# self ================================ #

# mario.toStr
Game.toStr
Game::toStr
