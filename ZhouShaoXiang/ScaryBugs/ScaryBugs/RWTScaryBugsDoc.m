//
//  RWTScaryBugsDoc.m
//  ScaryBugs
//
//  Created by ZhouShaoxiang on 14-11-3.
//  Copyright (c) 2014年 Rabiiit. All rights reserved.
//

#import "RWTScaryBugsDoc.h"
#import "RWTScaryBugsData.h"

@implementation RWTScaryBugsDoc

@synthesize data = _data;
@synthesize thumbimage = _thumbimage;
@synthesize fullimage = _fullimage;

- (id)initWithTitle:(NSString *)title rating:(float)rating thumbimage:(UIImage *)thumbimage fullimage:(UIImage *)fullimage{
    if((self = [super init])){
        self.data = [[RWTScaryBugsData alloc]initWithTitle:title rating:rating];
        self.thumbimage = thumbimage;
        self.fullimage = fullimage;
    }
    return self;
}

@end
