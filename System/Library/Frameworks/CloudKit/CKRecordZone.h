//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CloudKit/CKContainerAssignment-Protocol.h>
#import <CloudKit/CKPropertiesDescription-Protocol.h>
#import <CloudKit/NSCopying-Protocol.h>
#import <CloudKit/NSSecureCoding-Protocol.h>

@class CKContainerID, CKRecordZoneID, CKReference, CKServerChangeToken, NSArray, NSData, NSDate, NSNumber, NSString;

@interface CKRecordZone : NSObject <CKPropertiesDescription, CKContainerAssignment, NSSecureCoding, NSCopying>
{
    _Bool _hasUpdatedExpirationTimeInterval;	// 8 = 0x8
    _Bool _needsZoneishPCSRolled;	// 9 = 0x9
    _Bool _zoneKeyRollAllowed;	// 10 = 0xa
    _Bool _serializeProtectionData;	// 11 = 0xb
    _Bool _expired;	// 12 = 0xc
    int _deviceCount;	// 16 = 0x10
    CKRecordZoneID *_zoneID;	// 24 = 0x18
    unsigned long long _capabilities;	// 32 = 0x20
    CKReference *_share;	// 40 = 0x28
    CKContainerID *_containerID;	// 48 = 0x30
    NSNumber *_updatedExpirationTimeInterval;	// 56 = 0x38
    CKServerChangeToken *_currentServerChangeToken;	// 64 = 0x40
    NSData *_clientChangeToken;	// 72 = 0x48
    NSData *_protectionData;	// 80 = 0x50
    NSString *_protectionEtag;	// 88 = 0x58
    NSData *_zoneishProtectionData;	// 96 = 0x60
    NSData *_pcsKeyID;	// 104 = 0x68
    NSData *_zoneishKeyID;	// 112 = 0x70
    NSString *_zonePCSLastModifierDevice;	// 120 = 0x78
    NSString *_previousProtectionEtag;	// 128 = 0x80
    long long _assetQuotaUsage;	// 136 = 0x88
    long long _metadataQuotaUsage;	// 144 = 0x90
    NSDate *_zonePCSModificationDate;	// 152 = 0x98
    NSArray *_invitedKeysToRemove;	// 160 = 0xa0
    NSDate *_expirationDate;	// 168 = 0xa8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000170749
+ (id)systemRecordZone;	// IMP=0x000000000016fe14
+ (id)defaultRecordZone;	// IMP=0x000000000016fce1
- (void).cxx_destruct;	// IMP=0x00000000001711d0
@property(readonly, nonatomic, getter=isExpired) _Bool expired; // @synthesize expired=_expired;
@property(readonly, copy, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(retain, nonatomic) NSArray *invitedKeysToRemove; // @synthesize invitedKeysToRemove=_invitedKeysToRemove;
@property(nonatomic) _Bool serializeProtectionData; // @synthesize serializeProtectionData=_serializeProtectionData;
@property(retain, nonatomic) NSDate *zonePCSModificationDate; // @synthesize zonePCSModificationDate=_zonePCSModificationDate;
@property(nonatomic) long long metadataQuotaUsage; // @synthesize metadataQuotaUsage=_metadataQuotaUsage;
@property(nonatomic) long long assetQuotaUsage; // @synthesize assetQuotaUsage=_assetQuotaUsage;
@property(retain, nonatomic) NSString *previousProtectionEtag; // @synthesize previousProtectionEtag=_previousProtectionEtag;
@property(retain, nonatomic) NSString *zonePCSLastModifierDevice; // @synthesize zonePCSLastModifierDevice=_zonePCSLastModifierDevice;
@property(nonatomic) _Bool zoneKeyRollAllowed; // @synthesize zoneKeyRollAllowed=_zoneKeyRollAllowed;
@property(nonatomic) _Bool needsZoneishPCSRolled; // @synthesize needsZoneishPCSRolled=_needsZoneishPCSRolled;
@property(retain, nonatomic) NSData *zoneishKeyID; // @synthesize zoneishKeyID=_zoneishKeyID;
@property(retain, nonatomic) NSData *pcsKeyID; // @synthesize pcsKeyID=_pcsKeyID;
@property(retain, nonatomic) NSData *zoneishProtectionData; // @synthesize zoneishProtectionData=_zoneishProtectionData;
@property(retain, nonatomic) NSString *protectionEtag; // @synthesize protectionEtag=_protectionEtag;
@property(retain, nonatomic) NSData *protectionData; // @synthesize protectionData=_protectionData;
@property(retain, nonatomic) NSData *clientChangeToken; // @synthesize clientChangeToken=_clientChangeToken;
@property(retain, nonatomic) CKServerChangeToken *currentServerChangeToken; // @synthesize currentServerChangeToken=_currentServerChangeToken;
@property(nonatomic) int deviceCount; // @synthesize deviceCount=_deviceCount;
@property(copy, nonatomic) NSNumber *updatedExpirationTimeInterval; // @synthesize updatedExpirationTimeInterval=_updatedExpirationTimeInterval;
@property(nonatomic) _Bool hasUpdatedExpirationTimeInterval; // @synthesize hasUpdatedExpirationTimeInterval=_hasUpdatedExpirationTimeInterval;
@property(copy, nonatomic) CKReference *share; // @synthesize share=_share;
@property(nonatomic) unsigned long long capabilities; // @synthesize capabilities=_capabilities;
@property(copy, nonatomic) CKRecordZoneID *zoneID; // @synthesize zoneID=_zoneID;
- (void)setExpired:(_Bool)arg1;	// IMP=0x0000000000170f8c
- (void)setExpirationDate:(id)arg1;	// IMP=0x0000000000170f59
- (void)setExpirationAfterTimeInterval:(id)arg1;	// IMP=0x0000000000170f02
- (id)redactedDescription;	// IMP=0x0000000000170ef0
@property(readonly, copy) NSString *description;
- (void)CKDescribePropertiesUsing:(id)arg1;	// IMP=0x0000000000170e22
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000170bd3
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000170751
- (void)CKAssignToContainerWithID:(id)arg1;	// IMP=0x0000000000170672
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001700ee
- (id)initWithZoneID:(id)arg1;	// IMP=0x000000000016ffec
- (id)initWithZoneName:(id)arg1;	// IMP=0x000000000016feb8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

