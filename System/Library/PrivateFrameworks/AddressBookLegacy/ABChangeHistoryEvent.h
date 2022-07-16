//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface ABChangeHistoryEvent : NSObject
{
    _Bool _imagesChanged;	// 8 = 0x8
    int _entityType;	// 12 = 0xc
    int _eventType;	// 16 = 0x10
    int _recordID;	// 20 = 0x14
    int _personLink;	// 24 = 0x18
    long long _sequenceNumber;	// 32 = 0x20
    NSString *_recordGUID;	// 40 = 0x28
    NSString *_externalID;	// 48 = 0x30
    NSString *_personLinkUUID;	// 56 = 0x38
    NSString *_linkToPersonUUID;	// 64 = 0x40
}

+ (id)groupWithRecordID:(int)arg1 identifier:(id)arg2 eventType:(int)arg3 externalID:(id)arg4;	// IMP=0x0000000000069bdb
+ (id)personWithRecordID:(int)arg1 identifier:(id)arg2 eventType:(int)arg3 imagesChanged:(_Bool)arg4 externalID:(id)arg5 personLink:(int)arg6;	// IMP=0x0000000000069b59
+ (id)unifiedPersonWithIdentifier:(id)arg1 eventType:(int)arg2;	// IMP=0x0000000000069b1c
+ (id)personWithRecordID:(int)arg1 identifier:(id)arg2 eventType:(int)arg3;	// IMP=0x0000000000069adb
+ (id)groupDeleteEventWithRecordID:(int)arg1 identifier:(id)arg2 externalID:(id)arg3;	// IMP=0x0000000000069aa8
+ (id)groupUpdateEventWithRecordID:(int)arg1 identifier:(id)arg2;	// IMP=0x0000000000069a75
+ (id)groupAddEventWithRecordID:(int)arg1 identifier:(id)arg2;	// IMP=0x0000000000069a45
+ (id)meCardChangedEventWithRecordID:(int)arg1 identifier:(id)arg2;	// IMP=0x0000000000069a15
+ (id)setPreferredImageEventWithRecordID:(int)arg1 identifier:(id)arg2;	// IMP=0x00000000000699e5
+ (id)setPreferredNameEventWithRecordID:(int)arg1 identifier:(id)arg2;	// IMP=0x00000000000699b5
+ (id)unlinkEventWithRecordID:(int)arg1 identifier:(id)arg2;	// IMP=0x0000000000069985
+ (id)linkEventWithRecordID:(int)arg1 identifier:(id)arg2 linkToIdentifier:(id)arg3 unifiedIdentifier:(id)arg4;	// IMP=0x0000000000069922
+ (id)unifiedPersonDeleteEventWithUnifiedIdentifier:(id)arg1;	// IMP=0x00000000000698f6
+ (id)unifiedPersonUpdateEventWithUnifiedIdentifier:(id)arg1;	// IMP=0x00000000000698ca
+ (id)unifiedPersonAddEventWithUnifiedIdentifier:(id)arg1;	// IMP=0x000000000006989e
+ (id)personDeleteEventWithRecordID:(int)arg1 identifier:(id)arg2 externalID:(id)arg3 personLink:(int)arg4;	// IMP=0x0000000000069854
+ (id)personUpdateEventWithRecordID:(int)arg1 identifier:(id)arg2 imagesChanged:(_Bool)arg3 personLink:(int)arg4;	// IMP=0x000000000006980a
+ (id)personAddEventWithRecordID:(int)arg1 identifier:(id)arg2;	// IMP=0x00000000000697dd
@property(readonly, nonatomic) NSString *linkToPersonUUID; // @synthesize linkToPersonUUID=_linkToPersonUUID;
@property(readonly, nonatomic) NSString *personLinkUUID; // @synthesize personLinkUUID=_personLinkUUID;
@property(readonly, nonatomic) int personLink; // @synthesize personLink=_personLink;
@property(readonly, nonatomic) _Bool imagesChanged; // @synthesize imagesChanged=_imagesChanged;
@property(readonly, nonatomic) NSString *externalID; // @synthesize externalID=_externalID;
@property(readonly, nonatomic) NSString *recordGUID; // @synthesize recordGUID=_recordGUID;
@property(readonly, nonatomic) int recordID; // @synthesize recordID=_recordID;
@property(readonly, nonatomic) long long sequenceNumber; // @synthesize sequenceNumber=_sequenceNumber;
@property(readonly, nonatomic) int eventType; // @synthesize eventType=_eventType;
@property(readonly, nonatomic) int entityType; // @synthesize entityType=_entityType;
- (_Bool)isSequenceNumber:(long long)arg1 equalToOther:(long long)arg2;	// IMP=0x000000000006a7a5
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000006a203
- (id)descriptionForEventType:(int)arg1;	// IMP=0x000000000006a02f
- (id)descriptionForEntityType:(int)arg1;	// IMP=0x0000000000069f0d
- (id)description;	// IMP=0x0000000000069d6b
- (void)dealloc;	// IMP=0x0000000000069d13
- (id)initWithEntityType:(int)arg1 eventType:(int)arg2 sequenceNumber:(long long)arg3 recordID:(int)arg4 recordGUID:(id)arg5 externalID:(id)arg6 imagesChanged:(_Bool)arg7 personLink:(int)arg8 personLinkUUID:(id)arg9 linkToPersonUUID:(id)arg10;	// IMP=0x0000000000069c59

@end
