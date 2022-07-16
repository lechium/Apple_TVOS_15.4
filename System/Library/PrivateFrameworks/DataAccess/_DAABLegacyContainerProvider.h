//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface _DAABLegacyContainerProvider
{
    void *_addressBook;	// 8 = 0x8
}

@property(readonly, nonatomic) void *addressBook; // @synthesize addressBook=_addressBook;
- (_Bool)setLastSyncDateForContainer:(id)arg1;	// IMP=0x0000000000032c42
- (void)mergeAllRecordsIntoContainer:(id)arg1 shouldInsertChangeHistoryRecords:(_Bool)arg2;	// IMP=0x00000000000327c7
- (void)setDefaultContainer:(id)arg1 withLocalDBHelper:(id)arg2 onlyIfNotSet:(_Bool)arg3;	// IMP=0x0000000000032758
- (id)createNewContainerWithType:(int)arg1 name:(id)arg2 externalIdentifier:(id)arg3 constraintsPath:(id)arg4 syncData:(id)arg5 contentReadonly:(_Bool)arg6 propertiesReadonly:(_Bool)arg7 forAccount:(id)arg8;	// IMP=0x00000000000325ae
- (id)allContainersForAccountWithExternalIdentifier:(id)arg1;	// IMP=0x00000000000323b0
- (id)allContainers;	// IMP=0x00000000000321dc
- (id)containerWithExternalIdentifier:(id)arg1 forAccountWithExternalIdentifier:(id)arg2;	// IMP=0x000000000003212e
- (void)dealloc;	// IMP=0x00000000000320ed
- (id)initWithAddressBook:(void *)arg1;	// IMP=0x0000000000032097

@end
