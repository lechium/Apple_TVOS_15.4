//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CRScriptIdentificationUtils : NSObject
{
}

+ (void)computeTextFeatureScriptCategory:(id)arg1 scriptMap:(const void *)arg2 scriptMapFullTile:(const void *)arg3 withScaleIds:(const void *)arg4 latinChineseRatioThreshold:(float)arg5;	// IMP=0x00000000000668a4
+ (void)computeSingleTextFeatureScriptCategory:(id)arg1 scriptMap:(const void *)arg2 latinChineseRatioThreshold:(float)arg3;	// IMP=0x0000000000065ddc
+ (void)assignScriptCategory:(id)arg1 probability:(void *)arg2 assignedIndex:(long long)arg3 scriptCount:(vector_7697e86b)arg4;	// IMP=0x00000000000659be
+ (long long)computeAssignedIndex:(void *)arg1 latinChineseRatioThreshold:(float)arg2;	// IMP=0x0000000000065805
+ (vector_1c901d52)getBufferData:(const void *)arg1;	// IMP=0x000000000006567a
+ (vector_1f6c974b)createMapsFromMLMultiArray:(id)arg1 size:(struct CGSize)arg2;	// IMP=0x00000000000653b2
+ (vector_1f6c974b)createMaps:(struct CGSize)arg1 channels:(long long)arg2;	// IMP=0x00000000000652a6

@end

