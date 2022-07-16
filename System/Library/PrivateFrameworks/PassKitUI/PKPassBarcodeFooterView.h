//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PassKitUI/PKForegroundActiveArbiterObserver-Protocol.h>

@class NSString;

@interface PKPassBarcodeFooterView <PKForegroundActiveArbiterObserver>
{
    _Bool _visible;	// 8 = 0x8
    _Bool _needsAuthentication;	// 9 = 0x9
    _Bool _authenticated;	// 10 = 0xa
    _Bool _foregroundActive;	// 11 = 0xb
}

- (void)foregroundActiveArbiter:(id)arg1 didUpdateForegroundActiveState:(CDStruct_973bafd3)arg2;	// IMP=0x0000000000320708
- (void)setDelegate:(id)arg1;	// IMP=0x0000000000320674
- (void)_authenticateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000320611
- (void)_didInvalidate;	// IMP=0x00000000003205e2
- (void)didBecomeHiddenAnimated:(_Bool)arg1;	// IMP=0x00000000003205a6
- (void)willBecomeVisibleAnimated:(_Bool)arg1;	// IMP=0x0000000000320462
- (void)layoutSubviews;	// IMP=0x0000000000320396
- (id)initWithPass:(id)arg1;	// IMP=0x000000000032033a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

