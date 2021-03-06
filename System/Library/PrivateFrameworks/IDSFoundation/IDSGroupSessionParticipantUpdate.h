//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSDate, NSDictionary, NSString, NSUUID;

@interface IDSGroupSessionParticipantUpdate : NSObject
{
    NSUUID *_groupUUID;	// 8 = 0x8
    _Bool _isInitiator;	// 16 = 0x10
    unsigned long long _participantIdentifier;	// 24 = 0x18
    NSString *_participantDestinationID;	// 32 = 0x20
    unsigned long long _participantUpdateType;	// 40 = 0x28
    unsigned long long _participantUpdateSubtype;	// 48 = 0x30
    _Bool _fromServer;	// 56 = 0x38
    NSDate *_serverDate;	// 64 = 0x40
    NSData *_participantData;	// 72 = 0x48
    NSData *_clientContextData;	// 80 = 0x50
    NSArray *_members;	// 88 = 0x58
    NSDictionary *_participantIDs;	// 96 = 0x60
    NSUUID *_relaySessionID;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x0000000000004b09
@property(readonly, nonatomic) NSArray *members; // @synthesize members=_members;
@property(readonly, nonatomic) NSDate *serverDate; // @synthesize serverDate=_serverDate;
@property(readonly, nonatomic) _Bool fromServer; // @synthesize fromServer=_fromServer;
@property(readonly, nonatomic) unsigned long long participantUpdateSubtype; // @synthesize participantUpdateSubtype=_participantUpdateSubtype;
@property(readonly, nonatomic) NSUUID *relaySessionID; // @synthesize relaySessionID=_relaySessionID;
@property(readonly, nonatomic) NSDictionary *participantIDs; // @synthesize participantIDs=_participantIDs;
@property(readonly, nonatomic) NSData *clientContextData; // @synthesize clientContextData=_clientContextData;
@property(readonly, nonatomic) NSData *participantData; // @synthesize participantData=_participantData;
@property(readonly, nonatomic) unsigned long long participantUpdateType; // @synthesize participantUpdateType=_participantUpdateType;
@property(readonly, nonatomic) NSString *participantDestinationID; // @synthesize participantDestinationID=_participantDestinationID;
@property(readonly, nonatomic) unsigned long long participantIdentifier; // @synthesize participantIdentifier=_participantIdentifier;
@property(readonly, nonatomic) _Bool isInitiator; // @synthesize isInitiator=_isInitiator;
@property(readonly, nonatomic) NSUUID *groupUUID; // @synthesize groupUUID=_groupUUID;
- (id)debugDescription;	// IMP=0x000000000000486d
- (id)description;	// IMP=0x0000000000004752
- (id)dictionaryRepresentation;	// IMP=0x0000000000004391
- (id)initWithDictionaryRepresentation:(id)arg1;	// IMP=0x0000000000004062
- (id)initWithGroupUUID:(id)arg1 isInitiator:(_Bool)arg2 participantIdentifier:(unsigned long long)arg3 participantDestinationID:(id)arg4 participantUpdateType:(unsigned long long)arg5 participantUpdateSubtype:(unsigned long long)arg6 fromServer:(_Bool)arg7 serverDate:(id)arg8 participantData:(id)arg9 clientContextData:(id)arg10 members:(id)arg11 participantIDs:(id)arg12 relaySessionID:(id)arg13;	// IMP=0x0000000000003ed8

@end

