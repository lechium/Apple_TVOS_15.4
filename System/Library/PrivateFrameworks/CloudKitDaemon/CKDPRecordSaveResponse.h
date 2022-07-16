//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CloudKitDaemon/NSCopying-Protocol.h>

@class CKDPDate, CKDPDateStatistics, CKDPRecord, NSString;

@interface CKDPRecordSaveResponse : PBCodable <NSCopying>
{
    NSString *_etag;	// 8 = 0x8
    CKDPDate *_expirationTime;	// 16 = 0x10
    CKDPRecord *_serverFields;	// 24 = 0x18
    CKDPDateStatistics *_timeStatistics;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000011531d
@property(retain, nonatomic) CKDPDate *expirationTime; // @synthesize expirationTime=_expirationTime;
@property(retain, nonatomic) CKDPRecord *serverFields; // @synthesize serverFields=_serverFields;
@property(retain, nonatomic) CKDPDateStatistics *timeStatistics; // @synthesize timeStatistics=_timeStatistics;
@property(retain, nonatomic) NSString *etag; // @synthesize etag=_etag;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000001151a1
- (unsigned long long)hash;	// IMP=0x000000000011511d
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000114ff1
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000114f07
- (void)copyTo:(id)arg1;	// IMP=0x0000000000114e64
- (void)writeTo:(id)arg1;	// IMP=0x0000000000114dcd
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000114dc0
- (id)dictionaryRepresentation;	// IMP=0x00000000001149e3
- (id)description;	// IMP=0x0000000000114934
@property(readonly, nonatomic) _Bool hasExpirationTime;
@property(readonly, nonatomic) _Bool hasServerFields;
@property(readonly, nonatomic) _Bool hasTimeStatistics;
@property(readonly, nonatomic) _Bool hasEtag;

@end
