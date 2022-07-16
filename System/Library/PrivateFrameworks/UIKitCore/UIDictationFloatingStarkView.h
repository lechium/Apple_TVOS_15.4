//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIGestureRecognizerDelegate-Protocol.h>

@class NSString, UIDimmingView;

__attribute__((visibility("hidden")))
@interface UIDictationFloatingStarkView <UIGestureRecognizerDelegate>
{
    UIDimmingView *_dimmingView;	// 64 = 0x40
}

- (void)endpointButtonPressed;	// IMP=0x000000000090f581
- (void)show;	// IMP=0x000000000090f3fa
- (struct CGPoint)positionForShow;	// IMP=0x000000000090f3d7
- (void)returnToKeyboard;	// IMP=0x000000000090f1d7
- (void)dimmingViewWasTapped:(id)arg1;	// IMP=0x000000000090f1a5
- (void)setInputViewsHiddenForDictation:(_Bool)arg1;	// IMP=0x000000000090f026
- (void)setState:(int)arg1;	// IMP=0x000000000090ecdd
- (void)prepareForReturnToKeyboard;	// IMP=0x000000000090ec75
- (void)finishReturnToKeyboard;	// IMP=0x000000000090ec36
- (void)layoutSubviews;	// IMP=0x000000000090e9fc
- (void)dealloc;	// IMP=0x000000000090e9b0
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000090e68b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

