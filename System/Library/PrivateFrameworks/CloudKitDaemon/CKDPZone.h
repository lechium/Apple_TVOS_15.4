//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CloudKitDaemon/NSCopying-Protocol.h>

@class CKDPProtectionInfo, CKDPRecordStableUrl, CKDPRecordZoneIdentifier, CKDPShareIdentifier, CKDPStorageExpiration, NSMutableArray;

@interface CKDPZone : PBCodable <NSCopying>
{
    CKDPProtectionInfo *_protectionInfo;	// 8 = 0x8
    NSMutableArray *_protectionInfoKeysToRemoves;	// 16 = 0x10
    CKDPProtectionInfo *_recordProtectionInfo;	// 24 = 0x18
    CKDPShareIdentifier *_shareId;	// 32 = 0x20
    CKDPRecordStableUrl *_stableUrl;	// 40 = 0x28
    CKDPStorageExpiration *_storageExpiration;	// 48 = 0x30
    CKDPRecordZoneIdentifier *_zoneIdentifier;	// 56 = 0x38
}

+ (Class)protectionInfoKeysToRemoveType;	// IMP=0x00000000000edb92
- (void).cxx_destruct;	// IMP=0x00000000000eee74
@property(retain, nonatomic) CKDPStorageExpiration *storageExpiration; // @synthesize storageExpiration=_storageExpiration;
@property(retain, nonatomic) NSMutableArray *protectionInfoKeysToRemoves; // @synthesize protectionInfoKeysToRemoves=_protectionInfoKeysToRemoves;
@property(retain, nonatomic) CKDPShareIdentifier *shareId; // @synthesize shareId=_shareId;
@property(retain, nonatomic) CKDPRecordStableUrl *stableUrl; // @synthesize stableUrl=_stableUrl;
@property(retain, nonatomic) CKDPProtectionInfo *recordProtectionInfo; // @synthesize recordProtectionInfo=_recordProtectionInfo;
@property(retain, nonatomic) CKDPProtectionInfo *protectionInfo; // @synthesize protectionInfo=_protectionInfo;
@property(retain, nonatomic) CKDPRecordZoneIdentifier *zoneIdentifier; // @synthesize zoneIdentifier=_zoneIdentifier;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000000eeacc
- (unsigned long long)hash;	// IMP=0x00000000000ee9fa
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000ee832
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000ee57a
- (void)copyTo:(id)arg1;	// IMP=0x00000000000ee3ed
- (void)writeTo:(id)arg1;	// IMP=0x00000000000ee1fd
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000ee1f0
- (id)dictionaryRepresentation;	// IMP=0x00000000000edc67
- (id)description;	// IMP=0x00000000000edbb8
@property(readonly, nonatomic) _Bool hasStorageExpiration;
- (id)protectionInfoKeysToRemoveAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000edb75
- (unsigned long long)protectionInfoKeysToRemovesCount;	// IMP=0x00000000000edb58
- (void)addProtectionInfoKeysToRemove:(id)arg1;	// IMP=0x00000000000edaee
- (void)clearProtectionInfoKeysToRemoves;	// IMP=0x00000000000edad1
@property(readonly, nonatomic) _Bool hasShareId;
@property(readonly, nonatomic) _Bool hasStableUrl;
@property(readonly, nonatomic) _Bool hasRecordProtectionInfo;
@property(readonly, nonatomic) _Bool hasProtectionInfo;
@property(readonly, nonatomic) _Bool hasZoneIdentifier;

@end

