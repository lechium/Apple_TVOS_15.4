//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MediaRemote/NSCopying-Protocol.h>

@class NSString, _MRSendCommandMessageProtobuf;

__attribute__((visibility("hidden")))
@interface _MRSendCommandResultHandlerDialogActionProtobuf : PBCodable <NSCopying>
{
    _MRSendCommandMessageProtobuf *_event;	// 8 = 0x8
    NSString *_title;	// 16 = 0x10
    int _type;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000b943f
- (unsigned long long)hash;	// IMP=0x00000000000b9372
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000b9299
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000b91ed
- (void)writeTo:(id)arg1;	// IMP=0x00000000000b913f
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000b9132
- (id)dictionaryRepresentation;	// IMP=0x00000000000b8d73
- (id)description;	// IMP=0x00000000000b8cc4

@end
