//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ATVLegacyContentKit/NSObject-Protocol.h>

@class TVLListScrollerSplitViewController;
@protocol UIViewControllerAnimatedTransitioning;

@protocol TVLListScrollerSplitDelegate <NSObject>

@optional
- (id <UIViewControllerAnimatedTransitioning>)customAnimatorForDismissingListScrollerSplitViewController:(TVLListScrollerSplitViewController *)arg1;
- (_Bool)shouldDismissListScrollerSplitViewController:(TVLListScrollerSplitViewController *)arg1;
@end

