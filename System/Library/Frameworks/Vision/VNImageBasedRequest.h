//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Vision/VNDetectedObjectObservationAcceptingInternal-Protocol.h>
#import <Vision/VNFaceObservationAcceptingInternal-Protocol.h>

@class NSArray, NSString;

@interface VNImageBasedRequest <VNFaceObservationAcceptingInternal, VNDetectedObjectObservationAcceptingInternal>
{
}

+ (Class)configurationClass;	// IMP=0x000000000014a7fe
- (_Bool)getOptionalValidatedInputDetectedObjectObservations:(id *)arg1 forObservationClass:(Class)arg2 relationWithRegionOfInterest:(unsigned long long)arg3 error:(id *)arg4;	// IMP=0x000000000014a616
- (id)_detectedObjectObservationsForRegionOfInterestContainingDetectedObjectObservations:(id)arg1 relationWithRegionOfInterest:(unsigned long long)arg2;	// IMP=0x000000000014a515
@property(copy, nonatomic) NSArray *inputDetectedObjectObservations;
- (_Bool)getOptionalValidatedInputFaceObservations:(id *)arg1 clippedToRegionOfInterest:(_Bool)arg2 error:(id *)arg3;	// IMP=0x000000000014a395
- (id)_faceObservationsForRegionOfInterestContainingFaceObservations:(id)arg1;	// IMP=0x000000000014a2a4
@property(copy, nonatomic) NSArray *inputFaceObservations;
@property(readonly, copy) NSString *description;
- (void)applyConfigurationOfRequest:(id)arg1;	// IMP=0x0000000000149ea4
- (struct CGRect)regionOfInterestPixelRectForWidth:(unsigned long long)arg1 height:(unsigned long long)arg2;	// IMP=0x0000000000149dfa
- (struct CGRect)regionOfInterestNonIntegralPixelRectForWidth:(unsigned long long)arg1 height:(unsigned long long)arg2;	// IMP=0x0000000000149d6a
- (_Bool)isFullCoverageRegionOfInterest;	// IMP=0x0000000000149d17
- (_Bool)validateConfigurationAndReturnError:(id *)arg1;	// IMP=0x0000000000149c04
@property(nonatomic) struct CGRect regionOfInterest;
- (_Bool)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg1;	// IMP=0x000000000014995d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

