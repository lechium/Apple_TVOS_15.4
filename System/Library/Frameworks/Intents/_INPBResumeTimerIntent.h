//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBResumeTimerIntent-Protocol.h>

@class NSString, _INPBIntentMetadata, _INPBTimer;

@interface _INPBResumeTimerIntent : PBCodable <_INPBResumeTimerIntent, NSSecureCoding, NSCopying>
{
    struct {
        unsigned int resumeMultiple:1;
    } _has;	// 8 = 0x8
    _Bool _resumeMultiple;	// 12 = 0xc
    _INPBIntentMetadata *_intentMetadata;	// 16 = 0x10
    _INPBTimer *_targetTimer;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000019a166
- (void).cxx_destruct;	// IMP=0x0000000000199e87
@property(retain, nonatomic) _INPBTimer *targetTimer; // @synthesize targetTimer=_targetTimer;
@property(nonatomic) _Bool resumeMultiple; // @synthesize resumeMultiple=_resumeMultiple;
@property(retain, nonatomic) _INPBIntentMetadata *intentMetadata; // @synthesize intentMetadata=_intentMetadata;
- (id)dictionaryRepresentation;	// IMP=0x0000000000199cef
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000019993f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000199859
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001997c7
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001996c8
- (void)writeTo:(id)arg1;	// IMP=0x00000000001995b8
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001995ab
@property(readonly, nonatomic) _Bool hasTargetTimer;
@property(nonatomic) _Bool hasResumeMultiple;
@property(readonly, nonatomic) _Bool hasIntentMetadata;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

