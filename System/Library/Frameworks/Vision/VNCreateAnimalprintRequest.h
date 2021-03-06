//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Vision/VNDetectedObjectObservationAccepting-Protocol.h>

@class NSArray, NSString;

@interface VNCreateAnimalprintRequest <VNDetectedObjectObservationAccepting>
{
}

+ (unsigned long long)compatibleRevisionForDependentRequestOfClass:(Class)arg1 beingPerformedByRevision:(unsigned long long)arg2;	// IMP=0x000000000014bc52
+ (id)descriptionForPrivateRevision:(unsigned long long)arg1;	// IMP=0x000000000014c911
+ (id)supportedPrivateRevisions;	// IMP=0x000000000014c8e1
+ (const CDStruct_7d93034e *)revisionAvailability;	// IMP=0x000000000014c8d4
+ (id)createVNEntityIdentificationModelEntryPrintForRevision:(unsigned long long)arg1 fromDescriptorData:(const void *)arg2 length:(unsigned long long)arg3 elementCount:(unsigned long long)arg4 error:(id *)arg5;	// IMP=0x0000000000156f94
- (_Bool)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id *)arg3;	// IMP=0x000000000014c00e
- (void)_determineAnimalsToProcessFrom:(id)arg1 outputAnimalsThatNeedNoProcessing:(id)arg2 outputAnimalsThatNeedAnimalprints:(id)arg3;	// IMP=0x000000000014bdd5
- (long long)dependencyProcessingOrdinality;	// IMP=0x000000000014bdc3
- (_Bool)warmUpSession:(id)arg1 error:(id *)arg2;	// IMP=0x000000000014bcb3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSArray *inputDetectedObjectObservations;
@property(readonly, copy) NSArray *results; // @dynamic results;
@property(readonly) Class superclass;

@end

