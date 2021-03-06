//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CloudKitDaemon/NSCopying-Protocol.h>

@interface CKDPDistributedTimestampsVersionVector : PBCodable <NSCopying>
{
    CDStruct_62a50c50 _clockValueLengths;	// 8 = 0x8
    CDStruct_62a50c50 _clockValues;	// 32 = 0x20
    struct {
        unsigned int *list;
        unsigned long long count;
        unsigned long long size;
    } _stateValueLengths;	// 56 = 0x38
    CDStruct_95bda58d _stateValues;	// 80 = 0x50
}

- (void)mergeFrom:(id)arg1;	// IMP=0x000000000012317f
- (unsigned long long)hash;	// IMP=0x0000000000123119
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000123055
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000122fbf
- (void)copyTo:(id)arg1;	// IMP=0x0000000000122da3
- (void)writeTo:(id)arg1;	// IMP=0x0000000000122c1d
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000122c10
- (id)dictionaryRepresentation;	// IMP=0x0000000000122305
- (id)description;	// IMP=0x0000000000122256
- (void)setStateValueLengths:(unsigned int *)arg1 count:(unsigned long long)arg2;	// IMP=0x000000000012223f
- (unsigned int)stateValueLengthsAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000122172
- (void)addStateValueLengths:(unsigned int)arg1;	// IMP=0x000000000012215f
- (void)clearStateValueLengths;	// IMP=0x000000000012214e
@property(readonly, nonatomic) unsigned int *stateValueLengths;
@property(readonly, nonatomic) unsigned long long stateValueLengthsCount;
- (int)StringAsStateValues:(id)arg1;	// IMP=0x0000000000121fd8
- (id)stateValuesAsString:(int)arg1;	// IMP=0x0000000000121f18
- (void)setStateValues:(int *)arg1 count:(unsigned long long)arg2;	// IMP=0x0000000000121f01
- (int)stateValuesAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000121e34
- (void)addStateValues:(int)arg1;	// IMP=0x0000000000121e21
- (void)clearStateValues;	// IMP=0x0000000000121e10
@property(readonly, nonatomic) int *stateValues;
@property(readonly, nonatomic) unsigned long long stateValuesCount;
- (void)setClockValueLengths:(unsigned long long *)arg1 count:(unsigned long long)arg2;	// IMP=0x0000000000121dd6
- (unsigned long long)clockValueLengthsAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000121d09
- (void)addClockValueLengths:(unsigned long long)arg1;	// IMP=0x0000000000121cf5
- (void)clearClockValueLengths;	// IMP=0x0000000000121ce4
@property(readonly, nonatomic) unsigned long long *clockValueLengths;
@property(readonly, nonatomic) unsigned long long clockValueLengthsCount;
- (void)setClockValues:(unsigned long long *)arg1 count:(unsigned long long)arg2;	// IMP=0x0000000000121caa
- (unsigned long long)clockValuesAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000121bdd
- (void)addClockValues:(unsigned long long)arg1;	// IMP=0x0000000000121bc9
- (void)clearClockValues;	// IMP=0x0000000000121bb8
@property(readonly, nonatomic) unsigned long long *clockValues;
@property(readonly, nonatomic) unsigned long long clockValuesCount;
- (void)dealloc;	// IMP=0x0000000000121b28

@end

