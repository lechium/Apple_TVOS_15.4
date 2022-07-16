//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class MISSING_TYPE, NSData;

@interface PDURLSessionProxyResponse : PBCodable
{
    NSData *_archiveList;	// 8 = 0x8
    unsigned int _version;	// 16 = 0x10
    MISSING_TYPE *_has;	// 20 = 0x14
}

- (void).cxx_destruct;	// IMP=0x0020000000032f1c
@property(retain, nonatomic) NSData *archiveList; // @synthesize archiveList=_archiveList;
@property(nonatomic) unsigned int version; // @synthesize version=_version;
- (void)mergeFrom:(id)arg1;	// IMP=0x0010000000032e84
- (unsigned long long)hash;	// IMP=0x0010000000032e38
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000032d73
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000032ce3
- (void)copyTo:(id)arg1;	// IMP=0x0010000000032c80
- (void)writeTo:(id)arg1;	// IMP=0x0010000000032c1c
- (_Bool)readFrom:(id)arg1;	// IMP=0x0010000000032c0f
- (id)dictionaryRepresentation;	// IMP=0x0010000000032b51
- (id)description;	// IMP=0x0010000000032aa2
@property(readonly, nonatomic) _Bool hasArchiveList;
@property(nonatomic) _Bool hasVersion;

@end
