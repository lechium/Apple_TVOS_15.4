//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <iTunesCloud/NSCopying-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _ICLLClientInfoCommand : PBCodable <NSCopying>
{
    NSString *_externalId;	// 8 = 0x8
    NSString *_sharedSessionToken;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000069bc1
- (unsigned long long)hash;	// IMP=0x0000000000069b74
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000069aac
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000069a0e
- (void)writeTo:(id)arg1;	// IMP=0x00000000000699b1
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000699a4
- (id)dictionaryRepresentation;	// IMP=0x0000000000069921
- (id)description;	// IMP=0x0000000000069872

@end

