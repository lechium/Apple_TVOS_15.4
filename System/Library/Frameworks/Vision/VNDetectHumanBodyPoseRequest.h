//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface VNDetectHumanBodyPoseRequest
{
}

+ (id)supportedJointsGroupNamesForRevision:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x00000000001a8b92
+ (id)supportedJointNamesForRevision:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x00000000001a8b16
+ (Class)configurationClass;	// IMP=0x00000000001a8b05
+ (const CDStruct_7d93034e *)revisionAvailability;	// IMP=0x00000000001a8e10
- (_Bool)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id *)arg3;	// IMP=0x00000000001a8893
- (id)newDefaultDetectorOptionsForRequestRevision:(unsigned long long)arg1 session:(id)arg2;	// IMP=0x00000000001a87da
- (_Bool)warmUpSession:(id)arg1 error:(id *)arg2;	// IMP=0x00000000001a86aa

// Remaining properties
@property(readonly, copy) NSArray *results; // @dynamic results;

@end

