//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MediaRemote/NSCopying-Protocol.h>

@class NSData, NSString;

__attribute__((visibility("hidden")))
@interface _MRGenericMessageProtobuf : PBCodable <NSCopying>
{
    NSData *_data;	// 8 = 0x8
    NSString *_key;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000c73cb
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
- (unsigned long long)hash;	// IMP=0x00000000000c7340
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000c7278
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000c71da
- (void)writeTo:(id)arg1;	// IMP=0x00000000000c7163
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000c7156
- (id)dictionaryRepresentation;	// IMP=0x00000000000c6f41
- (id)description;	// IMP=0x00000000000c6e92
@property(readonly, nonatomic) _Bool hasData;

@end
