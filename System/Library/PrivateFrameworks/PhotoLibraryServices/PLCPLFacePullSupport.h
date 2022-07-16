//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol PLSyncContext, PLSyncableAsset;

@interface PLCPLFacePullSupport : NSObject
{
    id <PLSyncContext> _syncContext;	// 8 = 0x8
    id <PLSyncableAsset> _currentAsset;	// 16 = 0x10
}

+ (id)_disjointSetsByAddingSet:(id)arg1 toSets:(id)arg2;	// IMP=0x000000000048405b
+ (void)applyFacesChangesFromAssetChange:(id)arg1 toAsset:(id)arg2 inSyncContext:(id)arg3;	// IMP=0x00000000000cec57
- (void).cxx_destruct;	// IMP=0x0000000000484033
- (void)_applyPersonFromFaceReference:(id)arg1 toDetectedFace:(id)arg2;	// IMP=0x000000000048342b
- (_Bool)_canReassignFaceFromPerson:(id)arg1 toPerson:(id)arg2 shouldDedupePersons:(_Bool *)arg3;	// IMP=0x000000000048327b
- (void)_unlinkPersonIfVerifiedFromFace:(id)arg1;	// IMP=0x0000000000483071
- (void)_applyDimensionAndStateFromFaceReference:(id)arg1 toDetectedFace:(id)arg2;	// IMP=0x0000000000482fab
- (void)_finalizeFace:(id)arg1 withFaceRef:(id)arg2 applyDimensionAndState:(_Bool)arg3;	// IMP=0x0000000000482ed5
- (id)_createFaceFromFaceRef:(id)arg1 algorithmVersion:(int)arg2;	// IMP=0x0000000000482e47
- (id)_applyAssetChange:(id)arg1 toExistingFaces:(id)arg2 withPolicy:(long long)arg3;	// IMP=0x00000000004822a6
- (long long)_policyForApplyingFaceChangesFromAssetChange:(id)arg1;	// IMP=0x000000000048215b
- (void)applyFacesChangesFromAssetChange:(id)arg1;	// IMP=0x0000000000481c81
- (void)dealloc;	// IMP=0x0000000000481c28
- (id)initWithSyncContext:(id)arg1 asset:(id)arg2;	// IMP=0x0000000000481b80

@end

