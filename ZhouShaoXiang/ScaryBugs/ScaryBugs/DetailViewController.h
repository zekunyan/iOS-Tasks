//
//  DetailViewController.h
//  ScaryBugs
//
//  Created by ZhouShaoxiang on 14-11-3.
//  Copyright (c) 2014年 Rabiiit. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

