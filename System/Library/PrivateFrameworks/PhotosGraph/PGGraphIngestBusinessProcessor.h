//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosGraph/PGGraphIngestProcessor-Protocol.h>

@class NSString, PGGraphBuilder;

@interface PGGraphIngestBusinessProcessor : NSObject <PGGraphIngestProcessor>
{
    PGGraphBuilder *_graphBuilder;	// 8 = 0x8
}

+ (id)_spatialMapCategoriesByMeaningIdentifier;	// IMP=0x0000000000234deb
- (void).cxx_destruct;	// IMP=0x0000000000237535
- (id)requiredCriteriaByPOIIdentifierForGraph:(id)arg1;	// IMP=0x0000000000237387
- (id)_predominantVisitForMomentNode:(id)arg1 publicEventBusinessItemMuid:(unsigned long long)arg2;	// IMP=0x0000000000237095
- (id)_businessItemContainersToEnrichForLowConfidenceDisambiguation:(id)arg1 requiredCriteriaByPOIIdentifier:(id)arg2;	// IMP=0x0000000000236cc0
- (_Bool)_momentNode:(id)arg1 hasValidConstraintsForLocationOfInterestVisit:(id)arg2 requiredCriteriaByPOIIdentifier:(id)arg3;	// IMP=0x00000000002369c9
- (void)_insertBusinessItemsFromMomentNodes:(id)arg1 graph:(id)arg2 withLocationOfInterestVisitsToResolveByMomentUUID:(id)arg3 requiredCriteriaByPOIIdentifier:(id)arg4 progressBlock:(CDUnknownBlockType)arg5;	// IMP=0x00000000002359b7
- (void)_insertBusinessItemsForMomentNodesToResolvedBusinessItems:(id)arg1 graph:(id)arg2 progressBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000000235382
- (void)runWithGraphUpdate:(id)arg1 progressBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000023501a
- (_Bool)shouldRunWithGraphUpdate:(id)arg1;	// IMP=0x0000000000234faa
- (void)setGraphBuilder:(id)arg1;	// IMP=0x0000000000234f99

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

