//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CopresenceCore/NSCopying-Protocol.h>

@class CPMessagingHandle;

@interface CPMessagingConversationMember : PBCodable <NSCopying>
{
    CPMessagingHandle *_handle;	// 8 = 0x8
    unsigned int _version;	// 16 = 0x10
    struct {
        unsigned int version:1;
    } _has;	// 20 = 0x14
}

- (void).cxx_destruct;	// IMP=0x0000000000030e35
@property(retain, nonatomic) CPMessagingHandle *handle; // @synthesize handle=_handle;
@property(nonatomic) unsigned int version; // @synthesize version=_version;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000030d86
- (unsigned long long)hash;	// IMP=0x0000000000030d3a
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000030c75
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000030be5
- (void)copyTo:(id)arg1;	// IMP=0x0000000000030b82
- (void)writeTo:(id)arg1;	// IMP=0x0000000000030b1e
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000030b11
- (id)dictionaryRepresentation;	// IMP=0x00000000000307cf
- (id)description;	// IMP=0x0000000000030720
@property(readonly, nonatomic) _Bool hasHandle;
@property(nonatomic) _Bool hasVersion;

@end
