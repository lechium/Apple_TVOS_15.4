//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MediaRemote/NSCopying-Protocol.h>

@class NSData, NSString;

@interface _MRTransactionKeyProtobuf : PBCodable <NSCopying>
{
    NSString *_identifier;	// 8 = 0x8
    NSData *_userData;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000025a662
@property(retain, nonatomic) NSData *userData; // @synthesize userData=_userData;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000025a5b5
- (unsigned long long)hash;	// IMP=0x000000000025a568
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000025a4a0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000025a402
- (void)copyTo:(id)arg1;	// IMP=0x000000000025a39f
- (void)writeTo:(id)arg1;	// IMP=0x000000000025a342
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000025a335
- (id)dictionaryRepresentation;	// IMP=0x000000000025a120
- (id)description;	// IMP=0x000000000025a071
@property(readonly, nonatomic) _Bool hasUserData;
@property(readonly, nonatomic) _Bool hasIdentifier;

@end
