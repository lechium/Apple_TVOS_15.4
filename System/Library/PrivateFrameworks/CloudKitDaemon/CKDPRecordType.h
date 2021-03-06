//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CloudKitDaemon/NSCopying-Protocol.h>

@class NSString;

@interface CKDPRecordType : PBCodable <NSCopying>
{
    NSString *_name;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000029629c
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000296253
- (unsigned long long)hash;	// IMP=0x0000000000296236
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000029619c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000296124
- (void)copyTo:(id)arg1;	// IMP=0x00000000002960fa
- (void)writeTo:(id)arg1;	// IMP=0x00000000002960d6
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000002960c9
- (id)dictionaryRepresentation;	// IMP=0x0000000000295efd
- (id)description;	// IMP=0x0000000000295e4e
@property(readonly, nonatomic) _Bool hasName;
- (void)_CKLogToFileHandle:(id)arg1 atDepth:(int)arg2;	// IMP=0x000000000017c605

@end

