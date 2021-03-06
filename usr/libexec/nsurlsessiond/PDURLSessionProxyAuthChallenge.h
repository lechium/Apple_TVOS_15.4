//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData;

@interface PDURLSessionProxyAuthChallenge : PBCodable
{
    NSData *_archiveList;	// 8 = 0x8
    unsigned int _version;	// 16 = 0x10
    CDStruct_f20694ce _has;	// 20 = 0x14
}

- (void).cxx_destruct;	// IMP=0x002000000004a676
@property(retain, nonatomic) NSData *archiveList; // @synthesize archiveList=_archiveList;
@property(nonatomic) unsigned int version; // @synthesize version=_version;
- (void)mergeFrom:(id)arg1;	// IMP=0x001000000004a5de
- (unsigned long long)hash;	// IMP=0x001000000004a592
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000004a4cd
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000004a43d
- (void)copyTo:(id)arg1;	// IMP=0x001000000004a3da
- (void)writeTo:(id)arg1;	// IMP=0x001000000004a376
- (_Bool)readFrom:(id)arg1;	// IMP=0x001000000004a369
- (id)dictionaryRepresentation;	// IMP=0x001000000004a2ab
- (id)description;	// IMP=0x001000000004a1fc
@property(readonly, nonatomic) _Bool hasArchiveList;
@property(nonatomic) _Bool hasVersion;

@end

