//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HomeKitDaemon/NSCopying-Protocol.h>

@class AWDHomeKitPredicate, NSMutableArray;

@interface AWDHomeKitEventTrigger : PBCodable <NSCopying>
{
    int _activationState;	// 8 = 0x8
    int _activationType;	// 12 = 0xc
    NSMutableArray *_events;	// 16 = 0x10
    AWDHomeKitPredicate *_predicate;	// 24 = 0x18
    _Bool _containsRecurrences;	// 32 = 0x20
    _Bool _executeOnce;	// 33 = 0x21
    struct {
        unsigned int activationState:1;
        unsigned int activationType:1;
        unsigned int containsRecurrences:1;
        unsigned int executeOnce:1;
    } _has;	// 36 = 0x24
}

+ (Class)eventsType;	// IMP=0x0000000000861e50
- (void).cxx_destruct;	// IMP=0x00000000008619b3
@property(retain, nonatomic) AWDHomeKitPredicate *predicate; // @synthesize predicate=_predicate;
@property(nonatomic) _Bool containsRecurrences; // @synthesize containsRecurrences=_containsRecurrences;
@property(nonatomic) _Bool executeOnce; // @synthesize executeOnce=_executeOnce;
@property(retain, nonatomic) NSMutableArray *events; // @synthesize events=_events;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000086171c
- (unsigned long long)hash;	// IMP=0x0000000000861631
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000008614a3
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000861217
- (void)copyTo:(id)arg1;	// IMP=0x00000000008610ba
- (void)writeTo:(id)arg1;	// IMP=0x0000000000860ed5
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000860ec8
- (id)dictionaryRepresentation;	// IMP=0x0000000000860a1a
- (id)description;	// IMP=0x000000000086096b
- (int)StringAsActivationType:(id)arg1;	// IMP=0x00000000008608bc
- (id)activationTypeAsString:(int)arg1;	// IMP=0x000000000086083f
@property(nonatomic) _Bool hasActivationType;
@property(nonatomic) int activationType; // @synthesize activationType=_activationType;
- (int)StringAsActivationState:(id)arg1;	// IMP=0x000000000086070c
- (id)activationStateAsString:(int)arg1;	// IMP=0x0000000000860680
@property(nonatomic) _Bool hasActivationState;
@property(nonatomic) int activationState; // @synthesize activationState=_activationState;
@property(readonly, nonatomic) _Bool hasPredicate;
@property(nonatomic) _Bool hasContainsRecurrences;
@property(nonatomic) _Bool hasExecuteOnce;
- (id)eventsAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000860554
- (unsigned long long)eventsCount;	// IMP=0x0000000000860537
- (void)addEvents:(id)arg1;	// IMP=0x00000000008604cd
- (void)clearEvents;	// IMP=0x00000000008604b0

@end

