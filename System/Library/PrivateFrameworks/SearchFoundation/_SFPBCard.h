//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SearchFoundation/NSSecureCoding-Protocol.h>
#import <SearchFoundation/_SFPBCard-Protocol.h>

@class NSArray, NSData, NSString, _SFPBURL;

@interface _SFPBCard : PBCodable <_SFPBCard, NSSecureCoding>
{
    _Bool _flexibleSectionOrder;	// 8 = 0x8
    int _type;	// 12 = 0xc
    int _source;	// 16 = 0x10
    NSString *_title;	// 24 = 0x18
    NSArray *_cardSections;	// 32 = 0x20
    NSData *_intentMessageData;	// 40 = 0x28
    NSString *_intentMessageName;	// 48 = 0x30
    NSData *_intentResponseMessageData;	// 56 = 0x38
    NSString *_intentResponseMessageName;	// 64 = 0x40
    NSArray *_dismissalCommands;	// 72 = 0x48
    NSString *_cardId;	// 80 = 0x50
    NSString *_contextReferenceIdentifier;	// 88 = 0x58
    _SFPBURL *_urlValue;	// 96 = 0x60
    NSData *_entityIdentifier;	// 104 = 0x68
    NSString *_resultIdentifier;	// 112 = 0x70
    unsigned long long _queryId;	// 120 = 0x78
    NSString *_fbr;	// 128 = 0x80
    NSArray *_entityProtobufMessages;	// 136 = 0x88
}

- (void).cxx_destruct;	// IMP=0x0000000000165951
@property(copy, nonatomic) NSArray *entityProtobufMessages; // @synthesize entityProtobufMessages=_entityProtobufMessages;
@property(nonatomic) _Bool flexibleSectionOrder; // @synthesize flexibleSectionOrder=_flexibleSectionOrder;
@property(copy, nonatomic) NSString *fbr; // @synthesize fbr=_fbr;
@property(nonatomic) unsigned long long queryId; // @synthesize queryId=_queryId;
@property(copy, nonatomic) NSString *resultIdentifier; // @synthesize resultIdentifier=_resultIdentifier;
@property(copy, nonatomic) NSData *entityIdentifier; // @synthesize entityIdentifier=_entityIdentifier;
@property(nonatomic) int source; // @synthesize source=_source;
@property(retain, nonatomic) _SFPBURL *urlValue; // @synthesize urlValue=_urlValue;
@property(copy, nonatomic) NSString *contextReferenceIdentifier; // @synthesize contextReferenceIdentifier=_contextReferenceIdentifier;
@property(copy, nonatomic) NSString *cardId; // @synthesize cardId=_cardId;
@property(copy, nonatomic) NSArray *dismissalCommands; // @synthesize dismissalCommands=_dismissalCommands;
@property(copy, nonatomic) NSString *intentResponseMessageName; // @synthesize intentResponseMessageName=_intentResponseMessageName;
@property(copy, nonatomic) NSData *intentResponseMessageData; // @synthesize intentResponseMessageData=_intentResponseMessageData;
@property(copy, nonatomic) NSString *intentMessageName; // @synthesize intentMessageName=_intentMessageName;
@property(copy, nonatomic) NSData *intentMessageData; // @synthesize intentMessageData=_intentMessageData;
@property(copy) NSArray *cardSections; // @synthesize cardSections=_cardSections;
@property(nonatomic) int type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000164aea
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000164a2c
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x0000000000163b78
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000162a40
- (void)writeTo:(id)arg1;	// IMP=0x000000000016244f
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000162442
- (id)entityProtobufMessagesAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000162425
- (unsigned long long)entityProtobufMessagesCount;	// IMP=0x0000000000162408
- (void)addEntityProtobufMessages:(id)arg1;	// IMP=0x000000000016238e
- (void)clearEntityProtobufMessages;	// IMP=0x0000000000162371
- (id)dismissalCommandsAtIndex:(unsigned long long)arg1;	// IMP=0x00000000001621d7
- (unsigned long long)dismissalCommandsCount;	// IMP=0x00000000001621ba
- (void)addDismissalCommands:(id)arg1;	// IMP=0x0000000000162140
- (void)clearDismissalCommands;	// IMP=0x0000000000162123
- (id)cardSectionsAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000162002
- (unsigned long long)cardSectionsCount;	// IMP=0x0000000000161fe5
- (void)addCardSections:(id)arg1;	// IMP=0x0000000000161f6b
- (void)clearCardSections;	// IMP=0x0000000000161f4e
- (id)initWithFacade:(id)arg1;	// IMP=0x00000000001f6e56

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

