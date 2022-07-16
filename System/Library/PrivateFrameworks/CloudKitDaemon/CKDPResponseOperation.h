//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CloudKitDaemon/NSCopying-Protocol.h>

@class CKDPAnonymousShareAddResponse, CKDPAnonymousShareRemoveResponse, CKDPArchiveRecordsResponse, CKDPAssetUploadTokenRetrieveResponse, CKDPAtomBatchMetadataRetrieveResponse, CKDPAtomBatchReplaceResponse, CKDPAtomBatchSaveResponse, CKDPAtomSyncResponse, CKDPBundlesForContainerResponse, CKDPCodeFunctionInvokeResponse, CKDPDeleteContainerResponse, CKDPFetchArchivedRecordsResponse, CKDPMarkAssetBrokenResponse, CKDPNotificationMarkReadResponse, CKDPNotificationSyncResponse, CKDPOperation, CKDPQueryRetrieveResponse, CKDPRecordDeleteResponse, CKDPRecordResolveTokenResponse, CKDPRecordRetrieveChangesResponse, CKDPRecordRetrieveResponse, CKDPRecordRetrieveVersionsResponse, CKDPRecordSaveResponse, CKDPResponseOperationHeader, CKDPResponseOperationResult, CKDPSetBadgeCountResponse, CKDPShareAcceptResponse, CKDPShareVettingInitiateResponse, CKDPSubscriptionCreateResponse, CKDPSubscriptionDeleteResponse, CKDPSubscriptionRetrieveResponse, CKDPTokenRegistrationResponse, CKDPTokenUnregistrationResponse, CKDPUpdateMissingAssetStatusResponse, CKDPUserAvailableQuotaResponse, CKDPUserPrivacySettingsBatchLookupResponse, CKDPUserPrivacySettingsResetResponse, CKDPUserPrivacySettingsRetrieveResponse, CKDPUserPrivacySettingsUpdateResponse, CKDPUserQueryResponse, CKDPUserRetrieveResponse, CKDPWebAuthTokenRetrieveResponse, CKDPZoneDeleteResponse, CKDPZoneRetrieveChangesResponse, CKDPZoneRetrieveResponse, CKDPZoneSaveResponse;

