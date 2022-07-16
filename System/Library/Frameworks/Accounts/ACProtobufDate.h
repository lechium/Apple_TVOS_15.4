//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Accounts/NSCopying-Protocol.h>

@class NSDate;

__attribute__((visibility("hidden")))
@interface ACProtobufDate : PBCodable <NSCopying>
{
    double _value;	// 8 = 0x8
}

@property(nonatomic) double value; // @synthesize value=_value;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000054576
- (unsigned long long)hash;	// IMP=0x0000000000054477
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000054409
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000543b4
- (void)copyTo:(id)arg1;	// IMP=0x000000000005439d
- (void)writeTo:(id)arg1;	// IMP=0x000000000005437f
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000054372
- (id)dictionaryRepresentation;	// IMP=0x000000000005414d
- (id)description;	// IMP=0x000000000005409e
@property(retain, nonatomic) NSDate *date;
- (id)initWithDate:(id)arg1;	// IMP=0x000000000004f4a7

@end

