//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosGraph/PGGraphUpdateInventory-Protocol.h>

@class NSDictionary, NSMutableArray, NSMutableDictionary, NSMutableSet, NSSet, NSString, PGAssetCollectionFeatureProvider, PGGraph, PGGraphUpdateRelatedDetails, PHPhotoLibrary;

@interface PGGraphUpdate : NSObject <PGGraphUpdateInventory>
{
    PGGraph *_graph;	// 8 = 0x8
    PHPhotoLibrary *_photoLibrary;	// 16 = 0x10
    NSMutableDictionary *_registeredLocationOfInterestVisitsToResolveByMomentUUID;	// 24 = 0x18
    NSMutableDictionary *_registeredResolvableItemsByBusinessItemMuid;	// 32 = 0x20
    _Bool _isResumingFullAnalysis;	// 40 = 0x28
    _Bool _hasDeletedMomentNodes;	// 41 = 0x29
    _Bool _hasDeletedHighlightNodes;	// 42 = 0x2a
    _Bool _hasUpdatedPersonNodes;	// 43 = 0x2b
    _Bool _hasDeletedPersonNodes;	// 44 = 0x2c
    long long _updateType;	// 48 = 0x30
    NSMutableArray *_inputChanges;	// 56 = 0x38
    NSSet *_consolidatedChanges;	// 64 = 0x40
    NSMutableDictionary *_updateMomentNodesByUpdateType;	// 72 = 0x48
    NSMutableDictionary *_updateHighlightNodesByUpdateType;	// 80 = 0x50
    NSSet *_uuidsOfMomentsToInsert;	// 88 = 0x58
    NSSet *_uuidsOfMomentsToDelete;	// 96 = 0x60
    NSSet *_uuidsOfMomentsToUpdate;	// 104 = 0x68
    NSMutableDictionary *_momentByMomentUUID;	// 112 = 0x70
    NSMutableSet *_deletedMomentUUIDsForValidityCheck;	// 120 = 0x78
    NSMutableSet *_deletedHighlightUUIDsForValidityCheck;	// 128 = 0x80
    NSSet *_momentsToIngest;	// 136 = 0x88
    NSSet *_insertedMomentNodes;	// 144 = 0x90
    unsigned long long _momentUpdateTypes;	// 152 = 0x98
    NSSet *_additionalLocationsToPrefetch;	// 160 = 0xa0
    NSSet *_insertedAndUpdatedPersonNodes;	// 168 = 0xa8
    NSMutableDictionary *_highlightByHighlightUUID;	// 176 = 0xb0
    NSMutableDictionary *_highlightsToInsertByHighlightKind;	// 184 = 0xb8
    NSMutableSet *_uuidsOfDeletedHighlights;	// 192 = 0xc0
    NSSet *_localIdentifiersOfPersonsToInsert;	// 200 = 0xc8
    NSSet *_localIdentifiersOfPersonsToDelete;	// 208 = 0xd0
    NSSet *_localIdentifiersOfPersonsToUpdate;	// 216 = 0xd8
    PGGraphUpdateRelatedDetails *_relatedDetails;	// 224 = 0xe0
    PGAssetCollectionFeatureProvider *_featureProvider;	// 232 = 0xe8
    NSSet *_uuidsOfHighlightsToInsert;	// 240 = 0xf0
    NSSet *_uuidsOfHighlightsToDelete;	// 248 = 0xf8
    NSSet *_uuidsOfHighlightsToUpdate;	// 256 = 0x100
    NSSet *_insertedHighlightNodes;	// 264 = 0x108
    NSSet *_insertedHighlightDayGroupNodes;	// 272 = 0x110
}

