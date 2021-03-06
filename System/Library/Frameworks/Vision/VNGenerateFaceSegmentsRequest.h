//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Vision/VNFaceObservationAccepting-Protocol.h>

@class NSArray, NSString;

@interface VNGenerateFaceSegmentsRequest <VNFaceObservationAccepting>
{
}

+ (Class)configurationClass;	// IMP=0x00000000001b9b0b
- (_Bool)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg1;	// IMP=0x00000000001b9a4f
@property(nonatomic) float faceBoundingBoxExpansionRatio;
- (void)_determineFacesToProcessFrom:(id)arg1 outputFacesThatNeedNoProcessing:(id)arg2 outputFacesThatNeedAlignment:(id)arg3 outputfacesThatNeedSegments:(id)arg4;	// IMP=0x00000000001b970f
- (_Bool)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id *)arg3;	// IMP=0x00000000001b8d2b
- (_Bool)resultsAreAssignedWithOriginatingRequestSpecifier;	// IMP=0x00000000001b8d23
- (long long)dependencyProcessingOrdinality;	// IMP=0x00000000001b8d11
- (id)newDefaultDetectorOptionsForRequestRevision:(unsigned long long)arg1 session:(id)arg2;	// IMP=0x00000000001b8c5b
- (_Bool)warmUpSession:(id)arg1 error:(id *)arg2;	// IMP=0x00000000001b8b7e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSArray *inputFaceObservations;
@property(readonly, copy) NSArray *results; // @dynamic results;
@property(readonly) Class superclass;

@end

