//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSNumber;

__attribute__((visibility("hidden")))
@interface VNCompoundRequest
{
    NSArray *_originalRequests;	// 8 = 0x8
    NSNumber *_cachedDependencyProcessingOrdinality;	// 16 = 0x10
}

+ (_Bool)warmUpSession:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000246473
+ (id)compoundRequestProcessingDeviceFromOriginalRequestsProcessingDevice:(id)arg1;	// IMP=0x00000000002461ca
+ (id)compoundRequestsForOriginalRequests:(id)arg1 withPerformingContext:(id)arg2 error:(id *)arg3;	// IMP=0x00000000002460f6
- (void).cxx_destruct;	// IMP=0x0000000000245f57
@property(readonly, copy, nonatomic) NSArray *originalRequests; // @synthesize originalRequests=_originalRequests;
- (id)description;	// IMP=0x0000000000245d67
- (_Bool)usesCPUOnly;	// IMP=0x0000000000245c31
- (void)recordWarningsInOriginalRequests;	// IMP=0x0000000000245b71
@property(readonly, nonatomic) struct CGRect regionOfInterest;
- (_Bool)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000245885
- (long long)dependencyProcessingOrdinality;	// IMP=0x00000000002456a1
- (id)sequencedRequestPreviousObservationsKey;	// IMP=0x0000000000245699
- (CDUnknownBlockType)resultsSortingComparator;	// IMP=0x0000000000245691
- (_Bool)resultsAreAssignedWithOriginatingRequestSpecifier;	// IMP=0x0000000000245689
- (_Bool)allowsCachingOfResults;	// IMP=0x0000000000245681
- (_Bool)warmUpSession:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000245679
- (id)compoundResults;	// IMP=0x00000000002454df
- (id)initWithOriginalRequests:(id)arg1;	// IMP=0x0000000000245465

@end

