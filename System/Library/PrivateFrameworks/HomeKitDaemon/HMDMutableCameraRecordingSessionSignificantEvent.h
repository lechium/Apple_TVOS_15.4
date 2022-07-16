//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSDate, NSSet, NSUUID;

@interface HMDMutableCameraRecordingSessionSignificantEvent
{
}

- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000003e47e

// Remaining properties
@property unsigned long long confidenceLevel; // @dynamic confidenceLevel;
@property(copy) NSDate *dateOfOccurrence; // @dynamic dateOfOccurrence;
@property(copy) NSSet *faceClassifications; // @dynamic faceClassifications;
@property(retain) NSData *faceCropData; // @dynamic faceCropData;
@property(retain) NSData *heroFrameData; // @dynamic heroFrameData;
@property unsigned long long reason; // @dynamic reason;
@property(copy) NSUUID *sessionEntityUUID; // @dynamic sessionEntityUUID;
@property double timeOffsetWithinClip; // @dynamic timeOffsetWithinClip;

@end

