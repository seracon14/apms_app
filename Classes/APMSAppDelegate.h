//
//  APMSAppDelegate.h
//  APMS
//
//  Created by Sergio Contreras on 5/31/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CamViewController.h"

@interface APMSAppDelegate : NSObject <UIApplicationDelegate> {
    
    UIWindow *window;
	CamViewController *this_view;
	BOOL is_st_available;

}

@property (nonatomic, retain) IBOutlet UIWindow *window;



@end

