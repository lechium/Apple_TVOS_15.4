//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface CRLineOutputRegion
{
}

+ (id)_lineWithChildren:(id)arg1 confidence:(int)arg2 quad:(id)arg3 baselineAngle:(double)arg4;	// IMP=0x000000000001bb48
+ (id)lineWithCharacters:(id)arg1 confidence:(int)arg2 quad:(id)arg3 baselineAngle:(double)arg4;	// IMP=0x000000000001b6da
+ (id)lineWithWords:(id)arg1 confidence:(int)arg2 quad:(id)arg3 baselineAngle:(double)arg4;	// IMP=0x000000000001b6c8
+ (id)lineWithText:(id)arg1 confidence:(int)arg2 quad:(id)arg3 baselineAngle:(double)arg4;	// IMP=0x000000000001b5ee
+ (id)lineWithTextFeature:(id)arg1 candidateIdx:(long long)arg2 subfeatureType:(unsigned long long)arg3 imageSize:(struct CGSize)arg4 confidenceThresholdProvider:(id)arg5 injectSpaceCharacter:(_Bool)arg6;	// IMP=0x000000000001a8ec
+ (id)lineWithTextFeature:(id)arg1 subfeatureType:(unsigned long long)arg2 imageSize:(struct CGSize)arg3 confidenceThresholdProvider:(id)arg4;	// IMP=0x000000000001a8ca
+ (id)lineWithTextFeature:(id)arg1 subfeatureType:(unsigned long long)arg2 imageSize:(struct CGSize)arg3 confidenceThresholdProvider:(id)arg4 injectSpaceCharacter:(_Bool)arg5;	// IMP=0x000000000001a691
- (id)joiningDelimeter;	// IMP=0x000000000001bb3b
- (unsigned long long)type;	// IMP=0x000000000001bb30
- (long long)wordCount;	// IMP=0x000000000001b938
- (id)contentBaselines;	// IMP=0x000000000001b6ec

@end
