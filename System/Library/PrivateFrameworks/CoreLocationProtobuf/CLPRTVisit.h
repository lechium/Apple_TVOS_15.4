//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CoreLocationProtobuf/NSCopying-Protocol.h>

@interface CLPRTVisit : PBCodable <NSCopying>
{
    double _entryTime;	// 8 = 0x8
    double _exitTime;	// 16 = 0x10
    struct {
        unsigned int entryTime:1;
        unsigned int exitTime:1;
    } _has;	// 24 = 0x18
}

@property(nonatomic) double exitTime; // @synthesize exitTime=_exitTime;
@property(nonatomic) double entryTime; // @synthesize entryTime=_entryTime;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000004efe7
- (unsigned long long)hash;	// IMP=0x000000000004edc0
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000004ed01
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000004ec7c
- (void)copyTo:(id)arg1;	// IMP=0x000000000004ec1a
- (void)writeTo:(id)arg1;	// IMP=0x000000000004eba5
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000004eb98
- (id)dictionaryRepresentation;	// IMP=0x000000000004e87e
- (id)description;	// IMP=0x000000000004e7cf
@property(nonatomic) _Bool hasExitTime;
@property(nonatomic) _Bool hasEntryTime;

@end
