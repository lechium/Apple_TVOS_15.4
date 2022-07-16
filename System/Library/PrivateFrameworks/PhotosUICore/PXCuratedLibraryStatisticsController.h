//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface PXCuratedLibraryStatisticsController : NSObject
{
    struct _PXLayoutGeometry *_resuableLayoutGeometries;	// 8 = 0x8
    long long _reusableLayoutGeometriesCapacity;	// 16 = 0x10
}

+ (id)defaultController;	// IMP=0x00000000001b119f
- (struct _PXLayoutGeometry *)_layoutGeometryBufferWithCount:(long long)arg1;	// IMP=0x00000000001b0dad
- (void)_enumerateDaysSectionsForViewModel:(id)arg1 extendedTraitCollection:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000000001b0968
- (void)collectStatisticsForViewModel:(id)arg1 extendedTraitCollection:(id)arg2 resultHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000001b07eb
- (void)dealloc;	// IMP=0x00000000001b07b1

@end

