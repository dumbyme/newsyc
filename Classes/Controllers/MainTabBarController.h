//
//  MainTabBarController.h
//  newsyc
//
//  Created by Grant Paul on 3/30/11.
//  Copyright 2011 Xuzz Productions, LLC. All rights reserved.
//

#import "LoginController.h"

@interface MainTabBarController : UITabBarController <UIActionSheetDelegate, LoginControllerDelegate> {
    UIBarButtonItem *composeItem;
}

@end
