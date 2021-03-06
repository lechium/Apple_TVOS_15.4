//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TVMLKit/NSObject-Protocol.h>

@class IKAppTabBar, UINavigationController, UIViewController;
@protocol IKAppNavigationController, _TVAppNavigationControllerDelegate;

@protocol TVAppRootViewController <NSObject>
@property(readonly, nonatomic) IKAppTabBar *appTabBar;
@property(readonly, nonatomic) id <IKAppNavigationController> appNavigationController;
@property(readonly, nonatomic) UIViewController *currentViewController;
@property(readonly, nonatomic) UINavigationController *currentNavigationController;
- (void)setAppNavigationControllersDelegate:(id <_TVAppNavigationControllerDelegate>)arg1;
@end