@interface CKDPResponseOperation : PBCodable <NSCopying>
{
    CKDPAnonymousShareAddResponse *_anonymousShareAddResponse;	// 8 = 0x8
    CKDPAnonymousShareRemoveResponse *_anonymousShareRemoveResponse;	// 16 = 0x10
    CKDPArchiveRecordsResponse *_archiveRecordsResponse;	// 24 = 0x18
    CKDPAssetUploadTokenRetrieveResponse *_assetUploadTokenRetrieveResponse;	// 32 = 0x20
    CKDPAtomBatchMetadataRetrieveResponse *_atomBatchMetadataRetrieveResponse;	// 40 = 0x28
    CKDPAtomBatchReplaceResponse *_atomBatchReplaceResponse;	// 48 = 0x30
    CKDPAtomBatchSaveResponse *_atomBatchSaveResponse;	// 56 = 0x38
    CKDPAtomSyncResponse *_atomSyncResponse;	// 64 = 0x40
    CKDPBundlesForContainerResponse *_bundlesForContainerResponse;	// 72 = 0x48
    CKDPDeleteContainerResponse *_deleteContainerResponse;	// 80 = 0x50
    CKDPFetchArchivedRecordsResponse *_fetchArchivedRecordsResponse;	// 88 = 0x58
    CKDPCodeFunctionInvokeResponse *_functionInvokeResponse;	// 96 = 0x60
    CKDPResponseOperationHeader *_header;	// 104 = 0x68
    CKDPMarkAssetBrokenResponse *_markAssetBrokenResponse;	// 112 = 0x70
    CKDPNotificationMarkReadResponse *_notificationMarkReadResponse;	// 120 = 0x78
    CKDPNotificationSyncResponse *_notificationSyncResponse;	// 128 = 0x80
    unsigned int _operationCost;	// 136 = 0x88
    CKDPQueryRetrieveResponse *_queryRetrieveResponse;	// 144 = 0x90
    CKDPRecordDeleteResponse *_recordDeleteResponse;	// 152 = 0x98
    CKDPRecordResolveTokenResponse *_recordResolveTokenResponse;	// 160 = 0xa0
    CKDPRecordRetrieveChangesResponse *_recordRetrieveChangesResponse;	// 168 = 0xa8
    CKDPRecordRetrieveResponse *_recordRetrieveResponse;	// 176 = 0xb0
    CKDPRecordRetrieveVersionsResponse *_recordRetrieveVersionsResponse;	// 184 = 0xb8
    CKDPRecordSaveResponse *_recordSaveResponse;	// 192 = 0xc0
    CKDPOperation *_response;	// 200 = 0xc8
    CKDPResponseOperationResult *_result;	// 208 = 0xd0
    CKDPSetBadgeCountResponse *_setBadgeCountResponse;	// 216 = 0xd8
    CKDPShareAcceptResponse *_shareAcceptResponse;	// 224 = 0xe0
    CKDPShareVettingInitiateResponse *_shareVettingInitiateResponse;	// 232 = 0xe8
    CKDPSubscriptionCreateResponse *_subscriptionCreateResponse;	// 240 = 0xf0
    CKDPSubscriptionDeleteResponse *_subscriptionDeleteResponse;	// 248 = 0xf8
    CKDPSubscriptionRetrieveResponse *_subscriptionRetrieveResponse;	// 256 = 0x100
    CKDPTokenRegistrationResponse *_tokenRegistrationResponse;	// 264 = 0x108
    CKDPTokenUnregistrationResponse *_tokenUnregistrationResponse;	// 272 = 0x110
    CKDPUpdateMissingAssetStatusResponse *_updateMissingAssetStatusResponse;	// 280 = 0x118
    CKDPUserAvailableQuotaResponse *_userAvailableQuotaResponse;	// 288 = 0x120
    CKDPUserPrivacySettingsBatchLookupResponse *_userPrivacySettingsBatchLookupResponse;	// 296 = 0x128
    CKDPUserPrivacySettingsResetResponse *_userPrivacySettingsResetResponse;	// 304 = 0x130
    CKDPUserPrivacySettingsRetrieveResponse *_userPrivacySettingsRetrieveResponse;	// 312 = 0x138
    CKDPUserPrivacySettingsUpdateResponse *_userPrivacySettingsUpdateResponse;	// 320 = 0x140
    CKDPUserQueryResponse *_userQueryResponse;	// 328 = 0x148
    CKDPUserRetrieveResponse *_userRetrieveResponse;	// 336 = 0x150
    CKDPWebAuthTokenRetrieveResponse *_webAuthTokenRetrieveResponse;	// 344 = 0x158
    CKDPZoneDeleteResponse *_zoneDeleteResponse;	// 352 = 0x160
    CKDPZoneRetrieveChangesResponse *_zoneRetrieveChangesResponse;	// 360 = 0x168
    CKDPZoneRetrieveResponse *_zoneRetrieveResponse;	// 368 = 0x170
    CKDPZoneSaveResponse *_zoneSaveResponse;	// 376 = 0x178
    struct {
        unsigned int operationCost:1;
    } _has;	// 384 = 0x180
}

