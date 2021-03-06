//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBControlHomeIntent-Protocol.h>

@class NSArray, NSString, _INPBDateTimeRange, _INPBHomeUserTask, _INPBIntentMetadata;

@interface _INPBControlHomeIntent : PBCodable <_INPBControlHomeIntent, NSSecureCoding, NSCopying>
{
    struct _has;	// 8 = 0x8
    NSArray *_contents;	// 8 = 0x8
    NSArray *_filters;	// 16 = 0x10
    _INPBIntentMetadata *_intentMetadata;	// 24 = 0x18
    _INPBDateTimeRange *_time;	// 32 = 0x20
    _INPBHomeUserTask *_userTask;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000010b0de
+ (Class)filtersType;	// IMP=0x000000000010b0cd
+ (Class)contentsType;	// IMP=0x000000000010b0bc
- (void).cxx_destruct;	// IMP=0x000000000010ad05
@property(retain, nonatomic) _INPBHomeUserTask *userTask; // @synthesize userTask=_userTask;
@property(retain, nonatomic) _INPBDateTimeRange *time; // @synthesize time=_time;
@property(retain, nonatomic) _INPBIntentMetadata *intentMetadata; // @synthesize intentMetadata=_intentMetadata;
@property(copy, nonatomic) NSArray *filters; // @synthesize filters=_filters;
@property(copy, nonatomic) NSArray *contents; // @synthesize contents=_contents;
- (id)dictionaryRepresentation;	// IMP=0x000000000010a79f
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000010a13e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000109fe2
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000109f50
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000109e51
- (void)writeTo:(id)arg1;	// IMP=0x0000000000109b23
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000109b16
@property(readonly, nonatomic) _Bool hasUserTask;
@property(readonly, nonatomic) _Bool hasTime;
@property(readonly, nonatomic) _Bool hasIntentMetadata;
- (id)filtersAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000109a7e
@property(readonly, nonatomic) unsigned long long filtersCount;
- (void)addFilters:(id)arg1;	// IMP=0x00000000001099e7
- (void)clearFilters;	// IMP=0x00000000001099ca
- (id)contentsAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000109979
@property(readonly, nonatomic) unsigned long long contentsCount;
- (void)addContents:(id)arg1;	// IMP=0x00000000001098e2
- (void)clearContents;	// IMP=0x00000000001098c5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

