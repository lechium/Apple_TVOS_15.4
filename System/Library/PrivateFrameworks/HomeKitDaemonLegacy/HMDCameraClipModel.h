//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitBackingStore/HMBModel.h>

@class HMBStreamingAsset, NSArray, NSData, NSDate, NSNumber, NSString;

@interface HMDCameraClipModel : HMBModel
{
}

+ (id)qualityPredicate;	// IMP=0x0000000000a70996
+ (id)countOfClipsWithQualityBetweenDatesQuery;	// IMP=0x0000000000a70933
+ (id)clipsWithQualityBetweenDatesDescendingQuery;	// IMP=0x0000000000a708d0
+ (id)clipsWithQualityBetweenDatesAscendingQuery;	// IMP=0x0000000000a7086d
+ (id)clipsBeforeDateQuery;	// IMP=0x0000000000a7083d
+ (id)clipsWithNeedsUploadFeedbackStatusQuery;	// IMP=0x0000000000a7080d
+ (id)incompleteClipsQuery;	// IMP=0x0000000000a707dd
+ (id)sentinelParentUUID;	// IMP=0x0000000000a707ad
+ (id)hmbQueries;	// IMP=0x0000000000a7065b
+ (id)hmbExternalRecordType;	// IMP=0x0000000000a7064e
+ (id)hmbProperties;	// IMP=0x0000000000a7061e
@property long long quality;
@property unsigned long long feedbackStatus;
- (id)createClipWithSignificantEvents:(id)arg1;	// IMP=0x0000000000a71a1c

// Remaining properties
@property(retain, nonatomic) NSNumber *duration; // @dynamic duration;
@property(retain, nonatomic) NSData *encryptionKey; // @dynamic encryptionKey;
@property(retain, nonatomic) NSNumber *encryptionScheme; // @dynamic encryptionScheme;
@property(retain, nonatomic) NSNumber *feedbackStatusField; // @dynamic feedbackStatusField;
@property(retain, nonatomic) NSNumber *isComplete; // @dynamic isComplete;
@property(retain, nonatomic) NSNumber *maximumClipDuration; // @dynamic maximumClipDuration;
@property(retain, nonatomic) NSNumber *qualityField; // @dynamic qualityField;
@property(retain, nonatomic) NSNumber *recordedLocally; // @dynamic recordedLocally;
@property(retain, nonatomic) NSDate *startDate; // @dynamic startDate;
@property(retain, nonatomic) NSString *streamingAssetVersion; // @dynamic streamingAssetVersion;
@property(retain, nonatomic) NSNumber *targetFragmentDuration; // @dynamic targetFragmentDuration;
@property(retain, nonatomic) NSArray *videoMetadata; // @dynamic videoMetadata;
@property(retain, nonatomic) NSArray *videoMetadataArray; // @dynamic videoMetadataArray;
@property(retain, nonatomic) HMBStreamingAsset *videoStreamingAsset; // @dynamic videoStreamingAsset;

@end
