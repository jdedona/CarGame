//
//  AppDelegate.h
//  CarGame
//
//  Created by Jayme DeDona on 11/27/11.
//  Copyright Tiny Co 2011. All rights reserved.
//

#import <UIKit/UIKit.h>

@class RootViewController;

@interface AppDelegate : NSObject <UIApplicationDelegate> {
	UIWindow			*window;
	RootViewController	*viewController;
}

@property (nonatomic, retain) UIWindow *window;

@end
