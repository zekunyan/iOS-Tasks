//
//  RWTScaryBugsData.h
//  ScaryBugs
//
//  Created by ZhouShaoxiang on 14-11-3.
//  Copyright (c) 2014年 Rabiiit. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface RWTScaryBugsData : NSObject

@property (strong)NSString *title;
@property (assign)float rateing;

- (id)initWithTitle:(NSString *) title rating:(float)rating;

@end
