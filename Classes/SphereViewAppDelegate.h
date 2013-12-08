//
//  SphereViewAppDelegate.h
//  SphereViewSample
//
//  Created by Zhao Yiqi on 13-12-8.
//  Copyright (c) 2013年 Zhao Yiqi. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SampleViewController.h"

@interface SphereViewSampleAppDelegate : NSObject <UIApplicationDelegate> {
    UIWindow *window;
	
	SampleViewController *viewController;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;

@end

