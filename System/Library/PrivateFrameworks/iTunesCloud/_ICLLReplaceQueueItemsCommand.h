//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <iTunesCloud/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface _ICLLReplaceQueueItemsCommand : PBCodable <NSCopying>
{
    NSMutableArray *_items;	// 8 = 0x8
    NSString *_preferredPlayItemId;	// 16 = 0x10
    NSString *_queueContext;	// 24 = 0x18
    int _revision;	// 32 = 0x20
    CDStruct_3e022450 _has;	// 36 = 0x24
}

- (void).cxx_destruct;	// IMP=0x000000000003d28e
- (unsigned long long)hash;	// IMP=0x000000000003d1f7
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000003d0c7
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000003ce9c
- (void)writeTo:(id)arg1;	// IMP=0x000000000003ccfa
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000003cced
- (id)dictionaryRepresentation;	// IMP=0x000000000003ca05
- (id)description;	// IMP=0x000000000003c956

@end

