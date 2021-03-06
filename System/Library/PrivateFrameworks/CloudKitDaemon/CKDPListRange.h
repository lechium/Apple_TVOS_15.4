//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CloudKitDaemon/NSCopying-Protocol.h>

@class CKDPListPosition;

@interface CKDPListRange : PBCodable <NSCopying>
{
    CKDPListPosition *_left;	// 8 = 0x8
    CKDPListPosition *_right;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000239925
@property(retain, nonatomic) CKDPListPosition *right; // @synthesize right=_right;
@property(retain, nonatomic) CKDPListPosition *left; // @synthesize left=_left;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000023984a
- (unsigned long long)hash;	// IMP=0x00000000002397fd
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000239735
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000239697
- (void)copyTo:(id)arg1;	// IMP=0x0000000000239634
- (void)writeTo:(id)arg1;	// IMP=0x00000000002395d7
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000002395ca
- (id)dictionaryRepresentation;	// IMP=0x000000000023931f
- (id)description;	// IMP=0x0000000000239270
@property(readonly, nonatomic) _Bool hasRight;
@property(readonly, nonatomic) _Bool hasLeft;
- (void)_CKLogToFileHandle:(id)arg1 atDepth:(int)arg2;	// IMP=0x000000000017baf5

@end