- (void).cxx_destruct;	// IMP=0x00000000001280b8
@property(retain, nonatomic) CKDPResponseOperationHeader *header; // @synthesize header=_header;
@property(retain, nonatomic) CKDPResponseOperationResult *result; // @synthesize result=_result;
@property(retain, nonatomic) CKDPOperation *response; // @synthesize response=_response;
@property(nonatomic) unsigned int operationCost; // @synthesize operationCost=_operationCost;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000127614
- (unsigned long long)hash;	// IMP=0x00000000001270d2
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001266e6
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000125ef9
- (void)copyTo:(id)arg1;	// IMP=0x00000000001258f6
- (void)writeTo:(id)arg1;	// IMP=0x0000000000125379
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000012536c
- (id)dictionaryRepresentation;	// IMP=0x000000000012344f
- (id)description;	// IMP=0x00000000001233a0
@property(readonly, nonatomic) _Bool hasHeader;
@property(readonly, nonatomic) _Bool hasResult;
@property(readonly, nonatomic) _Bool hasResponse;
@property(nonatomic) _Bool hasOperationCost;
@property(retain, nonatomic) CKDPShareVettingInitiateResponse *shareVettingInitiateResponse;
@property(readonly, nonatomic) _Bool hasShareVettingInitiateResponse;
@property(retain, nonatomic) CKDPAtomBatchReplaceResponse *atomBatchReplaceResponse;
@property(readonly, nonatomic) _Bool hasAtomBatchReplaceResponse;
@property(retain, nonatomic) CKDPAtomBatchMetadataRetrieveResponse *atomBatchMetadataRetrieveResponse;
@property(readonly, nonatomic) _Bool hasAtomBatchMetadataRetrieveResponse;
@property(retain, nonatomic) CKDPAtomBatchSaveResponse *atomBatchSaveResponse;
@property(readonly, nonatomic) _Bool hasAtomBatchSaveResponse;
@property(retain, nonatomic) CKDPAtomSyncResponse *atomSyncResponse;
@property(readonly, nonatomic) _Bool hasAtomSyncResponse;
@property(retain, nonatomic) CKDPZoneSaveResponse *zoneSaveResponse;
@property(readonly, nonatomic) _Bool hasZoneSaveResponse;
@property(retain, nonatomic) CKDPZoneRetrieveResponse *zoneRetrieveResponse;
@property(readonly, nonatomic) _Bool hasZoneRetrieveResponse;
@property(retain, nonatomic) CKDPZoneDeleteResponse *zoneDeleteResponse;
@property(readonly, nonatomic) _Bool hasZoneDeleteResponse;
@property(retain, nonatomic) CKDPZoneRetrieveChangesResponse *zoneRetrieveChangesResponse;
@property(readonly, nonatomic) _Bool hasZoneRetrieveChangesResponse;
@property(retain, nonatomic) CKDPRecordSaveResponse *recordSaveResponse;
@property(readonly, nonatomic) _Bool hasRecordSaveResponse;
@property(retain, nonatomic) CKDPRecordRetrieveResponse *recordRetrieveResponse;
@property(readonly, nonatomic) _Bool hasRecordRetrieveResponse;
@property(retain, nonatomic) CKDPRecordRetrieveVersionsResponse *recordRetrieveVersionsResponse;
@property(readonly, nonatomic) _Bool hasRecordRetrieveVersionsResponse;
@property(retain, nonatomic) CKDPRecordRetrieveChangesResponse *recordRetrieveChangesResponse;
@property(readonly, nonatomic) _Bool hasRecordRetrieveChangesResponse;
@property(retain, nonatomic) CKDPRecordDeleteResponse *recordDeleteResponse;
@property(readonly, nonatomic) _Bool hasRecordDeleteResponse;
@property(retain, nonatomic) CKDPRecordResolveTokenResponse *recordResolveTokenResponse;
@property(readonly, nonatomic) _Bool hasRecordResolveTokenResponse;
@property(retain, nonatomic) CKDPFetchArchivedRecordsResponse *fetchArchivedRecordsResponse;
@property(readonly, nonatomic) _Bool hasFetchArchivedRecordsResponse;
@property(retain, nonatomic) CKDPUserAvailableQuotaResponse *userAvailableQuotaResponse;
@property(readonly, nonatomic) _Bool hasUserAvailableQuotaResponse;
@property(retain, nonatomic) CKDPUserRetrieveResponse *userRetrieveResponse;
@property(readonly, nonatomic) _Bool hasUserRetrieveResponse;
@property(retain, nonatomic) CKDPQueryRetrieveResponse *queryRetrieveResponse;
@property(readonly, nonatomic) _Bool hasQueryRetrieveResponse;
@property(retain, nonatomic) CKDPAssetUploadTokenRetrieveResponse *assetUploadTokenRetrieveResponse;
@property(readonly, nonatomic) _Bool hasAssetUploadTokenRetrieveResponse;
@property(retain, nonatomic) CKDPDeleteContainerResponse *deleteContainerResponse;
@property(readonly, nonatomic) _Bool hasDeleteContainerResponse;
@property(retain, nonatomic) CKDPBundlesForContainerResponse *bundlesForContainerResponse;
@property(readonly, nonatomic) _Bool hasBundlesForContainerResponse;
@property(retain, nonatomic) CKDPWebAuthTokenRetrieveResponse *webAuthTokenRetrieveResponse;
@property(readonly, nonatomic) _Bool hasWebAuthTokenRetrieveResponse;
@property(retain, nonatomic) CKDPUpdateMissingAssetStatusResponse *updateMissingAssetStatusResponse;
@property(readonly, nonatomic) _Bool hasUpdateMissingAssetStatusResponse;
@property(retain, nonatomic) CKDPShareAcceptResponse *shareAcceptResponse;
@property(readonly, nonatomic) _Bool hasShareAcceptResponse;
@property(retain, nonatomic) CKDPAnonymousShareAddResponse *anonymousShareAddResponse;
@property(readonly, nonatomic) _Bool hasAnonymousShareAddResponse;
@property(retain, nonatomic) CKDPAnonymousShareRemoveResponse *anonymousShareRemoveResponse;
@property(readonly, nonatomic) _Bool hasAnonymousShareRemoveResponse;
@property(retain, nonatomic) CKDPCodeFunctionInvokeResponse *functionInvokeResponse;
@property(readonly, nonatomic) _Bool hasFunctionInvokeResponse;
@property(retain, nonatomic) CKDPSubscriptionCreateResponse *subscriptionCreateResponse;
@property(readonly, nonatomic) _Bool hasSubscriptionCreateResponse;
@property(retain, nonatomic) CKDPSubscriptionRetrieveResponse *subscriptionRetrieveResponse;
@property(readonly, nonatomic) _Bool hasSubscriptionRetrieveResponse;
@property(retain, nonatomic) CKDPSubscriptionDeleteResponse *subscriptionDeleteResponse;
@property(readonly, nonatomic) _Bool hasSubscriptionDeleteResponse;
@property(retain, nonatomic) CKDPArchiveRecordsResponse *archiveRecordsResponse;
@property(readonly, nonatomic) _Bool hasArchiveRecordsResponse;
@property(retain, nonatomic) CKDPMarkAssetBrokenResponse *markAssetBrokenResponse;
@property(readonly, nonatomic) _Bool hasMarkAssetBrokenResponse;
@property(retain, nonatomic) CKDPUserQueryResponse *userQueryResponse;
@property(readonly, nonatomic) _Bool hasUserQueryResponse;
@property(retain, nonatomic) CKDPUserPrivacySettingsUpdateResponse *userPrivacySettingsUpdateResponse;
@property(readonly, nonatomic) _Bool hasUserPrivacySettingsUpdateResponse;
@property(retain, nonatomic) CKDPUserPrivacySettingsResetResponse *userPrivacySettingsResetResponse;
@property(readonly, nonatomic) _Bool hasUserPrivacySettingsResetResponse;
@property(retain, nonatomic) CKDPUserPrivacySettingsBatchLookupResponse *userPrivacySettingsBatchLookupResponse;
@property(readonly, nonatomic) _Bool hasUserPrivacySettingsBatchLookupResponse;
@property(retain, nonatomic) CKDPUserPrivacySettingsRetrieveResponse *userPrivacySettingsRetrieveResponse;
@property(readonly, nonatomic) _Bool hasUserPrivacySettingsRetrieveResponse;
@property(retain, nonatomic) CKDPTokenRegistrationResponse *tokenRegistrationResponse;
@property(readonly, nonatomic) _Bool hasTokenRegistrationResponse;
@property(retain, nonatomic) CKDPTokenUnregistrationResponse *tokenUnregistrationResponse;
@property(readonly, nonatomic) _Bool hasTokenUnregistrationResponse;
@property(retain, nonatomic) CKDPSetBadgeCountResponse *setBadgeCountResponse;
@property(readonly, nonatomic) _Bool hasSetBadgeCountResponse;
@property(retain, nonatomic) CKDPNotificationSyncResponse *notificationSyncResponse;
@property(readonly, nonatomic) _Bool hasNotificationSyncResponse;
@property(retain, nonatomic) CKDPNotificationMarkReadResponse *notificationMarkReadResponse;
@property(readonly, nonatomic) _Bool hasNotificationMarkReadResponse;

@end

