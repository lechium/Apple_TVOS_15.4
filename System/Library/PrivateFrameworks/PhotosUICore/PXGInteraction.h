//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PXGLayout, PXScrollViewController, UIView;
@protocol PXGHitTestEnvironment;

@interface PXGInteraction : NSObject
{
    PXGLayout *_layout;	// 8 = 0x8
    UIView<PXGHitTestEnvironment> *_view;	// 16 = 0x10
    PXScrollViewController *_scrollViewController;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000005d5055
@property(nonatomic) __weak PXScrollViewController *scrollViewController; // @synthesize scrollViewController=_scrollViewController;
@property(nonatomic) __weak UIView<PXGHitTestEnvironment> *view; // @synthesize view=_view;
@property(nonatomic) __weak PXGLayout *layout; // @synthesize layout=_layout;
- (void)scrollViewControllerDidChange;	// IMP=0x00000000005d500d
- (void)viewDidChange;	// IMP=0x00000000005d5007
- (void)viewWillChange;	// IMP=0x00000000005d5001
- (void)layoutDidChange;	// IMP=0x00000000005d4ffb

@end

