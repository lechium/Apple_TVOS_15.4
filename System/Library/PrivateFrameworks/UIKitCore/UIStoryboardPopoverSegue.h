//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, UIBarButtonItem, UIPopoverController, UIView;

@interface UIStoryboardPopoverSegue
{
    UIPopoverController *_popoverController;	// 8 = 0x8
    NSArray *_passthroughViews;	// 16 = 0x10
    unsigned long long _permittedArrowDirections;	// 24 = 0x18
    UIView *_anchorView;	// 32 = 0x20
    UIBarButtonItem *_anchorBarButtonItem;	// 40 = 0x28
    struct CGRect _anchorRect;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000cc6838
@property(nonatomic, setter=_setAnchorRect:) struct CGRect _anchorRect; // @synthesize _anchorRect;
@property(retain, nonatomic, setter=_setAnchorBarButtonItem:) UIBarButtonItem *_anchorBarButtonItem; // @synthesize _anchorBarButtonItem;
@property(retain, nonatomic, setter=_setAnchorView:) UIView *_anchorView; // @synthesize _anchorView;
@property(nonatomic, setter=_setPermittedArrowDirections:) unsigned long long _permittedArrowDirections; // @synthesize _permittedArrowDirections;
@property(copy, nonatomic, setter=_setPassthroughViews:) NSArray *_passthroughViews; // @synthesize _passthroughViews;
- (void)perform;	// IMP=0x0000000000cc6525
@property(readonly, nonatomic) UIPopoverController *popoverController; // @synthesize popoverController=_popoverController;

@end

