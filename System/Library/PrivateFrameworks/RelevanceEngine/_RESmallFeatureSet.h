//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class REFeature;

@interface _RESmallFeatureSet
{
    REFeature *_features[3];	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000b294b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000b2940
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;	// IMP=0x00000000000b2904
- (id)allFeatures;	// IMP=0x00000000000b2859
- (_Bool)containsFeature:(id)arg1;	// IMP=0x00000000000b27c3
- (id)featureWithName:(id)arg1;	// IMP=0x00000000000b26f9
- (unsigned long long)count;	// IMP=0x00000000000b26d5
- (id)initWithFeatures:(id)arg1;	// IMP=0x00000000000b25e6
- (id)initWithFeature:(id)arg1;	// IMP=0x00000000000b2536
- (id)init;	// IMP=0x00000000000b251d

@end
