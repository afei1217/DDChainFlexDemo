
Pod::Spec.new do |s|

  s.name         = "DDChainFlex"
  s.version      = "0.0.2"
  s.summary      = "常用UI控件的链式调用"

  s.description  = <<-DESC
                        开发中常用UI的链式调用 目前实现的有 view、button、label imageView、switch、textField、textView、scrollView、tableView、collectionView。
                   DESC

  s.homepage     = "https://github.com/chenyongfei/DDChainFlexDemo"
  s.license      = "MIT"

  s.author             = { "afei" => "2511433510@qq.com" }

  s.source       = { :git => "https://github.com/chenyongfei/DDChainFlexDemo.git", :tag => "0.0.2" }


  s.source_files  = "DDChainFlex/**/*.{h,m}"
#s.public_header_files = "DDChainFlex/DDChainFlex.h"

  s.frameworks ='UIKit'
  s.platform     = :ios, '7.0' 
  s.requires_arc = true

end
