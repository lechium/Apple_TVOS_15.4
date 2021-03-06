//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBCreateTaskListIntentResponse-Protocol.h>

@class NSString, _INPBTaskList;

@interface _INPBCreateTaskListIntentResponse : PBCodable <_INPBCreateTaskListIntentResponse, NSSecureCoding, NSCopying>
{
    struct _has;	// 8 = 0x8
    _INPBTaskList *_createdTaskList;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000159530
- (void).cxx_destruct;	// IMP=0x0000000000159370
@property(retain, nonatomic) _INPBTaskList *createdTaskList; // @synthesize createdTaskList=_createdTaskList;
- (id)dictionaryRepresentation;	// IMP=0x00000000001592c4
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000159125
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001590a3
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000159011
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000158f12
- (void)writeTo:(id)arg1;	// IMP=0x0000000000158e8b
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000158e7e
@property(readonly, nonatomic) _Bool hasCreatedTaskList;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

