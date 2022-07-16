//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface SUICGLIndexCacheEntry : NSObject
{
    unsigned int _numAuraIndices;	// 8 = 0x8
    unsigned int _numAuraIndicesCulled;	// 12 = 0xc
    unsigned int _numWaveIndices;	// 16 = 0x10
    unsigned int *_gl_indices;	// 24 = 0x18
}

@property(nonatomic) unsigned int *gl_indices; // @synthesize gl_indices=_gl_indices;
@property(nonatomic) unsigned int numWaveIndices; // @synthesize numWaveIndices=_numWaveIndices;
@property(nonatomic) unsigned int numAuraIndicesCulled; // @synthesize numAuraIndicesCulled=_numAuraIndicesCulled;
@property(nonatomic) unsigned int numAuraIndices; // @synthesize numAuraIndices=_numAuraIndices;
- (void)dealloc;	// IMP=0x00000000000081c8

@end
