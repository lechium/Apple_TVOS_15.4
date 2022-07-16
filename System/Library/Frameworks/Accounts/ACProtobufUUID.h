//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Accounts/NSCopying-Protocol.h>

@class NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface ACProtobufUUID : PBCodable <NSCopying>
{
    NSString *_value;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000005a1de
@property(retain, nonatomic) NSString *value; // @synthesize value=_value;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000005a195
- (unsigned long long)hash;	// IMP=0x000000000005a178
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000005a0de
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000005a066
- (void)copyTo:(id)arg1;	// IMP=0x000000000005a043
- (void)writeTo:(id)arg1;	// IMP=0x000000000005a026
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000005a019
- (id)dictionaryRepresentation;	// IMP=0x0000000000059e4b
- (id)description;	// IMP=0x0000000000059d9c
@property(retain, nonatomic) NSUUID *uuid;
- (id)initWithUUID:(id)arg1;	// IMP=0x000000000004f710

@end

