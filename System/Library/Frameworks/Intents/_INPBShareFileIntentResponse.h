//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBShareFileIntentResponse-Protocol.h>

@class NSArray, NSString;

@interface _INPBShareFileIntentResponse : PBCodable <_INPBShareFileIntentResponse, NSSecureCoding, NSCopying>
{
    struct {
        unsigned int confirm:1;
        unsigned int shareMode:1;
        unsigned int success:1;
    } _has;	// 8 = 0x8
    _Bool _confirm;	// 12 = 0xc
    _Bool _success;	// 13 = 0xd
    int _shareMode;	// 16 = 0x10
    NSArray *_recipients;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000ea52d
+ (Class)recipientsType;	// IMP=0x00000000000ea51c
- (void).cxx_destruct;	// IMP=0x00000000000ea182
@property(nonatomic) _Bool success; // @synthesize success=_success;
@property(nonatomic) int shareMode; // @synthesize shareMode=_shareMode;
@property(copy, nonatomic) NSArray *recipients; // @synthesize recipients=_recipients;
@property(nonatomic) _Bool confirm; // @synthesize confirm=_confirm;
- (id)dictionaryRepresentation;	// IMP=0x00000000000e9da3
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000e9a2f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000e9921
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000e988f
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000e9790
- (void)writeTo:(id)arg1;	// IMP=0x00000000000e95c8
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000e95bb
@property(nonatomic) _Bool hasSuccess;
- (int)StringAsShareMode:(id)arg1;	// IMP=0x00000000000e94de
- (id)shareModeAsString:(int)arg1;	// IMP=0x00000000000e9478
@property(nonatomic) _Bool hasShareMode;
- (id)recipientsAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000e93fd
@property(readonly, nonatomic) unsigned long long recipientsCount;
- (void)addRecipients:(id)arg1;	// IMP=0x00000000000e9366
- (void)clearRecipients;	// IMP=0x00000000000e9349
@property(nonatomic) _Bool hasConfirm;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

