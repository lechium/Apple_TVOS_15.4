//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class MISSING_TYPE, NSArray;

__attribute__((visibility("hidden")))
@interface _TtC9SeymourUI33TVFilterOptionsListViewController : UIViewController
{
    MISSING_TYPE *layout;	// 8 = 0x8
    MISSING_TYPE *visibility;	// 80 = 0x50
    MISSING_TYPE *dependencies;	// 88 = 0x58
    MISSING_TYPE *lastFocusedIndexPath;	// 5861712 = 0x597150
    MISSING_TYPE *settlingTimer;	// 0 = 0x0
    MISSING_TYPE *timerProvider;	// 2 = 0x2
    MISSING_TYPE *optionsActionsHeightConstraint;	// 0 = 0x0
    MISSING_TYPE *optionsActionView;	// 1667719007 = 0x63675f5f
    MISSING_TYPE *titleLabel;	// 1953523043 = 0x74706563
    MISSING_TYPE *dataProvider;	// 1163157343 = 0x45545f5f
    MISSING_TYPE *metricPublishingDelegate;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x000000000005f2f0
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x000000000005f290
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x000000000005f220
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x000000000005f1b0
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000000005f170
- (void)handleActionButtonTapped;	// IMP=0x000000000005f0b0
- (void)menuButtonTapped;	// IMP=0x000000000005f080
- (void)viewDidLoad;	// IMP=0x000000000005ef10
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000005e6c0
@property(nonatomic, readonly) NSArray *preferredFocusEnvironments;

@end
