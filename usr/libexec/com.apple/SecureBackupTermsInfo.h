//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface SecureBackupTermsInfo : PBCodable
{
    NSString *_altDSID;	// 8 = 0x8
    NSString *_countryCode;	// 16 = 0x10
    NSString *_icloudVersion;	// 24 = 0x18
    NSString *_metadata;	// 32 = 0x20
    NSString *_version;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0020000000011587
@property(retain, nonatomic) NSString *altDSID; // @synthesize altDSID=_altDSID;
@property(retain, nonatomic) NSString *metadata; // @synthesize metadata=_metadata;
@property(retain, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
@property(retain, nonatomic) NSString *icloudVersion; // @synthesize icloudVersion=_icloudVersion;
@property(retain, nonatomic) NSString *version; // @synthesize version=_version;
- (void)mergeFrom:(id)arg1;	// IMP=0x001000000001140b
- (unsigned long long)hash;	// IMP=0x0010000000011368
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000011208
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000110f0
- (void)copyTo:(id)arg1;	// IMP=0x001000000001102d
- (void)writeTo:(id)arg1;	// IMP=0x0010000000010f79
- (_Bool)readFrom:(id)arg1;	// IMP=0x0010000000010f6c
- (id)dictionaryRepresentation;	// IMP=0x0010000000010ced
- (id)description;	// IMP=0x0010000000010c3e
@property(readonly, nonatomic) _Bool hasAltDSID;
@property(readonly, nonatomic) _Bool hasMetadata;
@property(readonly, nonatomic) _Bool hasCountryCode;
@property(readonly, nonatomic) _Bool hasIcloudVersion;
@property(readonly, nonatomic) _Bool hasVersion;

@end

