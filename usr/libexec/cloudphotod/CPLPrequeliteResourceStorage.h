//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CPLPrequeliteVariable, MISSING_TYPE, NSString;

@interface CPLPrequeliteResourceStorage
{
    CPLPrequeliteVariable *_totalSizeVar;	// 8 = 0x8
    CPLPrequeliteVariable *_totalOriginalSizeVar;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000052344
- (id)status;	// IMP=0x0010000000052243
- (_Bool)resetWithError:(id *)arg1;	// IMP=0x00100000000520dd
- (unsigned long long)totalOriginalResourceSize;	// IMP=0x001000000005208e
- (unsigned long long)totalResourceSize;	// IMP=0x001000000005203f
- (_Bool)_decrementTotalOriginalResourceSize:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x0010000000051f17
- (_Bool)_decrementTotalResourceSize:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x0010000000051ccd
- (_Bool)_incrementTotalOriginalResourceSize:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x0010000000051c50
- (_Bool)_incrementTotalResourceSize:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x0010000000051c0b
- (_Bool)_updateTotalResourceSize:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x0010000000051b03
- (MISSING_TYPE *)enumerateIdentitiesWithBlock: /* Error: Ran out of types for this method. */;	// IMP=0x0010000000051746
- (unsigned long long)retainCountForIdentity:(id)arg1;	// IMP=0x0010000000051633
- (_Bool)releaseIdentity:(id)arg1 lastReference:(_Bool *)arg2 isTrackedOriginal:(_Bool)arg3 error:(id *)arg4;	// IMP=0x00100000000513ba
- (_Bool)retainIdentity:(id)arg1 isTrackedOriginal:(_Bool)arg2 error:(id *)arg3;	// IMP=0x0010000000051183
- (_Bool)openWithError:(id *)arg1;	// IMP=0x0010000000051099
- (_Bool)upgradeStorageToVersion:(long long)arg1;	// IMP=0x0010000000050f0e
- (_Bool)initializeStorage;	// IMP=0x0010000000050e32
- (id)initWithAbstractObject:(id)arg1;	// IMP=0x0010000000050d2f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool isAlive;
@property(readonly, nonatomic) _Bool isEmpty;
@property(readonly, nonatomic) _Bool shouldIncludeInStatus;
@property(readonly) Class superclass;

@end

