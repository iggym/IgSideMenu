//
//  IGGSideMenuRightViewController.m
//  IgSideMenu
//
//  Created by Iggy Mwangi on 6/23/13.
//  Copyright (c) 2013 Iggy Mwangi. All rights reserved.
//

#import "IGGSideMenuRightViewController.h"
#import "IGGSideMenuContainerViewController.h"

@interface IGGSideMenuRightViewController ()

@end

@implementation IGGSideMenuRightViewController

- (IGGSideMenuContainerViewController *)menuContainerViewController
{
    return (IGGSideMenuContainerViewController *)self.parentViewController;
}

- (id)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil
{
    self = [super initWithNibName:nibNameOrNil bundle:nibBundleOrNil];
    if (self) {
        // Custom initialization
    }
    return self;
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