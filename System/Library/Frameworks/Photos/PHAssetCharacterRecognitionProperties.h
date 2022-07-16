//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSDate;

@interface PHAssetCharacterRecognitionProperties
{
    NSData *_characterRecognitionData;	// 16 = 0x10
    NSData *_machineReadableCodeData;	// 24 = 0x18
    long long _algorithmVersion;	// 32 = 0x20
    NSDate *_adjustmentVersion;	// 40 = 0x28
}

+ (id)keyPathFromPrimaryObject;	// IMP=0x00000000000e83f3
+ (id)entityName;	// IMP=0x00000000000e83e6
+ (id)propertiesToFetch;	// IMP=0x00000000000e83c2
+ (id)propertySetName;	// IMP=0x00000000000e83b5
- (void).cxx_destruct;	// IMP=0x00000000000e8373
@property(readonly, nonatomic) NSDate *adjustmentVersion; // @synthesize adjustmentVersion=_adjustmentVersion;
@property(readonly, nonatomic) long long algorithmVersion; // @synthesize algorithmVersion=_algorithmVersion;
@property(readonly, nonatomic) NSData *machineReadableCodeData; // @synthesize machineReadableCodeData=_machineReadableCodeData;
@property(readonly, nonatomic) NSData *characterRecognitionData; // @synthesize characterRecognitionData=_characterRecognitionData;
@property(readonly, nonatomic) NSData *data;
- (id)initWithFetchDictionary:(id)arg1 asset:(id)arg2 prefetched:(_Bool)arg3;	// IMP=0x00000000000e810a

@end

