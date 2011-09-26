//
//  hello_worldAppDelegate.h
//  hello world
//
//  Created by App on 2011/9/26.
//  Copyright 2011年 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class hello_worldViewController;

@interface hello_worldAppDelegate : NSObject <UIApplicationDelegate> {

}

@property (nonatomic, retain) IBOutlet UIWindow *window;

@property (nonatomic, retain) IBOutlet hello_worldViewController *viewController;

@end
