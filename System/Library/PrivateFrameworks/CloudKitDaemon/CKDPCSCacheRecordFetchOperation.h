//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CKDRecordPCSData, CKRecordID, NSString;

@interface CKDPCSCacheRecordFetchOperation
{
    _Bool _serverRecordHasNoProtectionData;	// 8 = 0x8
    NSString *_serverRecordType;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000240bf4
@property(retain, nonatomic) NSString *serverRecordType; // @synthesize serverRecordType=_serverRecordType;
@property(nonatomic) _Bool serverRecordHasNoProtectionData; // @synthesize serverRecordHasNoProtectionData=_serverRecordHasNoProtectionData;
- (_Bool)_savePCSDataToCache;	// IMP=0x000000000024089d
- (_Bool)_decryptPCS;	// IMP=0x000000000023f6bf
- (_Bool)_decryptRecordPCSInSharedDatabase;	// IMP=0x000000000023ec5d
- (_Bool)_decryptRecordPCSInPrivateDatabase;	// IMP=0x000000000023e77d
- (_Bool)_fetchDependentPCS;	// IMP=0x000000000023e65a
- (_Bool)_fetchDependentPCSInSharedDatabase;	// IMP=0x000000000023ce7d
- (_Bool)_fetchPCSForPrivateZone;	// IMP=0x000000000023c767
- (_Bool)_createAdditionalPCS;	// IMP=0x000000000023c078
- (_Bool)_fetchPCSDataFromServer;	// IMP=0x000000000023bd52
- (_Bool)_fetchPCSDataFromDatabase;	// IMP=0x000000000023b594
- (void)_handlePCSDataFetched:(id)arg1 withError:(id)arg2;	// IMP=0x000000000023b1eb
- (_Bool)hasAllPCSData;	// IMP=0x000000000023b18e
- (_Bool)needsChainPCSCreation;	// IMP=0x000000000023b112
- (id)itemTypeName;	// IMP=0x000000000023b105
@property(retain, nonatomic) CKDRecordPCSData *recordPCSData;
@property(readonly, nonatomic) CKRecordID *recordID;

@end

