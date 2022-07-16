//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <QuartzCore/CALayer.h>

#import <MediaToolbox/FigPiPableLayer-Protocol.h>

@interface FigBaseCALayer : CALayer <FigPiPableLayer>
{
    _Bool _preventsChangesToSublayerHierarchy;	// 8 = 0x8
}

+ (id)defaultActionForKey:(id)arg1;	// IMP=0x0000000000276373
@property(nonatomic) _Bool preventsChangesToSublayerHierarchy; // @synthesize preventsChangesToSublayerHierarchy=_preventsChangesToSublayerHierarchy;
- (void)setNeedsDisplay;	// IMP=0x000000000027682d
- (float)getDisplayScale;	// IMP=0x0000000000276800
- (id)getLayerDisplay;	// IMP=0x00000000002765de
- (void)removeFromSuperlayer;	// IMP=0x00000000002765af
- (void)replaceSublayer:(id)arg1 with:(id)arg2;	// IMP=0x0000000000276573
- (void)insertSublayer:(id)arg1 above:(id)arg2;	// IMP=0x0000000000276537
- (void)insertSublayer:(id)arg1 below:(id)arg2;	// IMP=0x0000000000276494
- (void)insertSublayer:(id)arg1 atIndex:(unsigned int)arg2;	// IMP=0x0000000000276458
- (void)addSublayer:(id)arg1;	// IMP=0x00000000002763bf
- (void)setSublayers:(id)arg1;	// IMP=0x0000000000276383
- (id)actionForKey:(id)arg1;	// IMP=0x000000000027637b
- (id)init;	// IMP=0x000000000027630e

@end

