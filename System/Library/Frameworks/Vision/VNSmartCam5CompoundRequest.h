//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class VNSmartCam5CompoundRequestGroupingConfiguration;

__attribute__((visibility("hidden")))
@interface VNSmartCam5CompoundRequest
{
    VNSmartCam5CompoundRequestGroupingConfiguration *_groupingConfiguration;	// 8 = 0x8
}

+ (id)compoundRequestsForOriginalRequests:(id)arg1 withPerformingContext:(id)arg2 error:(id *)arg3;	// IMP=0x000000000019d8b6
- (void).cxx_destruct;	// IMP=0x000000000019d8a3
- (_Bool)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id *)arg3;	// IMP=0x000000000019d22d

@end

