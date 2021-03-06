//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBStartCallIntent-Protocol.h>

@class NSArray, NSString, _INPBCallRecordFilter, _INPBCallRecordValue, _INPBIntentMetadata;

@interface _INPBStartCallIntent : PBCodable <_INPBStartCallIntent, NSSecureCoding, NSCopying>
{
    struct {
        unsigned int audioRoute:1;
        unsigned int callCapability:1;
        unsigned int destinationType:1;
        unsigned int isGroupCall:1;
        unsigned int preferredCallProvider:1;
        unsigned int recordTypeForRedialing:1;
        unsigned int ttyType:1;
    } _has;	// 8 = 0x8
    _Bool _isGroupCall;	// 12 = 0xc
    int _audioRoute;	// 16 = 0x10
    int _callCapability;	// 20 = 0x14
    int _destinationType;	// 24 = 0x18
    int _preferredCallProvider;	// 28 = 0x1c
    int _recordTypeForRedialing;	// 32 = 0x20
    int _ttyType;	// 36 = 0x24
    NSArray *_callGroups;	// 40 = 0x28
    _INPBCallRecordFilter *_callRecordFilter;	// 48 = 0x30
    _INPBCallRecordValue *_callRecordToCallBack;	// 56 = 0x38
    NSArray *_contacts;	// 64 = 0x40
    NSString *_faceTimeLink;	// 72 = 0x48
    _INPBIntentMetadata *_intentMetadata;	// 80 = 0x50
    NSString *_notificationThreadIdentifier;	// 88 = 0x58
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000003b906e
+ (Class)contactsType;	// IMP=0x00000000003b905d
+ (Class)callGroupsType;	// IMP=0x00000000003b904c
- (void).cxx_destruct;	// IMP=0x00000000003b87eb
@property(nonatomic) int ttyType; // @synthesize ttyType=_ttyType;
@property(nonatomic) int recordTypeForRedialing; // @synthesize recordTypeForRedialing=_recordTypeForRedialing;
@property(nonatomic) int preferredCallProvider; // @synthesize preferredCallProvider=_preferredCallProvider;
@property(copy, nonatomic) NSString *notificationThreadIdentifier; // @synthesize notificationThreadIdentifier=_notificationThreadIdentifier;
@property(nonatomic) _Bool isGroupCall; // @synthesize isGroupCall=_isGroupCall;
@property(retain, nonatomic) _INPBIntentMetadata *intentMetadata; // @synthesize intentMetadata=_intentMetadata;
@property(copy, nonatomic) NSString *faceTimeLink; // @synthesize faceTimeLink=_faceTimeLink;
@property(nonatomic) int destinationType; // @synthesize destinationType=_destinationType;
@property(copy, nonatomic) NSArray *contacts; // @synthesize contacts=_contacts;
@property(retain, nonatomic) _INPBCallRecordValue *callRecordToCallBack; // @synthesize callRecordToCallBack=_callRecordToCallBack;
@property(retain, nonatomic) _INPBCallRecordFilter *callRecordFilter; // @synthesize callRecordFilter=_callRecordFilter;
@property(copy, nonatomic) NSArray *callGroups; // @synthesize callGroups=_callGroups;
@property(nonatomic) int callCapability; // @synthesize callCapability=_callCapability;
@property(nonatomic) int audioRoute; // @synthesize audioRoute=_audioRoute;
- (id)dictionaryRepresentation;	// IMP=0x00000000003b7c80
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000003b6f36
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000003b6c19
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000003b6b87
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000003b6a88
- (void)writeTo:(id)arg1;	// IMP=0x00000000003b65a5
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000003b6598
- (int)StringAsTTYType:(id)arg1;	// IMP=0x00000000003b6506
- (id)ttyTypeAsString:(int)arg1;	// IMP=0x00000000003b64a0
@property(nonatomic) _Bool hasTtyType;
- (int)StringAsRecordTypeForRedialing:(id)arg1;	// IMP=0x00000000003b6308
- (id)recordTypeForRedialingAsString:(int)arg1;	// IMP=0x00000000003b6251
@property(nonatomic) _Bool hasRecordTypeForRedialing;
- (int)StringAsPreferredCallProvider:(id)arg1;	// IMP=0x00000000003b6153
- (id)preferredCallProviderAsString:(int)arg1;	// IMP=0x00000000003b60ec
@property(nonatomic) _Bool hasPreferredCallProvider;
@property(readonly, nonatomic) _Bool hasNotificationThreadIdentifier;
@property(nonatomic) _Bool hasIsGroupCall;
@property(readonly, nonatomic) _Bool hasIntentMetadata;
@property(readonly, nonatomic) _Bool hasFaceTimeLink;
- (int)StringAsDestinationType:(id)arg1;	// IMP=0x00000000003b5eb4
- (id)destinationTypeAsString:(int)arg1;	// IMP=0x00000000003b5e28
@property(nonatomic) _Bool hasDestinationType;
- (id)contactsAtIndex:(unsigned long long)arg1;	// IMP=0x00000000003b5dab
@property(readonly, nonatomic) unsigned long long contactsCount;
- (void)addContacts:(id)arg1;	// IMP=0x00000000003b5d14
- (void)clearContacts;	// IMP=0x00000000003b5cf7
@property(readonly, nonatomic) _Bool hasCallRecordToCallBack;
@property(readonly, nonatomic) _Bool hasCallRecordFilter;
- (id)callGroupsAtIndex:(unsigned long long)arg1;	// IMP=0x00000000003b5c54
@property(readonly, nonatomic) unsigned long long callGroupsCount;
- (void)addCallGroups:(id)arg1;	// IMP=0x00000000003b5bbd
- (void)clearCallGroups;	// IMP=0x00000000003b5ba0
- (int)StringAsCallCapability:(id)arg1;	// IMP=0x00000000003b5b05
- (id)callCapabilityAsString:(int)arg1;	// IMP=0x00000000003b5aaf
@property(nonatomic) _Bool hasCallCapability;
- (int)StringAsAudioRoute:(id)arg1;	// IMP=0x00000000003b59b3
- (id)audioRouteAsString:(int)arg1;	// IMP=0x00000000003b594c
@property(nonatomic) _Bool hasAudioRoute;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

