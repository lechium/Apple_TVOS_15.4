//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CoreLocationProtobuf/NSCopying-Protocol.h>

@class NSString;

@interface CLPWtwCollectionResponse : PBCodable <NSCopying>
{
    NSString *_msg;	// 8 = 0x8
    _Bool _success;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000057060
@property(retain, nonatomic) NSString *msg; // @synthesize msg=_msg;
@property(nonatomic) _Bool success; // @synthesize success=_success;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000056fea
- (unsigned long long)hash;	// IMP=0x0000000000056fae
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000056efc
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000056e76
- (void)copyTo:(id)arg1;	// IMP=0x0000000000056e3f
- (void)writeTo:(id)arg1;	// IMP=0x0000000000056de6
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000056dd9
- (id)dictionaryRepresentation;	// IMP=0x0000000000056b15
- (id)description;	// IMP=0x0000000000056a66
@property(readonly, nonatomic) _Bool hasMsg;

@end

