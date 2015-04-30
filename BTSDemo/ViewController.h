//
//  ViewController.h
//  BTSDemo
//
//  Created by A's macAir on 4/29/15.
//  Copyright (c) 2015 Abdoulaye Diallo. All rights reserved.
//

#import <UIKit/UIKit.h>


@interface ViewController : UIViewController


@property (weak, nonatomic) IBOutlet UITableView *tblView;



- (IBAction)startDownload:(id)sender;

- (IBAction)stopDownload:(id)sender;

- (IBAction)start:(id)sender;
- (IBAction)stop:(id)sender;
- (IBAction)initializeAll:(id)sender;
@end

