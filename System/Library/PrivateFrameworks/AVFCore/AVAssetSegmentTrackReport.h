//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVAssetSegmentReportSampleInformation, NSString;

@interface AVAssetSegmentTrackReport : NSObject
{
    int _trackID;	// 8 = 0x8
    NSString *_mediaType;	// 16 = 0x10
    CDStruct_1b6d18a9 _earliestPresentationTimeStamp;	// 24 = 0x18
    CDStruct_1b6d18a9 _duration;	// 48 = 0x30
    AVAssetSegmentReportSampleInformation *_firstVideoSampleInformation;	// 72 = 0x48
}

@property(readonly, nonatomic) AVAssetSegmentReportSampleInformation *firstVideoSampleInformation; // @synthesize firstVideoSampleInformation=_firstVideoSampleInformation;
@property(readonly, nonatomic) CDStruct_1b6d18a9 duration; // @synthesize duration=_duration;
@property(readonly, nonatomic) CDStruct_1b6d18a9 earliestPresentationTimeStamp; // @synthesize earliestPresentationTimeStamp=_earliestPresentationTimeStamp;
@property(readonly, nonatomic) NSString *mediaType; // @synthesize mediaType=_mediaType;
@property(readonly, nonatomic) int trackID; // @synthesize trackID=_trackID;
- (void)dealloc;	// IMP=0x00000000000ed318
- (id)initWithFigSegmentTrackReportDictionary:(id)arg1;	// IMP=0x00000000000ed13c

@end

