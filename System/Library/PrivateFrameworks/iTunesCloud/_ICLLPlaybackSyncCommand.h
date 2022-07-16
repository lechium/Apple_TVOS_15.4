//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <iTunesCloud/NSCopying-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _ICLLPlaybackSyncCommand : PBCodable <NSCopying>
{
    NSString *_participantState;	// 8 = 0x8
    int _payload;	// 16 = 0x10
    NSString *_transportControlState;	// 24 = 0x18
    CDStruct_69063d38 _has;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000151248
- (unsigned long long)hash;	// IMP=0x00000000001511c8
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001510d3
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000151012
- (void)writeTo:(id)arg1;	// IMP=0x0000000000150fb5
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000150fa8
- (id)dictionaryRepresentation;	// IMP=0x0000000000150ec2
- (id)description;	// IMP=0x0000000000150e13

@end

