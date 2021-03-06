//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <DataAccess/DAContainer-Protocol.h>

@class NSString;

@interface DAABLegacyContainer : NSObject <DAContainer>
{
    void *_source;	// 8 = 0x8
}

@property(readonly, nonatomic) void *source; // @synthesize source=_source;
- (id)asContainer;	// IMP=0x0000000000010c97
- (void *)asSource;	// IMP=0x0000000000010c85
- (void)updateSaveRequest:(id)arg1;	// IMP=0x0000000000010c38
- (_Bool)isAccount;	// IMP=0x0000000000010c30
- (_Bool)isContainer;	// IMP=0x0000000000010c28
- (_Bool)isGroup;	// IMP=0x0000000000010c20
- (_Bool)isContact;	// IMP=0x0000000000010c18
@property(nonatomic, getter=isGuardianStateDirty) _Bool guardianStateDirty;
@property(nonatomic, getter=isGuardianRestricted) _Bool guardianRestricted;
- (void)markAsDefault;	// IMP=0x0000000000010aa6
- (void)markForDeletion;	// IMP=0x0000000000010a5b
- (void)setAccountIdentifier:(id)arg1;	// IMP=0x00000000000109ec
- (id)accountIdentifier;	// IMP=0x0000000000010975
- (void)setMeContactIdentifier:(id)arg1;	// IMP=0x00000000000108e7
- (id)meContactIdentifier;	// IMP=0x0000000000010870
- (_Bool)isSearchContainer;	// IMP=0x0000000000010857
- (void)setArePropertiesReadonly:(_Bool)arg1;	// IMP=0x0000000000010832
- (_Bool)arePropertiesReadonly;	// IMP=0x0000000000010818
- (void)setContentReadonly:(_Bool)arg1;	// IMP=0x00000000000107f3
- (_Bool)isContentReadonly;	// IMP=0x00000000000107d9
- (void)setConstraintsPath:(id)arg1;	// IMP=0x0000000000010784
- (id)constraintsPath;	// IMP=0x0000000000010759
- (void)setSyncData:(id)arg1;	// IMP=0x0000000000010704
- (id)syncData;	// IMP=0x00000000000106d9
- (void)setSyncTag:(id)arg1;	// IMP=0x0000000000010684
- (id)syncTag;	// IMP=0x0000000000010659
- (void)setCTag:(id)arg1;	// IMP=0x0000000000010604
- (id)cTag;	// IMP=0x00000000000105d9
- (void)setExternalIdentifier:(id)arg1;	// IMP=0x0000000000010584
- (id)externalIdentifier;	// IMP=0x0000000000010559
- (void)setType:(long long)arg1;	// IMP=0x0000000000010503
- (long long)type;	// IMP=0x00000000000104b6
- (_Bool)isLocal;	// IMP=0x0000000000010465
- (void)setName:(id)arg1;	// IMP=0x0000000000010410
- (id)name;	// IMP=0x00000000000103e5
- (id)identifier;	// IMP=0x00000000000103ba
- (void)dealloc;	// IMP=0x0000000000010380
- (id)initWithABSource:(void *)arg1;	// IMP=0x0000000000010324

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

