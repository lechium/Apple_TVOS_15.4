//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UITabBarController;

@interface _UITabBarControllerVisualStyle : NSObject
{
    UITabBarController *_tabBarController;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000cc6e0a
@property(readonly, nonatomic) __weak UITabBarController *tabBarController; // @synthesize tabBarController=_tabBarController;
- (_Bool)transitionFromViewController:(id)arg1 toViewController:(id)arg2 animated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000cc6dec
- (unsigned long long)defaultMaxItems;	// IMP=0x0000000000cc6de4
- (void)updateViewControllers:(_Bool)arg1;	// IMP=0x0000000000cc6dde
- (long long)tabBarPosition;	// IMP=0x0000000000cc6dd6
- (void)loadViews;	// IMP=0x0000000000cc6dd0
- (void)teardown;	// IMP=0x0000000000cc6dca
- (void)prepare;	// IMP=0x0000000000cc6dc4
- (id)initWithTabBarController:(id)arg1;	// IMP=0x0000000000cc6d60

@end
