//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CKServerChangeToken, NSArray, NSDictionary, NSMutableSet, NSSet;

@interface HMDNetworkRouterFirewallRuleManagerBackingStoreMirrorFetchChangesInfo
{
    _Bool _zonesHaveChanged;	// 8 = 0x8
    _Bool _zonesWereDeleted;	// 9 = 0x9
    NSSet *_requestedRecordIDs;	// 16 = 0x10
    NSDictionary *_zoneInfoMap;	// 24 = 0x18
    CKServerChangeToken *_databaseChangeToken;	// 32 = 0x20
    CKServerChangeToken *_originalDatabaseChangeToken;	// 40 = 0x28
    NSMutableSet *_modifiedRecordIDs;	// 48 = 0x30
    NSArray *_signatureVerificationPublicKeys;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000008198e1
@property(retain, nonatomic) NSArray *signatureVerificationPublicKeys; // @synthesize signatureVerificationPublicKeys=_signatureVerificationPublicKeys;
@property(readonly, nonatomic) _Bool zonesWereDeleted; // @synthesize zonesWereDeleted=_zonesWereDeleted;
@property(readonly, nonatomic) _Bool zonesHaveChanged; // @synthesize zonesHaveChanged=_zonesHaveChanged;
@property(readonly, nonatomic) NSMutableSet *modifiedRecordIDs; // @synthesize modifiedRecordIDs=_modifiedRecordIDs;
@property(retain, nonatomic) CKServerChangeToken *originalDatabaseChangeToken; // @synthesize originalDatabaseChangeToken=_originalDatabaseChangeToken;
@property(retain, nonatomic) CKServerChangeToken *databaseChangeToken; // @synthesize databaseChangeToken=_databaseChangeToken;
@property(readonly, nonatomic) NSDictionary *zoneInfoMap; // @synthesize zoneInfoMap=_zoneInfoMap;
@property(readonly, nonatomic) NSSet *requestedRecordIDs; // @synthesize requestedRecordIDs=_requestedRecordIDs;
- (void)__cleanupMirroredZones:(id)arg1 cloudZones:(id)arg2 result:(id)arg3 error:(id)arg4;	// IMP=0x00000000008192a4
- (void)finishWithResult:(id)arg1 error:(id)arg2;	// IMP=0x0000000000818e9b
- (void)markZonesDeleted;	// IMP=0x0000000000818e8a
- (void)markZonesChanged;	// IMP=0x0000000000818e79
- (id)initWithActivity:(id)arg1 options:(id)arg2 databaseChangeToken:(id)arg3 promise:(id)arg4 xpcActivity:(id)arg5 database:(id)arg6 useAnonymousRequests:(_Bool)arg7 recordIDs:(id)arg8 lastSynchronizedRecordIDs:(id)arg9;	// IMP=0x00000000008187bd

@end

