//
//  DetailViewController.h
//  MasterDetail
//
//  Created by jschatz on 3/18/14.
//  Copyright (c) 2014 jschatz. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
