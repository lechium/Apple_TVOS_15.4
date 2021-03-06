//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PassKitCore/PKMicaLayer.h>

@class CAFilter, CALayer, NSString;

@interface PKPhoneGlyphLayer : PKMicaLayer
{
    CALayer *_QRCodeLayer;	// 8 = 0x8
    CAFilter *_QRCodeColorFilter;	// 16 = 0x10
    CALayer *_highlightLayer;	// 24 = 0x18
    struct CGPoint _highlightOffscreenPosition;	// 32 = 0x20
    struct CGPoint _highlightOnscreenPosition;	// 48 = 0x30
    NSString *_phoneWiggleAnimationKey;	// 64 = 0x40
    struct CGColor *_primaryColor;	// 72 = 0x48
    _Bool _showQRCode;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x0000000000010a44
@property(nonatomic) _Bool showQRCode; // @synthesize showQRCode=_showQRCode;
- (void)_endPhoneWiggle;	// IMP=0x0000000000010809
- (void)_startPhoneWiggle;	// IMP=0x0000000000010451
- (void)_restartPhoneWiggleIfNecessary;	// IMP=0x00000000000103cc
- (void)_applyEffectivePrimaryColorToQRCodeAnimated:(_Bool)arg1;	// IMP=0x0000000000010123
- (void)setPrimaryColor:(struct CGColor *)arg1 animated:(_Bool)arg2;	// IMP=0x000000000000fd09
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x000000000000fb48
- (void)layerDidBecomeVisible:(_Bool)arg1;	// IMP=0x000000000000fada
- (void)dealloc;	// IMP=0x000000000000fa99
- (void)layoutSublayers;	// IMP=0x000000000000f87c
- (id)initWithFrame:(struct CGRect)arg1 package:(id)arg2;	// IMP=0x000000000000f6e2
- (id)init;	// IMP=0x000000000000f5e0

@end

