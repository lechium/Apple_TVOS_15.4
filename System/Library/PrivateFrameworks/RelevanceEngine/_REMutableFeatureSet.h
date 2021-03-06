//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableSet;

@interface _REMutableFeatureSet
{
    NSMutableSet *_names;	// 8 = 0x8
    NSMutableSet *_features;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000b3d42
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;	// IMP=0x00000000000b3d25
- (void)removeAllFeatures;	// IMP=0x00000000000b3cdc
- (void)removeFeature:(id)arg1;	// IMP=0x00000000000b3c3a
- (void)addFeature:(id)arg1;	// IMP=0x00000000000b3b97
- (_Bool)containsFeature:(id)arg1;	// IMP=0x00000000000b3b7a
- (id)featureWithName:(id)arg1;	// IMP=0x00000000000b39ae
- (unsigned long long)count;	// IMP=0x00000000000b3991
- (id)initWithCapacity:(unsigned long long)arg1;	// IMP=0x00000000000b38d9
- (id)initWithFeature:(id)arg1;	// IMP=0x00000000000b37e9
- (id)initWithFeatures:(id)arg1;	// IMP=0x00000000000b34dd
- (id)init;	// IMP=0x00000000000b34c9

@end

