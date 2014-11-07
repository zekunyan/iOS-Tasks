//
//  RWTScaryBugsData.m
//  ScaryBugs
//
//  Created by ZhouShaoxiang on 14-11-3.
//  Copyright (c) 2014年 Rabiiit. All rights reserved.
//

#import "RWTScaryBugsData.h"

@implementation RWTScaryBugsData

@synthesize title = _title;
@synthesize rateing = _rateing;

- (id)initWithTitle:(NSString *)title rating:(float)rating{
    if(self = [super init]){
        self.title = title;
        self.rateing = rating;
    }
    return self;
}

@end
