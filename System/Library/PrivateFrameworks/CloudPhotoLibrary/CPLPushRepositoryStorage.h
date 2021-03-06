//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CPLEnginePushRepository, CPLEngineScopeStorage;

@interface CPLPushRepositoryStorage
{
    unsigned long long _storageScopeType;	// 8 = 0x8
    CPLEngineScopeStorage *_scopes;	// 16 = 0x10
    CPLEnginePushRepository *_pushRepository;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000001184c3
@property(readonly, nonatomic) CPLEnginePushRepository *pushRepository; // @synthesize pushRepository=_pushRepository;
- (id)changesWithRelatedScopedIdentifier:(id)arg1 class:(Class)arg2;	// IMP=0x0000000000118446
- (id)changeWithScopedIdentifier:(id)arg1;	// IMP=0x00000000001183df
- (id)scopedIdentifierAddingScopeIndexForScopedIdentifier:(id)arg1;	// IMP=0x0000000000118288
- (id)storageDescription;	// IMP=0x000000000011826b
- (id)initWithPushRepository:(id)arg1;	// IMP=0x0000000000118186
- (_Bool)hasChangesWithRelatedScopedIdentifier:(id)arg1 class:(Class)arg2;	// IMP=0x00000000000ace5e
- (_Bool)getRelatedScopedIdentifier:(id *)arg1 forRecordWithScopedIdentifier:(id)arg2;	// IMP=0x00000000000acdbe

@end

