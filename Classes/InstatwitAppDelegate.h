//
//  InstatwitAppDelegate.h
//  Instatwit
//
//  Created by Matt Bishop on 12/13/10.
//  Copyright 2010 iphone App development club. All rights reserved.
//

#import <UIKit/UIKit.h>

@class InstatwitViewController;

@interface InstatwitAppDelegate : NSObject <UIApplicationDelegate> {
    UIWindow *window;
    InstatwitViewController *viewController;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet InstatwitViewController *viewController;

@end

