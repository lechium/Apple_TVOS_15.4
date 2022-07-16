//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudKit/NSSecureCoding-Protocol.h>

@class NSArray, NSData, NSDictionary;

@interface CKModifyRecordsOperationInfo <NSSecureCoding>
{
    _Bool _atomic;	// 8 = 0x8
    _Bool _shouldOnlySaveAssetContent;	// 9 = 0x9
    _Bool _shouldReportRecordsInFlight;	// 10 = 0xa
    _Bool _originatingFromDaemon;	// 11 = 0xb
    _Bool _markAsParticipantNeedsNewInvitationToken;	// 12 = 0xc
    _Bool _shouldSkipPCSRetryBehavior;	// 13 = 0xd
    _Bool _shouldModifyRecordsInDatabase;	// 14 = 0xe
    _Bool _alwaysFetchPCSFromServer;	// 15 = 0xf
    NSArray *_recordsToSave;	// 16 = 0x10
    NSArray *_recordIDsToDelete;	// 24 = 0x18
    NSData *_clientChangeTokenData;	// 32 = 0x20
    long long _savePolicy;	// 40 = 0x28
    NSDictionary *_recordIDsToDeleteToEtags;	// 48 = 0x30
    NSDictionary *_conflictLosersToResolveByRecordID;	// 56 = 0x38
    NSDictionary *_pluginFieldsForRecordDeletesByID;	// 64 = 0x40
    NSDictionary *_assetUUIDToExpectedProperties;	// 72 = 0x48
    NSDictionary *_packageUUIDToExpectedProperties;	// 80 = 0x50
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000122b25
- (void).cxx_destruct;	// IMP=0x00000000001236db
@property(nonatomic) _Bool alwaysFetchPCSFromServer; // @synthesize alwaysFetchPCSFromServer=_alwaysFetchPCSFromServer;
@property(nonatomic) _Bool shouldModifyRecordsInDatabase; // @synthesize shouldModifyRecordsInDatabase=_shouldModifyRecordsInDatabase;
@property(nonatomic) _Bool shouldSkipPCSRetryBehavior; // @synthesize shouldSkipPCSRetryBehavior=_shouldSkipPCSRetryBehavior;
@property(nonatomic) _Bool markAsParticipantNeedsNewInvitationToken; // @synthesize markAsParticipantNeedsNewInvitationToken=_markAsParticipantNeedsNewInvitationToken;
@property(nonatomic) _Bool originatingFromDaemon; // @synthesize originatingFromDaemon=_originatingFromDaemon;
@property(copy, nonatomic) NSDictionary *packageUUIDToExpectedProperties; // @synthesize packageUUIDToExpectedProperties=_packageUUIDToExpectedProperties;
@property(copy, nonatomic) NSDictionary *assetUUIDToExpectedProperties; // @synthesize assetUUIDToExpectedProperties=_assetUUIDToExpectedProperties;
@property(nonatomic) _Bool shouldReportRecordsInFlight; // @synthesize shouldReportRecordsInFlight=_shouldReportRecordsInFlight;
@property(copy, nonatomic) NSDictionary *pluginFieldsForRecordDeletesByID; // @synthesize pluginFieldsForRecordDeletesByID=_pluginFieldsForRecordDeletesByID;
@property(retain, nonatomic) NSDictionary *conflictLosersToResolveByRecordID; // @synthesize conflictLosersToResolveByRecordID=_conflictLosersToResolveByRecordID;
@property(copy, nonatomic) NSDictionary *recordIDsToDeleteToEtags; // @synthesize recordIDsToDeleteToEtags=_recordIDsToDeleteToEtags;
@property(nonatomic) _Bool shouldOnlySaveAssetContent; // @synthesize shouldOnlySaveAssetContent=_shouldOnlySaveAssetContent;
@property(nonatomic) long long savePolicy; // @synthesize savePolicy=_savePolicy;
@property(nonatomic) _Bool atomic; // @synthesize atomic=_atomic;
@property(retain, nonatomic) NSData *clientChangeTokenData; // @synthesize clientChangeTokenData=_clientChangeTokenData;
@property(retain, nonatomic) NSArray *recordIDsToDelete; // @synthesize recordIDsToDelete=_recordIDsToDelete;
@property(retain, nonatomic) NSArray *recordsToSave; // @synthesize recordsToSave=_recordsToSave;
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000122e31
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000122b2d
- (void)_commonInit;	// IMP=0x0000000000122afe
- (id)init;	// IMP=0x0000000000122ab2

@end

