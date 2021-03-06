//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

#import <WorkflowKit/NSCopying-Protocol.h>

@class NSData, NSMutableArray, NSString;

@interface WFREPBAskWhenRunRequest : PBRequest <NSCopying>
{
    NSString *_actionIdentifier;	// 8 = 0x8
    NSData *_actionSerializedParameters;	// 16 = 0x10
    NSString *_associatedRunRequestIdentifier;	// 24 = 0x18
    NSMutableArray *_parameterKeys;	// 32 = 0x20
    NSMutableArray *_parameterKeysAndStates;	// 40 = 0x28
    NSMutableArray *_possibleStates;	// 48 = 0x30
}

+ (Class)possibleStatesType;	// IMP=0x00000000001c25da
+ (Class)parameterKeysAndStatesType;	// IMP=0x00000000001c25c9
+ (Class)parameterKeysType;	// IMP=0x00000000001c25b8
- (void).cxx_destruct;	// IMP=0x00000000001c2283
@property(retain, nonatomic) NSMutableArray *possibleStates; // @synthesize possibleStates=_possibleStates;
@property(retain, nonatomic) NSData *actionSerializedParameters; // @synthesize actionSerializedParameters=_actionSerializedParameters;
@property(retain, nonatomic) NSString *actionIdentifier; // @synthesize actionIdentifier=_actionIdentifier;
@property(retain, nonatomic) NSMutableArray *parameterKeysAndStates; // @synthesize parameterKeysAndStates=_parameterKeysAndStates;
@property(retain, nonatomic) NSMutableArray *parameterKeys; // @synthesize parameterKeys=_parameterKeys;
@property(retain, nonatomic) NSString *associatedRunRequestIdentifier; // @synthesize associatedRunRequestIdentifier=_associatedRunRequestIdentifier;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000001c1e09
- (unsigned long long)hash;	// IMP=0x00000000001c1d4b
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001c1bb7
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001c1717
- (void)copyTo:(id)arg1;	// IMP=0x00000000001c14cd
- (void)writeTo:(id)arg1;	// IMP=0x00000000001c1143
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001c1136
- (id)dictionaryRepresentation;	// IMP=0x00000000001c0ca2
- (id)description;	// IMP=0x00000000001c0bf3
- (id)possibleStatesAtIndex:(unsigned long long)arg1;	// IMP=0x00000000001c0bd6
- (unsigned long long)possibleStatesCount;	// IMP=0x00000000001c0bb9
- (void)addPossibleStates:(id)arg1;	// IMP=0x00000000001c0b4f
- (void)clearPossibleStates;	// IMP=0x00000000001c0b32
@property(readonly, nonatomic) _Bool hasActionSerializedParameters;
- (id)parameterKeysAndStatesAtIndex:(unsigned long long)arg1;	// IMP=0x00000000001c0b00
- (unsigned long long)parameterKeysAndStatesCount;	// IMP=0x00000000001c0ae3
- (void)addParameterKeysAndStates:(id)arg1;	// IMP=0x00000000001c0a79
- (void)clearParameterKeysAndStates;	// IMP=0x00000000001c0a5c
- (id)parameterKeysAtIndex:(unsigned long long)arg1;	// IMP=0x00000000001c0a3f
- (unsigned long long)parameterKeysCount;	// IMP=0x00000000001c0a22
- (void)addParameterKeys:(id)arg1;	// IMP=0x00000000001c09b8
- (void)clearParameterKeys;	// IMP=0x00000000001c099b

@end

