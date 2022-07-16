//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/CAAnimationDelegate-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface UIStatusBarQuietModeItemView <CAAnimationDelegate>
{
    _Bool _hideForAction;	// 8 = 0x8
    _Bool _registeredForNotifications;	// 9 = 0x9
    _Bool _inactive;	// 10 = 0xa
}

- (id)accessibilityHUDRepresentation;	// IMP=0x0000000000c1cc28
- (void)setVisible:(_Bool)arg1;	// IMP=0x0000000000c1cbca
- (double)_visibleAlpha;	// IMP=0x0000000000c1cba8
- (void)setVisible:(_Bool)arg1 frame:(struct CGRect)arg2 duration:(double)arg3;	// IMP=0x0000000000c1cb55
- (void)_triggerAction:(id)arg1;	// IMP=0x0000000000c1c4c9
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;	// IMP=0x0000000000c1c449
- (_Bool)updateForNewData:(id)arg1 actions:(int)arg2;	// IMP=0x0000000000c1c324
- (void)dealloc;	// IMP=0x0000000000c1c2af

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

