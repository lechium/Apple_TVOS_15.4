//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CloudKitDaemon/NSCopying-Protocol.h>

@class NSMutableArray;

@interface CKDPUserPrivacySettingsBatchLookupResponse : PBCodable <NSCopying>
{
    NSMutableArray *_containerPrivacySettings;	// 8 = 0x8
}

+ (Class)containerPrivacySettingsType;	// IMP=0x0000000000184e6e
- (void).cxx_destruct;	// IMP=0x00000000001858fa
@property(retain, nonatomic) NSMutableArray *containerPrivacySettings; // @synthesize containerPrivacySettings=_containerPrivacySettings;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000001857a0
- (unsigned long long)hash;	// IMP=0x0000000000185783
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001856e9
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000185526
- (void)copyTo:(id)arg1;	// IMP=0x000000000018545f
- (void)writeTo:(id)arg1;	// IMP=0x000000000018532f
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000185322
- (id)dictionaryRepresentation;	// IMP=0x0000000000184f2e
- (id)description;	// IMP=0x0000000000184e7f
- (id)containerPrivacySettingsAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000184e51
- (unsigned long long)containerPrivacySettingsCount;	// IMP=0x0000000000184e34
- (void)addContainerPrivacySettings:(id)arg1;	// IMP=0x0000000000184dca
- (void)clearContainerPrivacySettings;	// IMP=0x0000000000184dad

@end

