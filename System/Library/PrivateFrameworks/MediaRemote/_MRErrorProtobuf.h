//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MediaRemote/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface _MRErrorProtobuf : PBCodable <NSCopying>
{
    int _code;	// 8 = 0x8
    NSString *_domain;	// 16 = 0x10
    NSString *_localizedDescription;	// 24 = 0x18
    NSString *_localizedFailureReason;	// 32 = 0x20
    NSMutableArray *_underlyingErrors;	// 40 = 0x28
    struct {
        unsigned int code:1;
    } _has;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000155e40
- (unsigned long long)hash;	// IMP=0x0000000000155cfa
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000155b96
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000015595b
- (void)writeTo:(id)arg1;	// IMP=0x0000000000155761
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000155754
- (id)dictionaryRepresentation;	// IMP=0x0000000000155168
- (id)description;	// IMP=0x00000000001550b9

@end

