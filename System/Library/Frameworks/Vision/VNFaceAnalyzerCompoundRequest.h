//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface VNFaceAnalyzerCompoundRequest
{
}

+ (Class)configurationClass;	// IMP=0x000000000007c744
+ (_Bool)warmUpSession:(id)arg1 error:(id *)arg2;	// IMP=0x000000000007c73c
+ (id)compoundRequestsForOriginalRequests:(id)arg1 withPerformingContext:(id)arg2 error:(id *)arg3;	// IMP=0x000000000007bbbb
+ (const CDStruct_7d93034e *)revisionAvailability;	// IMP=0x000000000007d007
- (void)assignOriginalRequestsResultsFromObservations:(id)arg1 obtainedInPerformingContext:(id)arg2;	// IMP=0x000000000007b613
- (unsigned long long)detectionLevel;	// IMP=0x000000000007b582
- (void)_determineFacesToProcessFrom:(id)arg1 outputFacesThatNeedNoProcessing:(id)arg2 outputfacesThatNeedAttributes:(id)arg3 isFaceprintRequest:(_Bool)arg4 isAttributeRequest:(_Bool)arg5;	// IMP=0x000000000007b2cd
- (_Bool)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id *)arg3;	// IMP=0x000000000007a9d0
- (id)initWithDetectorType:(id)arg1 configuration:(id)arg2;	// IMP=0x000000000007a799
- (long long)dependencyProcessingOrdinality;	// IMP=0x000000000007a787

@end

