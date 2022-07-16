//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface PFVideoAdjustments
{
    float _slowMotionRate;	// 8 = 0x8
    CDStruct_e83c9415 _slowMotionTimeRange;	// 12 = 0xc
}

+ (id)defaultVideoAdjustmentsURLForVideoURL:(id)arg1;	// IMP=0x000000000006998e
+ (_Bool)isRecognizedSlowMotionFormatWithIdentifier:(id)arg1 version:(id)arg2;	// IMP=0x0000000000069f89
+ (float)defaultSlowMotionRateForNominalFrameRate:(float)arg1;	// IMP=0x0000000000069f55
+ (CDStruct_e83c9415)defaultSlowMotionTimeRangeForDuration:(CDStruct_1b6d18a9)arg1;	// IMP=0x0000000000069e50
+ (id)defaultSlowMotionAdjustmentsForAsset:(id)arg1;	// IMP=0x0000000000069d11
@property(nonatomic) CDStruct_e83c9415 slowMotionTimeRange; // @synthesize slowMotionTimeRange=_slowMotionTimeRange;
@property(nonatomic) float slowMotionRate; // @synthesize slowMotionRate=_slowMotionRate;
- (id)_adjustmentsObjectFromNSKeyedArchiverData:(id)arg1;	// IMP=0x000000000006974c
- (id)_dictionaryFromSlowMotionTimeRange:(CDStruct_e83c9415)arg1 rate:(float)arg2;	// IMP=0x0000000000069584
- (_Bool)_parseAppleVideoDataBlobDictionary:(id)arg1 forSlowMotionTimeRange:(CDStruct_e83c9415 *)arg2 rate:(float *)arg3;	// IMP=0x0000000000069270
- (_Bool)_parseVersionedDataForSlowMotionTimeRange:(CDStruct_e83c9415 *)arg1 rate:(float *)arg2;	// IMP=0x0000000000069044
- (_Bool)_parseLegacySLMDictionary:(id)arg1 forSlowMotionTimeRange:(CDStruct_e83c9415 *)arg2 rate:(float *)arg3;	// IMP=0x0000000000068d5a
- (void)_updateDerivedPropertiesFromVersionedData;	// IMP=0x0000000000068c96
- (_Bool)isRecognizedFormat;	// IMP=0x0000000000068c14
- (id)description;	// IMP=0x0000000000068ab8
- (id)initWithPropertyListDictionary:(id)arg1;	// IMP=0x00000000000689bb
- (_Bool)hasSlowMotionAdjustments;	// IMP=0x0000000000069c27
- (_Bool)_isValidSlowMotionTimeRange:(CDStruct_e83c9415)arg1 rate:(float)arg2;	// IMP=0x0000000000069be3
- (id)initWithSlowMotionTimeRange:(CDStruct_e83c9415)arg1 rate:(float)arg2;	// IMP=0x0000000000069ac3
- (CDStruct_1b6d18a9)convertToOriginalTimeFromScaledTime:(CDStruct_1b6d18a9)arg1 forExport:(_Bool)arg2;	// IMP=0x0000000000069cf9
- (CDStruct_1b6d18a9)convertToScaledTimeFromOriginalTime:(CDStruct_1b6d18a9)arg1 forExport:(_Bool)arg2;	// IMP=0x0000000000069ce1
@property(readonly, nonatomic) CDStruct_e83c9415 slowMotionRampOut;
@property(readonly, nonatomic) CDStruct_e83c9415 slowMotionRampIn;

@end
