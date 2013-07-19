# DCSlideOutViewController #

Does the center slide view thing as seen in Path app.

# Dependancies #

Requires Quartz framework. 

# Example #

	UINavigationController* navBar = [[UINavigationController alloc] initWithRootViewController:[[YourCenterViewController alloc] init]];
	DCSlideOutViewController* slide = [DCSlideOutViewController slideOutController:navBar
	                                                                          left:[[YourLeftViewController alloc] init]
	                                                                         right:[[YourRightViewController alloc] init];
	slide.leftViewIsSlideLength = YES;
	self.window.rootViewController = slide;
	
then in your main view controller I recommend you add something like this:

	self.navigationItem.leftBarButtonItem = [UIBarButtonItem customButtonWithImage:[UIImage imageNamed:@"show_left"] target:self selector:@selector(openLeft)];
    self.navigationItem.rightBarButtonItem = [UIBarButtonItem customButtonWithImage:[UIImage imageNamed:@"show_right"] target:self selector:@selector(openRight)];

	/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	-(void)openLeft
	{
	    DCSlideOutViewController* slide = [DCSlideOutViewController currentSlide];
	    [slide showLeftView];
	}
	/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	-(void)openRight
	{
	    DCSlideOutViewController* slide = [DCSlideOutViewController currentSlide];
	    [slide showRightView];
	}
	
# Requirements #

This framework requires at least iOS 5 above. 

# Install #

The recommended approach for installing DCSlideOutViewController is via the CocoaPods package manager, as it provides flexible dependency management and dead simple installation.

via CocoaPods

Install CocoaPods if not already available:

	$ [sudo] gem install cocoapods
	$ pod setup
Change to the directory of your Xcode project, and Create and Edit your Podfile and add RestKit:

	$ cd /path/to/MyProject
	$ touch Podfile
	$ edit Podfile
	platform :ios, '5.0' 
	pod 'DCSlideOutViewController'

Install into your project:

	$ pod install
	
Open your project in Xcode from the .xcworkspace file (not the usual project file)

# License #

DCSlideOutViewController is license under the Apache License.

# Contact #

### Dalton Cherry ###
* https://github.com/daltoniam
* http://twitter.com/daltoniam
