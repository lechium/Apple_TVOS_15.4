//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <WorkflowKit/NSCopying-Protocol.h>

@class NSString;

@interface WFPBRemoteExecutionEvent : PBCodable <NSCopying>
{
    NSString *_actionIdentifier;	// 8 = 0x8
    NSString *_connectionType;	// 16 = 0x10
    NSString *_destinationType;	// 24 = 0x18
    NSString *_key;	// 32 = 0x20
    NSString *_source;	// 40 = 0x28
    _Bool _completed;	// 48 = 0x30
    CDStruct_c267e6e8 _has;	// 52 = 0x34
}

- (void).cxx_destruct;	// IMP=0x00000000000b4c1e
@property(nonatomic) _Bool completed; // @synthesize completed=_completed;
@property(retain, nonatomic) NSString *connectionType; // @synthesize connectionType=_connectionType;
@property(retain, nonatomic) NSString *destinationType; // @synthesize destinationType=_destinationType;
@property(retain, nonatomic) NSString *actionIdentifier; // @synthesize actionIdentifier=_actionIdentifier;
@property(retain, nonatomic) NSString *source; // @synthesize source=_source;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000000b4a83
- (unsigned long long)hash;	// IMP=0x00000000000b49b4
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000b4817
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000b46df
- (void)copyTo:(id)arg1;	// IMP=0x00000000000b45fc
- (void)writeTo:(id)arg1;	// IMP=0x00000000000b4523
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000b4516
- (id)dictionaryRepresentation;	// IMP=0x00000000000b43ba
- (id)description;	// IMP=0x00000000000b430b
@property(nonatomic) _Bool hasCompleted;
@property(readonly, nonatomic) _Bool hasConnectionType;
@property(readonly, nonatomic) _Bool hasDestinationType;
@property(readonly, nonatomic) _Bool hasActionIdentifier;
@property(readonly, nonatomic) _Bool hasSource;
@property(readonly, nonatomic) _Bool hasKey;

@end

