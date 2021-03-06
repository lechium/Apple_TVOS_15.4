//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class NSString, TVSMButtonGridCollectionViewController, TVSMClockViewController, UIView;

@interface TVSMButtonGridContainerViewController : UIViewController
{
    TVSMButtonGridCollectionViewController *_collectionViewController;	// 8 = 0x8
    TVSMClockViewController *_clockViewController;	// 16 = 0x10
    UIView *_effectView;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000023310
@property(readonly, nonatomic) UIView *effectView; // @synthesize effectView=_effectView;
- (id)clockViewController;	// IMP=0x00100000000232d0
@property(readonly, nonatomic) TVSMButtonGridCollectionViewController *collectionViewController; // @synthesize collectionViewController=_collectionViewController;
- (struct CGRect)untransformedPlatterFrameInCoordinateSpace:(id)arg1;	// IMP=0x0010000000022ff0
@property(readonly, nonatomic) struct CGRect selectedCellFrame;
- (id)preferredFocusEnvironments;	// IMP=0x0010000000022f00
- (_Bool)definesPresentationContext;	// IMP=0x0010000000022ee0
- (void)viewDidLoad;	// IMP=0x00100000000223b0
- (void)initialAnimationDidFinish;	// IMP=0x0010000000022370
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x0010000000022240

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

