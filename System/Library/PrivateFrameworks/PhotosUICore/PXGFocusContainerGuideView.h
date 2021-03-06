//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <PhotosUICore/PXGReusableView-Protocol.h>

@class NSArray, PXGFocusContainerGuideViewConfiguration, UIFocusContainerGuide;

@interface PXGFocusContainerGuideView : UIView <PXGReusableView>
{
    UIFocusContainerGuide *_focusGuide;	// 8 = 0x8
    NSArray *_constraints;	// 16 = 0x10
    PXGFocusContainerGuideViewConfiguration *_userData;	// 24 = 0x18
    struct CGRect _clippingRect;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000016a647
@property(copy, nonatomic) PXGFocusContainerGuideViewConfiguration *userData; // @synthesize userData=_userData;
@property(nonatomic) struct CGRect clippingRect; // @synthesize clippingRect=_clippingRect;
- (void)prepareForReuse;	// IMP=0x000000000016a5e1
- (void)becomeReusable;	// IMP=0x000000000016a5db
- (void)didMoveToSuperview;	// IMP=0x000000000016a51d
- (void)willMoveToSuperview:(id)arg1;	// IMP=0x000000000016a488
- (_Bool)_isEligibleForFocusInteraction;	// IMP=0x000000000016a480
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000016a195

// Remaining properties
@property(readonly, nonatomic) _Bool shouldReuseWhenInvisible;

@end

