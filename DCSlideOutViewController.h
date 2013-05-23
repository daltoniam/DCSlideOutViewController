///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  DCSlideOutViewController.h
//
//  Created by Dalton Cherry on 4/25/13.
//  Copyright 2013 Basement Krew. All rights reserved.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#import <UIKit/UIKit.h>

@interface DCSlideOutViewController : UIViewController
{
    UIView* centerView;
    UIView* leftView;
    UIView* rightView;
    UIPanGestureRecognizer *swipe;
    CGFloat startSwipe;
    BOOL isCenterShowing;
    UITapGestureRecognizer* closeTap;
}

//your center controller that handles everything
@property(nonatomic,retain)UINavigationController* centerController;

//your left controller behind the center one
@property(nonatomic,retain)UIViewController* leftController;

//your right controller behind the center one
@property(nonatomic,retain)UIViewController* rightController;

//the amount you want the view to slide. Default is 265.
@property(nonatomic,assign)CGFloat slideOffset;

//this make the back left slide view only be as long as the slideOffset. Default is NO.
@property(nonatomic,assign)BOOL leftViewIsSlideLength;

//this allows if the view can be swipe open and closed. Default is YES.
@property(nonatomic,assign)BOOL canSwipeView;

//this allows if the view can be swipe open to the right. Default is YES.
@property(nonatomic,assign)BOOL canShowRight;

//this allows if the view can be swipe open to the Left. Default is YES.
@property(nonatomic,assign)BOOL canShowLeft;

//the left view is showing
@property(nonatomic,assign,readonly)BOOL isLeftShowing;

//the right view is showing
@property(nonatomic,assign,readonly)BOOL isRightShowing;

//show the left view
-(void)showLeftView;

//show the right view
-(void)showRightView;

//restore the center view postition
-(void)restoreCenterView;

//make the center view a new controller.
-(void)restoreWithNewCenterView:(UINavigationController*)navigationController;

//show the full left side for searching.
-(void)showFully:(BOOL)fully;

//factory to create slide out controller
+(DCSlideOutViewController*)slideOutController:(UINavigationController*)navBar left:(UIViewController*)left right:(UIViewController*)right;

//get the current slide view controller.
+(DCSlideOutViewController*)currentSlide;

@end