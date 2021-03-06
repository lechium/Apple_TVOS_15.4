//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CloudKit/NSCopying-Protocol.h>

@class NSData;

@interface CKDPStreamingAssetFooter : PBCodable <NSCopying>
{
    NSData *_md5;	// 8 = 0x8
    int _status;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000914f0
@property(retain, nonatomic) NSData *md5; // @synthesize md5=_md5;
@property(nonatomic) int status; // @synthesize status=_status;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000009147a
- (unsigned long long)hash;	// IMP=0x000000000009143e
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000091394
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000009130e
- (void)copyTo:(id)arg1;	// IMP=0x00000000000912de
- (void)writeTo:(id)arg1;	// IMP=0x0000000000091267
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000009105b
- (id)dictionaryRepresentation;	// IMP=0x0000000000090f87
- (id)description;	// IMP=0x0000000000090ed8
- (int)StringAsStatus:(id)arg1;	// IMP=0x0000000000090e76
- (id)statusAsString:(int)arg1;	// IMP=0x0000000000090e21

@end

