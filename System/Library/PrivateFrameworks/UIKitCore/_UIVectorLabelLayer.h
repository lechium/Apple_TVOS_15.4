//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <QuartzCore/CALayer.h>

#import <UIKitCore/CAAnimationDelegate-Protocol.h>
#import <UIKitCore/CALayerDelegate-Protocol.h>

@class NSArray, NSString, _UIVectorTextLayout;

__attribute__((visibility("hidden")))
@interface _UIVectorLabelLayer : CALayer <CALayerDelegate, CAAnimationDelegate>
{
    NSArray *_currentLayers;	// 8 = 0x8
    _UIVectorTextLayout *_currentTextLayout;	// 16 = 0x10
    unsigned long long _maxRenderedMoveDistance;	// 24 = 0x18
}

+ (void)initialize;	// IMP=0x0000000000fc16f1
- (void).cxx_destruct;	// IMP=0x0000000000fc3fff
@property(nonatomic) unsigned long long maxRenderedMoveDistance; // @synthesize maxRenderedMoveDistance=_maxRenderedMoveDistance;
- (id)_layersForTextLayout:(id)arg1;	// IMP=0x0000000000fc38d1
- (id)_findSimilarLayer:(id)arg1 inLayers:(id)arg2;	// IMP=0x0000000000fc324f
- (_Bool)_isPathCompatible:(struct CGPath *)arg1 with:(struct CGPath *)arg2;	// IMP=0x0000000000fc30d6
- (void)_transitionWithSetup:(CDUnknownBlockType)arg1 target:(CDUnknownBlockType)arg2;	// IMP=0x0000000000fc2fd7
- (void)_applyTextLayoutChangeFrom:(id)arg1 to:(id)arg2;	// IMP=0x0000000000fc1c38
- (void)_cleanupUnusedLayers;	// IMP=0x0000000000fc1a3c
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;	// IMP=0x0000000000fc18f1
- (void)didChangeValueForKey:(id)arg1;	// IMP=0x0000000000fc1818
- (void)willChangeValueForKey:(id)arg1;	// IMP=0x0000000000fc176f
- (id)init;	// IMP=0x0000000000fc171e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy, nonatomic) _UIVectorTextLayout *textLayout; // @dynamic textLayout;

@end

