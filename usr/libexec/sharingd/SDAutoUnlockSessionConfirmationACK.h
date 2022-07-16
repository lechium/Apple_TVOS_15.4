//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@interface SDAutoUnlockSessionConfirmationACK : PBCodable
{
    unsigned int _version;	// 8 = 0x8
    _Bool _success;	// 12 = 0xc
    CDStruct_3dd40ee6 _has;	// 16 = 0x10
}

@property(nonatomic) _Bool success; // @synthesize success=_success;
@property(nonatomic) unsigned int version; // @synthesize version=_version;
- (void)mergeFrom:(id)arg1;	// IMP=0x001000000008a413
- (unsigned long long)hash;	// IMP=0x001000000008a3ce
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000008a30b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000008a28e
- (void)copyTo:(id)arg1;	// IMP=0x001000000008a234
- (void)writeTo:(id)arg1;	// IMP=0x001000000008a1c2
- (_Bool)readFrom:(id)arg1;	// IMP=0x001000000008a1b5
- (id)dictionaryRepresentation;	// IMP=0x0010000000089e36
- (id)description;	// IMP=0x0010000000089d87
@property(nonatomic) _Bool hasSuccess;
@property(nonatomic) _Bool hasVersion;

@end