- (void).cxx_destruct;	// IMP=0x000000000043863b
@property(copy, nonatomic) NSSet *insertedHighlightDayGroupNodes; // @synthesize insertedHighlightDayGroupNodes=_insertedHighlightDayGroupNodes;
@property(copy, nonatomic) NSSet *insertedHighlightNodes; // @synthesize insertedHighlightNodes=_insertedHighlightNodes;
@property(readonly, nonatomic) NSSet *uuidsOfHighlightsToUpdate; // @synthesize uuidsOfHighlightsToUpdate=_uuidsOfHighlightsToUpdate;
@property(readonly, nonatomic) PGAssetCollectionFeatureProvider *featureProvider; // @synthesize featureProvider=_featureProvider;
@property(nonatomic) _Bool hasDeletedPersonNodes; // @synthesize hasDeletedPersonNodes=_hasDeletedPersonNodes;
@property(readonly, nonatomic) PGGraphUpdateRelatedDetails *relatedDetails; // @synthesize relatedDetails=_relatedDetails;
@property(readonly, nonatomic) NSMutableSet *uuidsOfDeletedHighlights; // @synthesize uuidsOfDeletedHighlights=_uuidsOfDeletedHighlights;
@property(readonly, nonatomic) NSMutableDictionary *highlightsToInsertByHighlightKind; // @synthesize highlightsToInsertByHighlightKind=_highlightsToInsertByHighlightKind;
@property(readonly, nonatomic) NSMutableDictionary *highlightByHighlightUUID; // @synthesize highlightByHighlightUUID=_highlightByHighlightUUID;
@property(readonly, nonatomic) NSSet *insertedAndUpdatedPersonNodes; // @synthesize insertedAndUpdatedPersonNodes=_insertedAndUpdatedPersonNodes;
@property(copy, nonatomic) NSSet *additionalLocationsToPrefetch; // @synthesize additionalLocationsToPrefetch=_additionalLocationsToPrefetch;
@property(copy, nonatomic) NSSet *insertedMomentNodes; // @synthesize insertedMomentNodes=_insertedMomentNodes;
@property(nonatomic) _Bool hasUpdatedPersonNodes; // @synthesize hasUpdatedPersonNodes=_hasUpdatedPersonNodes;
@property(nonatomic) _Bool hasDeletedHighlightNodes; // @synthesize hasDeletedHighlightNodes=_hasDeletedHighlightNodes;
@property(nonatomic) _Bool hasDeletedMomentNodes; // @synthesize hasDeletedMomentNodes=_hasDeletedMomentNodes;
@property(readonly, nonatomic) NSMutableSet *deletedHighlightUUIDsForValidityCheck; // @synthesize deletedHighlightUUIDsForValidityCheck=_deletedHighlightUUIDsForValidityCheck;
@property(readonly, nonatomic) NSMutableSet *deletedMomentUUIDsForValidityCheck; // @synthesize deletedMomentUUIDsForValidityCheck=_deletedMomentUUIDsForValidityCheck;
@property(readonly, nonatomic) NSMutableDictionary *momentByMomentUUID; // @synthesize momentByMomentUUID=_momentByMomentUUID;
@property(nonatomic) _Bool isResumingFullAnalysis; // @synthesize isResumingFullAnalysis=_isResumingFullAnalysis;
@property(readonly, nonatomic) NSDictionary *registeredResolvableItemsByBusinessItemMuid; // @synthesize registeredResolvableItemsByBusinessItemMuid=_registeredResolvableItemsByBusinessItemMuid;
@property(readonly, nonatomic) NSDictionary *registeredLocationOfInterestVisitsToResolveByMomentUUID; // @synthesize registeredLocationOfInterestVisitsToResolveByMomentUUID=_registeredLocationOfInterestVisitsToResolveByMomentUUID;
@property(readonly, nonatomic) NSMutableDictionary *updateHighlightNodesByUpdateType; // @synthesize updateHighlightNodesByUpdateType=_updateHighlightNodesByUpdateType;
@property(readonly, nonatomic) NSMutableDictionary *updateMomentNodesByUpdateType; // @synthesize updateMomentNodesByUpdateType=_updateMomentNodesByUpdateType;
@property(readonly, nonatomic) NSSet *consolidatedChanges; // @synthesize consolidatedChanges=_consolidatedChanges;
@property(readonly, nonatomic) NSMutableArray *inputChanges; // @synthesize inputChanges=_inputChanges;
@property(nonatomic) long long updateType; // @synthesize updateType=_updateType;
@property(readonly, nonatomic) NSSet *identifiersForMomentRelatedToDeletedPersons;
@property(readonly, nonatomic) NSSet *identifiersForMomentRelatedToUpdatedPersons;
- (id)highlightsToProcessForKind:(unsigned short)arg1 withHighlightUpdateTypes:(unsigned long long)arg2 includeHighlightsToIngest:(_Bool)arg3;	// IMP=0x00000000004381ca
- (id)_fetchedHighlightsWithHighlightUUIDs:(id)arg1;	// IMP=0x0000000000437e84
- (id)highlightForHighlightUUID:(id)arg1;	// IMP=0x0000000000437e6b
- (void)_unregisterHighlightsForHighlightUUIDs:(id)arg1;	// IMP=0x0000000000437ddd
- (void)_registerHighlights:(id)arg1;	// IMP=0x0000000000437c4e
@property(readonly, nonatomic) _Bool hasHighlightDayGroupsToInsert;
@property(readonly, nonatomic) NSSet *highlightDayGroupsToIngest;
@property(readonly, nonatomic) NSSet *highlightDaysToIngest;
@property(readonly, nonatomic) _Bool hasHighlightsToUpdate;
@property(readonly, nonatomic) _Bool hasHighlightsToDelete;
@property(readonly, nonatomic) _Bool hasHighlightsToInsert;
@property(readonly, nonatomic) NSSet *uuidsOfHighlightsToDelete; // @synthesize uuidsOfHighlightsToDelete=_uuidsOfHighlightsToDelete;
@property(readonly, nonatomic) NSSet *uuidsOfHighlightsToInsert; // @synthesize uuidsOfHighlightsToInsert=_uuidsOfHighlightsToInsert;
- (void)clearInsertedAndUpdatedPersonNodes;	// IMP=0x0000000000437a60
- (void)registerInsertedAndUpdatedPersonNodes:(id)arg1;	// IMP=0x0000000000437a0a
- (void)registerPublicEventNode:(id)arg1 withConsolidatedAddress:(id)arg2 toResolveBusinessItemMuid:(unsigned long long)arg3;	// IMP=0x00000000004378e2
- (void)registerLocationOfInterestVisitToResolve:(id)arg1 forMomentUUID:(id)arg2;	// IMP=0x000000000043781e
- (id)momentNodesToProcessForMomentUpdateTypes:(unsigned long long)arg1 includeInsertedNodes:(_Bool)arg2;	// IMP=0x00000000004375e9
- (id)momentsToProcessForMomentUpdateTypes:(unsigned long long)arg1 includeMomentsToIngest:(_Bool)arg2;	// IMP=0x00000000004372f0
@property(readonly, copy) NSString *description;
- (void)updatedHighlightNode:(id)arg1 forUpdateChangeType:(unsigned long long)arg2;	// IMP=0x0000000000436ebe
- (void)updatedMomentNode:(id)arg1 forUpdateChangeType:(unsigned long long)arg2;	// IMP=0x0000000000436d72
- (void)enumerateConsolidatedChanges:(CDUnknownBlockType)arg1;	// IMP=0x0000000000436c22
@property(readonly, nonatomic) unsigned long long numberOfConsolidatedChanges;
- (void)_consolidateIfNeeded;	// IMP=0x0000000000436b9c
- (id)_fetchMomentsWithUUIDs:(id)arg1;	// IMP=0x0000000000436868
- (void)_consolidate;	// IMP=0x00000000004358de
- (void)_unregisterMomentsForMomentUUIDs:(id)arg1;	// IMP=0x0000000000435856
- (void)_registerMoments:(id)arg1;	// IMP=0x00000000004356ca
- (void)prepareForPostProcessing;	// IMP=0x000000000043533a
- (void)addChanges:(id)arg1;	// IMP=0x0000000000435308
- (void)addChange:(id)arg1;	// IMP=0x00000000004352d6
@property(readonly, nonatomic) _Bool hasUpdatedHighlightNodes;
@property(readonly, nonatomic) _Bool hasInsertedHighlightNodes;
@property(readonly, nonatomic) _Bool hasUpdatedMomentNodes;
@property(readonly, nonatomic) _Bool hasInsertedMomentNodes;
@property(readonly, nonatomic) _Bool didProcessNodes;
@property(readonly, nonatomic) NSSet *momentsToIngest; // @synthesize momentsToIngest=_momentsToIngest;
@property(readonly, nonatomic) unsigned long long momentUpdateTypes; // @synthesize momentUpdateTypes=_momentUpdateTypes;
@property(readonly, nonatomic) _Bool hasPersonsToUpdate;
@property(readonly, nonatomic) _Bool hasPersonsToDelete;
@property(readonly, nonatomic) _Bool hasPersonsToInsert;
@property(readonly, nonatomic) _Bool hasMomentsToUpdate;
@property(readonly, nonatomic) _Bool hasMomentsToDelete;
@property(readonly, nonatomic) _Bool hasMomentsToInsert;
@property(readonly, nonatomic) NSSet *localIdentifiersOfPersonsToUpdate; // @synthesize localIdentifiersOfPersonsToUpdate=_localIdentifiersOfPersonsToUpdate;
@property(readonly, nonatomic) NSSet *localIdentifiersOfPersonsToDelete; // @synthesize localIdentifiersOfPersonsToDelete=_localIdentifiersOfPersonsToDelete;
@property(readonly, nonatomic) NSSet *localIdentifiersOfPersonsToInsert; // @synthesize localIdentifiersOfPersonsToInsert=_localIdentifiersOfPersonsToInsert;
@property(readonly, nonatomic) NSSet *uuidsOfMomentsToUpdate; // @synthesize uuidsOfMomentsToUpdate=_uuidsOfMomentsToUpdate;
@property(readonly, nonatomic) NSSet *uuidsOfMomentsToDelete; // @synthesize uuidsOfMomentsToDelete=_uuidsOfMomentsToDelete;
@property(readonly, nonatomic) NSSet *uuidsOfMomentsToInsert; // @synthesize uuidsOfMomentsToInsert=_uuidsOfMomentsToInsert;
@property(readonly, nonatomic) _Bool isSignificant;
@property(readonly, nonatomic) _Bool hasAnythingToDo;
- (id)cachedDataModelObjectForGraphChange:(id)arg1;	// IMP=0x0000000000434cb0
- (void)setGraph:(id)arg1;	// IMP=0x0000000000434c43
- (id)initWithManager:(id)arg1 updateType:(long long)arg2 graph:(id)arg3;	// IMP=0x0000000000434bd5
- (id)_featureProvider;	// IMP=0x0000000000434af9
- (id)initWithManager:(id)arg1 updateType:(long long)arg2;	// IMP=0x00000000004348a8
- (id)initWithManager:(id)arg1;	// IMP=0x0000000000434894

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

