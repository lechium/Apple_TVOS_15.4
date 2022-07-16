//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVVideoCompositionCoreAnimationToolInternal;

@interface AVVideoCompositionCoreAnimationTool : NSObject
{
    AVVideoCompositionCoreAnimationToolInternal *_videoCompositionTool;	// 8 = 0x8
}

+ (id)videoCompositionCoreAnimationToolWithPostProcessingAsVideoLayers:(id)arg1 inLayer:(id)arg2;	// IMP=0x00000000000b7050
+ (id)videoCompositionCoreAnimationToolWithPostProcessingAsVideoLayer:(id)arg1 inLayer:(id)arg2;	// IMP=0x00000000000b6ff7
+ (id)videoCompositionCoreAnimationToolWithAdditionalLayer:(id)arg1 asTrackID:(int)arg2;	// IMP=0x00000000000b6fc2
- (id)_postProcessingVideoLayers;	// IMP=0x00000000000b716f
- (id)_postProcessingRootLayer;	// IMP=0x00000000000b7156
- (_Bool)_hasPostProcessingLayers;	// IMP=0x00000000000b7139
- (int)_auxiliaryTrackID;	// IMP=0x00000000000b7123
- (id)_auxiliaryTrackLayer;	// IMP=0x00000000000b710a
- (_Bool)_hasLayerAsAuxiliaryTrack;	// IMP=0x00000000000b70ed
- (void)dealloc;	// IMP=0x00000000000b7086
- (id)initWithMagicTrackID:(int)arg1 animationLayer:(id)arg2 videoLayers:(id)arg3;	// IMP=0x00000000000b6f06

@end
