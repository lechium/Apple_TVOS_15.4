//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, VNHomographyTrackerState;

@interface VNTrackHomographyRequest
{
    VNHomographyTrackerState *_state;	// 8 = 0x8
}

+ (Class)configurationClass;	// IMP=0x000000000024c67a
+ (const CDStruct_7d93034e *)revisionAvailability;	// IMP=0x000000000024c68b
- (void).cxx_destruct;	// IMP=0x000000000024c667
- (_Bool)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id *)arg3;	// IMP=0x000000000024c417
- (_Bool)allowsCachingOfResults;	// IMP=0x000000000024c40f
- (id)initWithFrameAnalysisSpacing:(CDStruct_1b6d18a9)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000024c3a1

// Remaining properties
@property(readonly, copy) NSArray *results; // @dynamic results;

@end

