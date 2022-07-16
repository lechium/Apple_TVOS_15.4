//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudPhotoLibrary/CPLAbstractObject-Protocol.h>

@class CPLPlatformObject, NSMutableArray, NSString;

@interface CPLEngineScopeCleanupTasks <CPLAbstractObject>
{
    long long _currentCleanupScopeIndex;	// 8 = 0x8
    NSMutableArray *_remainingStoragesToCleanup;	// 16 = 0x10
    _Bool _shouldRequestACleanupToScheduler;	// 24 = 0x18
}

+ (id)scopeTypeDescriptionForScopeType:(unsigned long long)arg1;	// IMP=0x0000000000098574
- (void).cxx_destruct;	// IMP=0x00000000000984e6
- (void)writeTransactionDidFail;	// IMP=0x0000000000098483
- (void)writeTransactionDidSucceed;	// IMP=0x00000000000983af
- (_Bool)hasCleanupTasks;	// IMP=0x000000000009836b
- (_Bool)cleanupStepHasMore:(_Bool *)arg1 error:(id *)arg2;	// IMP=0x0000000000097e1e
- (_Bool)addCleanupTaskForScopeWithIndex:(long long)arg1 scopeIdentifier:(id)arg2 scopeType:(unsigned long long)arg3 error:(id *)arg4;	// IMP=0x0000000000097ca3
- (unsigned long long)scopeType;	// IMP=0x0000000000097c9b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) CPLPlatformObject *platformObject;
@property(readonly) Class superclass;

@end
