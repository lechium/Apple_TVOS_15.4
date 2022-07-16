//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/_UIStatusBarPersistentAnimation-Protocol.h>

@class CAShapeLayer, NSString;

__attribute__((visibility("hidden")))
@interface _UIStatusBarActivityIconView <_UIStatusBarPersistentAnimation>
{
    _Bool _ringing;	// 112 = 0x70
    double _ringingIconScale;	// 120 = 0x78
    CAShapeLayer *_innerRingShapeLayer;	// 128 = 0x80
    CAShapeLayer *_outerRingShapeLayer;	// 136 = 0x88
}

- (void).cxx_destruct;	// IMP=0x0000000000ce186d
@property(retain, nonatomic) CAShapeLayer *outerRingShapeLayer; // @synthesize outerRingShapeLayer=_outerRingShapeLayer;
@property(retain, nonatomic) CAShapeLayer *innerRingShapeLayer; // @synthesize innerRingShapeLayer=_innerRingShapeLayer;
- (struct UIEdgeInsets)alignmentRectInsets;	// IMP=0x0000000000ce1784
- (void)setRinging:(_Bool)arg1 forUpdate:(id)arg2;	// IMP=0x0000000000ce16df
- (void)resumePersistentAnimation;	// IMP=0x0000000000ce1261
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;	// IMP=0x0000000000ce115c
- (void)applyStyleAttributes:(id)arg1;	// IMP=0x0000000000ce0f63
- (void)layoutSubviews;	// IMP=0x0000000000ce0e4d
- (void)_teardownRingingLayers;	// IMP=0x0000000000ce0dc7
- (void)_setupRingingLayersForStyleAttributes:(id)arg1;	// IMP=0x0000000000ce0928

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

