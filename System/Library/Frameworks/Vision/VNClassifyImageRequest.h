//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Vision/VNImageIdealImageSizeProviding-Protocol.h>

@class NSArray, NSString, VNClassificationCustomHierarchy;

@interface VNClassifyImageRequest <VNImageIdealImageSizeProviding>
{
}

+ (const CDStruct_7d93034e *)revisionAvailability;	// IMP=0x00000000000dcc1e
+ (id)knownClassificationsForRevision:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x00000000000dc905
+ (id)descriptionForPrivateRevision:(unsigned long long)arg1;	// IMP=0x00000000000dc885
+ (id)supportedPrivateRevisions;	// IMP=0x00000000000dc855
+ (Class)configurationClass;	// IMP=0x00000000000dc844
@property(readonly) NSArray *supportedImageSizeSet;
@property(nonatomic) unsigned long long imageCropAndScaleOption;
- (id)defineCustomHierarchyWithRelationships:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000dc604
- (_Bool)defineCustomHierarchy:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000dc4e9
@property(readonly, copy, nonatomic) VNClassificationCustomHierarchy *customHierarchy;
@property(nonatomic) unsigned long long maximumHierarchicalObservations;
@property(nonatomic) unsigned long long maximumLeafObservations;
- (id)supportedIdentifiersAndReturnError:(id *)arg1;	// IMP=0x00000000000dc181
- (CDUnknownBlockType)resultsSortingComparator;	// IMP=0x00000000000dc174
- (_Bool)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000dc0cd
- (void)applyConfigurationOfRequest:(id)arg1;	// IMP=0x00000000000dbf92
- (_Bool)warmUpSession:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000dbe8b
- (void)resolvedRevisionDidChangeFromRevision:(unsigned long long)arg1;	// IMP=0x00000000000dbd9c
- (_Bool)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg1;	// IMP=0x00000000000dbbf6
- (id)newDefaultDetectorOptionsForRequestRevision:(unsigned long long)arg1 session:(id)arg2;	// IMP=0x00000000000dba02
@property(readonly, copy) NSString *description;
- (void)_setCustomHierarchy:(id)arg1;	// IMP=0x00000000000db844
- (id)_applicableDetectorAndOptions:(id *)arg1 loadedInSession:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000db716
- (id)_applicableDetectorTypeForRevision:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x00000000000db699

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSArray *results; // @dynamic results;
@property(readonly) Class superclass;

@end
