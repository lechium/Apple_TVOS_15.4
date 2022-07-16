//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface SCNCommonProfileProgramGenerator : NSObject
{
    struct os_unfair_lock_s _programMutex;	// 8 = 0x8
    struct __CFDictionary *_shaders;	// 16 = 0x10
    struct __CFDictionary *_trackedResourcesToHashcode;	// 24 = 0x18
}

+ (id)deferredGeneratorWithProfile:(int)arg1;	// IMP=0x0000000000263723
+ (id)generatorWithProfile:(int)arg1 allowingHotReload:(_Bool)arg2;	// IMP=0x0000000000263677
- (void)releaseProgramForResource:(id)arg1;	// IMP=0x0000000000263a13
- (struct __C3DFXProgram *)programWithHashCode:(struct __C3DProgramHashCode *)arg1 engineContext:(struct __C3DEngineContext *)arg2 trackedResource:(id)arg3 introspectionDataPtr:(void *)arg4;	// IMP=0x0000000000263788
- (void)emptyShaderCache;	// IMP=0x0000000000263656
@property(readonly, nonatomic) int profile;
- (void)dealloc;	// IMP=0x00000000002635a8
- (id)init;	// IMP=0x0000000000263490

@end

