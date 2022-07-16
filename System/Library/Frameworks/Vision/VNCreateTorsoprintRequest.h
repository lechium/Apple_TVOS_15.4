//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Vision/VNDetectedObjectObservationAccepting-Protocol.h>
#import <Vision/VNFaceObservationAccepting-Protocol.h>

@class NSArray, NSString;

@interface VNCreateTorsoprintRequest <VNFaceObservationAccepting, VNDetectedObjectObservationAccepting>
{
}

+ (const CDStruct_d47b9615 *)dependentRequestCompatibility;	// IMP=0x0000000000089ecb
+ (Class)configurationClass;	// IMP=0x0000000000089eba
+ (id)descriptionForPrivateRevision:(unsigned long long)arg1;	// IMP=0x0000000000089fff
+ (id)supportedPrivateRevisions;	// IMP=0x0000000000089fcf
+ (const CDStruct_7d93034e *)revisionAvailability;	// IMP=0x0000000000089fc2
- (_Bool)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id *)arg3;	// IMP=0x000000000008978f
- (void)_determineHumanBodiesToProcessFrom:(id)arg1 outputHumanBodiesThatNeedNoProcessing:(id)arg2 tputHumanBodiesThatNeedTorsoprints:(id)arg3;	// IMP=0x0000000000089571
- (_Bool)_processHumanBodyBasedInputInContext:(id)arg1 torsosThatNeedNoProcessing:(id)arg2 torsosThatNeedTorsoprints:(id)arg3 error:(id *)arg4;	// IMP=0x00000000000892e1
- (void)_determineFacesToProcessFrom:(id)arg1 outputFacesThatNeedNoProcessing:(id)arg2 outputFacesThatNeedAlignment:(id)arg3 outputFacesThatNeedTorsoprints:(id)arg4;	// IMP=0x0000000000089025
- (_Bool)_processFaceBasedInputInContext:(id)arg1 torsosThatNeedNoProcessing:(id)arg2 torsosThatNeedTorsoprints:(id)arg3 error:(id *)arg4;	// IMP=0x0000000000088bbc
- (long long)dependencyProcessingOrdinality;	// IMP=0x0000000000088baa
- (_Bool)warmUpSession:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000088a9a
- (_Bool)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg1;	// IMP=0x00000000000889e5
- (_Bool)resultsAreAssignedWithOriginatingRequestSpecifier;	// IMP=0x00000000000889dd

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSArray *inputDetectedObjectObservations;
@property(copy, nonatomic) NSArray *inputFaceObservations;
@property(readonly, copy) NSArray *results; // @dynamic results;
@property(readonly) Class superclass;

@end
