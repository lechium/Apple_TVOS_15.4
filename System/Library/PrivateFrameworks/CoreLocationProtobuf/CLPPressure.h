//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CoreLocationProtobuf/NSCopying-Protocol.h>

@interface CLPPressure : PBCodable <NSCopying>
{
    double _std;	// 8 = 0x8
    double _timestamp;	// 16 = 0x10
    double _value;	// 24 = 0x18
}

@property(nonatomic) double std; // @synthesize std=_std;
@property(nonatomic) double value; // @synthesize value=_value;
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000004cdc8
- (unsigned long long)hash;	// IMP=0x000000000004cad4
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000004ca26
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000004c9af
- (void)copyTo:(id)arg1;	// IMP=0x000000000004c976
- (void)writeTo:(id)arg1;	// IMP=0x000000000004c8f4
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000004c8e7
- (id)dictionaryRepresentation;	// IMP=0x000000000004c567
- (id)description;	// IMP=0x000000000004c4b8

@end

