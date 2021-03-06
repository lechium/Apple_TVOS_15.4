//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface SCNSourceRendererRegistry : NSObject
{
    struct __CFDictionary *_registry;	// 8 = 0x8
}

+ (id)sharedRegistry;	// IMP=0x000000000029a891
- (void)removeSourceRenderersForSource:(id)arg1;	// IMP=0x000000000029af1c
- (void)endFrameForEngineContext:(struct __C3DEngineContext *)arg1;	// IMP=0x000000000029adbe
- (void)removeSourceRenderersForEngineContext:(struct __C3DEngineContext *)arg1;	// IMP=0x000000000029ad81
- (id)sourceRendererForEngineContext:(struct __C3DEngineContext *)arg1 source:(id)arg2 textureSource:(id)arg3 targetTexture:(id)arg4;	// IMP=0x000000000029a922
- (void)rendererDidChange:(id)arg1;	// IMP=0x000000000029a8d6
- (void)dealloc;	// IMP=0x000000000029a852
- (id)init;	// IMP=0x000000000029a800

@end

