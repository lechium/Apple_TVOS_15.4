//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Vision/VNFaceObservationAccepting-Protocol.h>

@class NSArray, NSString;

@interface VNDetectFacePoseRequest <VNFaceObservationAccepting>
{
}

+ (const CDStruct_d47b9615 *)dependentRequestCompatibility;	// IMP=0x00000000001496df
- (_Bool)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000148d21
- (_Bool)resultsAreAssignedWithOriginatingRequestSpecifier;	// IMP=0x0000000000148d19
- (void)_determineFacesToProcessFrom:(id)arg1 outputFacesThatNeedNoProcessing:(id)arg2 outputFacesThatNeedProcessing:(id)arg3 outputFacesThatNeed2DLandmarks:(id)arg4;	// IMP=0x0000000000148a91
- (long long)dependencyProcessingOrdinality;	// IMP=0x0000000000148a7f
- (_Bool)warmUpSession:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000148a50

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSArray *inputFaceObservations;
@property(readonly, copy) NSArray *results; // @dynamic results;
@property(readonly) Class superclass;

@end

