//
//  AppDelegate.h
//  XcodeGitTest
//
//  Created by 贾欢 on 2020/6/2.
//  Copyright © 2020 jiahuan. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

