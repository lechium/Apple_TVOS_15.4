//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CloudKitDaemon/NSCopying-Protocol.h>

@class NSString;

@interface CKDPRecordFieldIdentifier : PBCodable <NSCopying>
{
    NSString *_name;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000c8456
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000000c840d
- (unsigned long long)hash;	// IMP=0x00000000000c83f0
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000c8356
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000c82de
- (void)copyTo:(id)arg1;	// IMP=0x00000000000c82b4
- (void)writeTo:(id)arg1;	// IMP=0x00000000000c8290
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000c8283
- (id)dictionaryRepresentation;	// IMP=0x00000000000c80b7
- (id)description;	// IMP=0x00000000000c8008
@property(readonly, nonatomic) _Bool hasName;
- (void)_CKLogToFileHandle:(id)arg1 atDepth:(int)arg2;	// IMP=0x000000000017b9bf

@end
