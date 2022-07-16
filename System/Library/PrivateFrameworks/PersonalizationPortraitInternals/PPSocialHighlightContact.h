//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <PersonalizationPortraitInternals/NSCopying-Protocol.h>

@class NSString;

@interface PPSocialHighlightContact : PBCodable <NSCopying>
{
    NSString *_handle;	// 8 = 0x8
    _Bool _isMe;	// 16 = 0x10
    _Bool _isSignificant;	// 17 = 0x11
    struct {
        unsigned int isMe:1;
        unsigned int isSignificant:1;
    } _has;	// 20 = 0x14
}

- (void).cxx_destruct;	// IMP=0x000000000009ed70
@property(nonatomic) _Bool isMe; // @synthesize isMe=_isMe;
@property(retain, nonatomic) NSString *handle; // @synthesize handle=_handle;
@property(nonatomic) _Bool isSignificant; // @synthesize isSignificant=_isSignificant;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000009eca4
- (unsigned long long)hash;	// IMP=0x000000000009ec2c
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000009eb22
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000009ea6e
- (void)copyTo:(id)arg1;	// IMP=0x000000000009e9e7
- (void)writeTo:(id)arg1;	// IMP=0x000000000009e959
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000009e94c
- (id)dictionaryRepresentation;	// IMP=0x000000000009e82e
- (id)description;	// IMP=0x000000000009e77f
@property(nonatomic) _Bool hasIsMe;
@property(readonly, nonatomic) _Bool hasHandle;
@property(nonatomic) _Bool hasIsSignificant;

@end

