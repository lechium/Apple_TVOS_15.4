//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudKitDaemon/CKDURLRequestPipelining-Protocol.h>

@class NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSSet, NSString;

@interface CKDFetchRecordZoneChangesURLRequest <CKDURLRequestPipelining>
{
    _Bool _shouldFetchAssetContent;	// 8 = 0x8
    NSArray *_recordZoneIDs;	// 16 = 0x10
    NSDictionary *_configurationsByRecordZoneID;	// 24 = 0x18
    long long _changeTypes;	// 32 = 0x20
    NSSet *_desiredAssetKeys;	// 40 = 0x28
    CDUnknownBlockType _recordsChangedBlock;	// 48 = 0x30
    CDUnknownBlockType _recordDeletedBlock;	// 56 = 0x38
    NSMutableDictionary *_zoneIDsByRequestOperationUUID;	// 64 = 0x40
    NSMutableDictionary *_requestResultsByRecordZoneID;	// 72 = 0x48
    NSMutableDictionary *_nodeErrorsByZoneID;	// 80 = 0x50
    NSMutableArray *_recordResponses;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x000000000029fc43
@property(retain, nonatomic) NSMutableArray *recordResponses; // @synthesize recordResponses=_recordResponses;
@property(retain, nonatomic) NSMutableDictionary *nodeErrorsByZoneID; // @synthesize nodeErrorsByZoneID=_nodeErrorsByZoneID;
@property(retain, nonatomic) NSMutableDictionary *requestResultsByRecordZoneID; // @synthesize requestResultsByRecordZoneID=_requestResultsByRecordZoneID;
@property(retain, nonatomic) NSMutableDictionary *zoneIDsByRequestOperationUUID; // @synthesize zoneIDsByRequestOperationUUID=_zoneIDsByRequestOperationUUID;
@property(copy, nonatomic) CDUnknownBlockType recordDeletedBlock; // @synthesize recordDeletedBlock=_recordDeletedBlock;
@property(copy, nonatomic) CDUnknownBlockType recordsChangedBlock; // @synthesize recordsChangedBlock=_recordsChangedBlock;
@property(retain, nonatomic) NSSet *desiredAssetKeys; // @synthesize desiredAssetKeys=_desiredAssetKeys;
@property(nonatomic) _Bool shouldFetchAssetContent; // @synthesize shouldFetchAssetContent=_shouldFetchAssetContent;
@property(nonatomic) long long changeTypes; // @synthesize changeTypes=_changeTypes;
@property(retain, nonatomic) NSDictionary *configurationsByRecordZoneID; // @synthesize configurationsByRecordZoneID=_configurationsByRecordZoneID;
@property(copy, nonatomic) NSArray *recordZoneIDs; // @synthesize recordZoneIDs=_recordZoneIDs;
- (void)requestDidComplete;	// IMP=0x000000000029fa3a
- (void)requestDidParseNodeFailure:(id)arg1;	// IMP=0x000000000029f545
- (id)requestDidParseProtobufObject:(id)arg1;	// IMP=0x000000000029f03f
- (id)_handleRecordChanges:(id)arg1 atomBatchChanges:(id)arg2 forZoneID:(id)arg3;	// IMP=0x000000000029e6ee
- (id)generateRequestOperations;	// IMP=0x000000000029d7eb
- (_Bool)handlesAnonymousCKUserIDPropagation;	// IMP=0x000000000029d7e3
- (_Bool)requestGETPreAuth;	// IMP=0x000000000029d776
- (id)requestOperationClasses;	// IMP=0x000000000029d70a
- (id)zoneIDsToLock;	// IMP=0x000000000029d6f8
- (_Bool)allowsAnonymousAccount;	// IMP=0x000000000029d6de
@property(readonly, nonatomic) NSDictionary *resultsByRecordZoneID;
@property(readonly, nonatomic) NSDictionary *zoneErrorsByZoneID;
- (id)initWithOperation:(id)arg1 recordZoneIDs:(id)arg2 configurationsByRecordZoneID:(id)arg3;	// IMP=0x000000000029d4f8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

