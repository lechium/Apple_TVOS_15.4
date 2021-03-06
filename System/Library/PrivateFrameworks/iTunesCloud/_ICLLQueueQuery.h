//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <iTunesCloud/NSCopying-Protocol.h>

@class NSString, _ICLLQueue;

__attribute__((visibility("hidden")))
@interface _ICLLQueueQuery : PBCodable <NSCopying>
{
    _ICLLQueue *_queue;	// 8 = 0x8
    NSString *_queueContext;	// 16 = 0x10
    int _revision;	// 24 = 0x18
    CDStruct_3e022450 _has;	// 28 = 0x1c
}

- (void).cxx_destruct;	// IMP=0x00000000000fb0cd
- (unsigned long long)hash;	// IMP=0x00000000000fb058
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000faf63
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000faea5
- (void)writeTo:(id)arg1;	// IMP=0x00000000000fae24
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000fae17
- (id)dictionaryRepresentation;	// IMP=0x00000000000fad0d
- (id)description;	// IMP=0x00000000000fac5e

@end

