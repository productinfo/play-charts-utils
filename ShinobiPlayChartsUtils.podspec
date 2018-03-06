#
# Be sure to run `pod lib lint NAME.podspec' to ensure this is a
# valid spec and remove all comments before submitting the spec.
#
# To learn more about a Podspec see http://guides.cocoapods.org/syntax/podspec.html
#
Pod::Spec.new do |s|
  s.name             = "ShinobiPlayChartsUtils"
  s.version          = '1.1.0'
  s.summary          = "Files common to ShinobiPlay charts projects"
  s.description      = <<-DESC
                       Files common to ShinobiPlay charts projects, e.g. utility classes and base classes
                       DESC
  s.homepage         = "https://www.shinobicontrols.com"
  s.license          = 'Apache License, Version 2.0'
  s.author           = { "Alison Clarke" => "aclarke@scottlogic.co.uk" }
  s.source           = { :git => "https://github.com/ShinobiControls/play-charts-utils.git", :tag => s.version.to_s }
  s.social_media_url = 'https://twitter.com/shinobicontrols'
  s.platform     = :ios, '8.0'
  s.requires_arc = true
  s.source_files = 'ShinobiPlayChartsUtils/ShinobiPlayChartsUtils/**/*.{h,m}'
  s.dependency 'ShinobiPlayUtils'
  s.frameworks = 'QuartzCore', 'ShinobiCharts', 'OpenGLES', 'CoreText'
  s.libraries = 'c++'
  s.xcconfig     = { 'FRAMEWORK_SEARCH_PATHS' => '"$(DEVELOPER_FRAMEWORKS_DIR)"' }
end
