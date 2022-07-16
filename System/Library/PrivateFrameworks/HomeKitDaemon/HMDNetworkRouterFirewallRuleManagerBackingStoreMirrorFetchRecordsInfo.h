//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CKRecordID, CKRecordZoneID, NSArray, NSMutableSet;

@interface HMDNetworkRouterFirewallRuleManagerBackingStoreMirrorFetchRecordsInfo
{
    CKRecordZoneID *_zoneID;	// 8 = 0x8
    CKRecordID *_recordID;	// 16 = 0x10
    NSArray *_desiredKeys;	// 24 = 0x18
    NSMutableSet *_records;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000819cb5
@property(readonly, nonatomic) NSMutableSet *records; // @synthesize records=_records;
@property(readonly, nonatomic) NSArray *desiredKeys; // @synthesize desiredKeys=_desiredKeys;
@property(readonly, nonatomic) CKRecordID *recordID; // @synthesize recordID=_recordID;
@property(readonly, nonatomic) CKRecordZoneID *zoneID; // @synthesize zoneID=_zoneID;
- (id)initWithActivity:(id)arg1 options:(id)arg2 promise:(id)arg3 database:(id)arg4 useAnonymousRequests:(_Bool)arg5 zoneID:(id)arg6 recordID:(id)arg7 desiredKeys:(id)arg8;	// IMP=0x0000000000819ae9

@end

