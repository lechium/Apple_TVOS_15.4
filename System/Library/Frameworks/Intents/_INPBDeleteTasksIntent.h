//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBDeleteTasksIntent-Protocol.h>

@class NSArray, NSString, _INPBIntentMetadata, _INPBTaskList;

@interface _INPBDeleteTasksIntent : PBCodable <_INPBDeleteTasksIntent, NSSecureCoding, NSCopying>
{
    CDStruct_eff9c538 _has;	// 8 = 0x8
    _Bool _all;	// 12 = 0xc
    _INPBIntentMetadata *_intentMetadata;	// 16 = 0x10
    _INPBTaskList *_taskList;	// 24 = 0x18
    NSArray *_tasks;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000003eb6f1
+ (Class)tasksType;	// IMP=0x00000000003eb6e0
- (void).cxx_destruct;	// IMP=0x00000000003eb386
@property(copy, nonatomic) NSArray *tasks; // @synthesize tasks=_tasks;
@property(retain, nonatomic) _INPBTaskList *taskList; // @synthesize taskList=_taskList;
@property(retain, nonatomic) _INPBIntentMetadata *intentMetadata; // @synthesize intentMetadata=_intentMetadata;
@property(nonatomic) _Bool all; // @synthesize all=_all;
- (id)dictionaryRepresentation;	// IMP=0x00000000003eaff3
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000003eab0e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000003ea9f3
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000003ea961
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000003ea862
- (void)writeTo:(id)arg1;	// IMP=0x00000000003ea64e
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000003ea641
- (id)tasksAtIndex:(unsigned long long)arg1;	// IMP=0x00000000003ea624
@property(readonly, nonatomic) unsigned long long tasksCount;
- (void)addTasks:(id)arg1;	// IMP=0x00000000003ea58d
- (void)clearTasks;	// IMP=0x00000000003ea570
@property(readonly, nonatomic) _Bool hasTaskList;
@property(readonly, nonatomic) _Bool hasIntentMetadata;
@property(nonatomic) _Bool hasAll;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

