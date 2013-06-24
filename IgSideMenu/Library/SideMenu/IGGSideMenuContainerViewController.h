//
//  IGGSideMenuContainerViewController.h
//  IgSideMenu
//
//  Created by Iggy Mwangi on 6/23/13.
//  Copyright (c) 2013 Iggy Mwangi. All rights reserved.
//

#import <UIKit/UIKit.h>

extern NSString * const IGGSideMenuStateNotificationEvent;

typedef enum {
    IGGSideMenuPanModeNone = 0, // pan disabled
    IGGSideMenuPanModeCenterViewController = 1 << 0, // enable panning on the centerViewController
    IGGSideMenuPanModeSideMenu = 1 << 1, // enable panning on side menus
    IGGSideMenuPanModeDefault = IGGSideMenuPanModeCenterViewController | IGGSideMenuPanModeSideMenu
} IGGSideMenuPanMode;

typedef enum {
    IGGSideMenuStateClosed, // the menu is closed
    IGGSideMenuStateLeftMenuOpen, // the left-hand menu is open
    IGGSideMenuStateRightMenuOpen // the right-hand menu is open
} IGGSideMenuState;

typedef enum {
    IGGSideMenuStateEventMenuWillOpen, // the menu is going to open
    IGGSideMenuStateEventMenuDidOpen, // the menu finished opening
    IGGSideMenuStateEventMenuWillClose, // the menu is going to close
    IGGSideMenuStateEventMenuDidClose // the menu finished closing
} IGGSideMenuStateEvent;



@interface IGGSideMenuContainerViewController : UIViewController
+ (IGGSideMenuContainerViewController *)containerWithCenterViewController:(id)centerViewController
                                                  leftMenuViewController:(id)leftMenuViewController
                                                 rightMenuViewController:(id)rightMenuViewController;

@property (nonatomic, strong) id centerViewController;
@property (nonatomic, strong) UIViewController *leftMenuViewController;
@property (nonatomic, strong) UIViewController *rightMenuViewController;

@property (nonatomic, assign) IGGSideMenuState menuState;
@property (nonatomic, assign) IGGSideMenuPanMode panMode;

// menu open/close animation duration -- user can pan faster than default duration, max duration sets the limit
@property (nonatomic, assign) CGFloat menuAnimationDefaultDuration;
@property (nonatomic, assign) CGFloat menuAnimationMaxDuration;

// width of the side menus
@property (nonatomic, assign) CGFloat menuWidth;
@property (nonatomic, assign) CGFloat leftMenuWidth;
@property (nonatomic, assign) CGFloat rightMenuWidth;

// shadow
@property (nonatomic, assign) BOOL shadowEnabled;
@property (nonatomic, assign) CGFloat shadowRadius;
@property (nonatomic, assign) CGFloat shadowOpacity;
@property (nonatomic, strong) UIColor *shadowColor;

// menu slide-in animation
@property (nonatomic, assign) BOOL menuSlideAnimationEnabled;
@property (nonatomic, assign) CGFloat menuSlideAnimationFactor; // higher = less menu movement on animation


- (void)toggleLeftSideMenuCompletion:(void (^)(void))completion;
- (void)toggleRightSideMenuCompletion:(void (^)(void))completion;
- (void)setMenuState:(IGGSideMenuState)menuState completion:(void (^)(void))completion;
- (void)setMenuWidth:(CGFloat)menuWidth animated:(BOOL)animated;
- (void)setLeftMenuWidth:(CGFloat)leftMenuWidth animated:(BOOL)animated;
- (void)setRightMenuWidth:(CGFloat)rightMenuWidth animated:(BOOL)animated;

@end
