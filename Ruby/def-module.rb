module BaseFunc
  Version = "0.0.1"

  def v
    return Version
  end

  def add(a, b)
    return a + b
  end

  def self.showVersion
    return Version
  end

  # 将 v 方法定义为静态方法
  module_function :v

end

puts BaseFunc::Version
puts BaseFunc.showVersion
puts BaseFunc::showVersion
puts BaseFunc.v
# puts BaseFunc.add(10, 30)

puts "\n"

class BaseClass include BaseFunc

end

puts BaseClass::Version
# puts BaseClass.showVersion
# puts BaseClass.v

myCls = BaseClass.new
puts myCls.add(10, 20)
