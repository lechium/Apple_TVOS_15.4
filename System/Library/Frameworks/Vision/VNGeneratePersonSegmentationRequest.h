//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, VNPixelBufferObservation;

@interface VNGeneratePersonSegmentationRequest
{
    VNPixelBufferObservation *_previousObservation;	// 8 = 0x8
    unsigned long long _previousImageWidth;	// 16 = 0x10
    unsigned long long _previousImageHeight;	// 24 = 0x18
}

+ (Class)configurationClass;	// IMP=0x000000000015e688
+ (const CDStruct_7d93034e *)revisionAvailability;	// IMP=0x000000000015e67b
+ (id)new;	// IMP=0x000000000015e671
- (void).cxx_destruct;	// IMP=0x000000000015e445
@property(nonatomic) unsigned int outputPixelFormat;
@property(nonatomic) unsigned long long qualityLevel;
- (_Bool)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id *)arg3;	// IMP=0x000000000015dde5
- (long long)dependencyProcessingOrdinality;	// IMP=0x000000000015ddd3
- (_Bool)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg1;	// IMP=0x000000000015dd18
- (_Bool)warmUpSession:(id)arg1 error:(id *)arg2;	// IMP=0x000000000015dc37
- (id)newDefaultDetectorOptionsForSession:(id)arg1;	// IMP=0x000000000015db9e
- (void)applyConfigurationOfRequest:(id)arg1;	// IMP=0x000000000015db09
- (id)initWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000015dab3
- (id)init;	// IMP=0x000000000015da5b

// Remaining properties
@property(readonly, copy) NSArray *results; // @dynamic results;

@end

