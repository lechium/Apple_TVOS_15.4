//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface VNImageBlurScoreRequest
{
}

+ (Class)configurationClass;	// IMP=0x0000000000182061
- (_Bool)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000181da5
- (void)applyConfigurationOfRequest:(id)arg1;	// IMP=0x0000000000181cf3
- (_Bool)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg1;	// IMP=0x0000000000181c36
@property(nonatomic) unsigned long long maximumIntermediateSideLength;
@property(nonatomic) unsigned long long blurDeterminationMethod;

// Remaining properties
@property(readonly, copy) NSArray *results; // @dynamic results;

@end

