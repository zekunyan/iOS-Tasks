//
//  RWTScaryBugsDoc.h
//  ScaryBugs
//
//  Created by ZhouShaoxiang on 14-11-3.
//  Copyright (c) 2014年 Rabiiit. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@class RWTScaryBugsData;

@interface RWTScaryBugsDoc : NSObject

@property(strong) RWTScaryBugsData *data;
@property(strong) UIImage *thumbimage;
@property(strong) UIImage *fullimage;

- (id)initWithTitle:(NSString *)title rating:(float)rating thumbimage:(UIImage *)thumbimage fullimage:(UIImage *)fullimage;


@end
