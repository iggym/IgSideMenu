//
//  IGGHomeScreenViewController.m
//  IgSideMenu
//
//  Created by Iggy Mwangi on 6/24/13.
//  Copyright (c) 2013 Iggy Mwangi. All rights reserved.
//

#import "IGGHomeScreenViewController.h"
#import "IGGSideMenuContainerViewController.h"

@interface IGGHomeScreenViewController ()

@end

@implementation IGGHomeScreenViewController

//- (id)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil
//{
//    self = [super initWithNibName:nibNameOrNil bundle:nibBundleOrNil];
//    if (self) {
//        // Custom initialization
//    }
//    return self;
//}

- (IGGSideMenuContainerViewController *)menuContainerViewController
{
    return (IGGSideMenuContainerViewController *)self.parentViewController;
}

- (IBAction)showLeftMenuPressed:(id)sender {
    [self.menuContainerViewController toggleLeftSideMenuCompletion:nil];
}

- (IBAction)showRightMenuPressed:(id)sender {
    [self.menuContainerViewController toggleRightSideMenuCompletion:nil];
}


- (void)viewDidLoad
{
    [super viewDidLoad];
	// Do any additional setup after loading the view.
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
