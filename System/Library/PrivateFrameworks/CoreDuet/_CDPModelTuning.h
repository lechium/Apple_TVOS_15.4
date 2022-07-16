//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSIndexSet, _CDPModelTuningState, _CDPSimpleModel;

@interface _CDPModelTuning : NSObject
{
    _CDPModelTuningState *_currentState;	// 8 = 0x8
    int _numberOfGridTests;	// 16 = 0x10
    CDUnknownBlockType _scorer;	// 24 = 0x18
    CDUnknownBlockType _heartBeat;	// 32 = 0x20
    _CDPSimpleModel *_model;	// 40 = 0x28
    NSIndexSet *_testIndices;	// 48 = 0x30
}

+ (void)_addArray:(float *)arg1 size:(unsigned long long)arg2 inArray:(float *)arg3;	// IMP=0x0000000000064dc4
+ (void)_cumulativeSumOfArray:(float *)arg1 size:(unsigned long long)arg2 reverse:(_Bool)arg3;	// IMP=0x0000000000064d55
+ (unsigned int *)_newSetDifference:(unsigned int *)arg1 setLength:(unsigned long long)arg2 subset:(unsigned int *)arg3 subsetLength:(unsigned long long)arg4;	// IMP=0x0000000000064ceb
+ (void)_enumerateSubsetsOfSet:(unsigned int *)arg1 setLength:(unsigned long long)arg2 withSize:(unsigned long long)arg3 callback:(CDUnknownBlockType)arg4;	// IMP=0x0000000000064c6b
+ (void)_enumerateSubsetsOfSet:(unsigned int *)arg1 setLength:(unsigned long long)arg2 index:(unsigned long long)arg3 subset:(unsigned int *)arg4 subsetLength:(unsigned long long)arg5 index:(unsigned long long)arg6 callback:(CDUnknownBlockType)arg7;	// IMP=0x0000000000064b85
+ (CDUnknownBlockType)fScoreWithBeta:(float)arg1;	// IMP=0x00000000000646e4
+ (CDUnknownBlockType)f2Score;	// IMP=0x00000000000646ca
+ (CDUnknownBlockType)f1Score;	// IMP=0x00000000000646b0
- (void).cxx_destruct;	// IMP=0x0000000000065534
@property(readonly, nonatomic) int numberOfGridTests; // @synthesize numberOfGridTests=_numberOfGridTests;
@property(retain, nonatomic) NSIndexSet *testIndices; // @synthesize testIndices=_testIndices;
@property(retain, nonatomic) _CDPSimpleModel *model; // @synthesize model=_model;
@property(copy, nonatomic) CDUnknownBlockType heartBeat; // @synthesize heartBeat=_heartBeat;
@property(copy, nonatomic) CDUnknownBlockType scorer; // @synthesize scorer=_scorer;
@property(readonly, nonatomic) _CDPModelTuningState *currentState; // @synthesize currentState=_currentState;
- (float)_testModelWithThreshold:(float *)arg1;	// IMP=0x0000000000064df1
- (void)resumeTuningWithState:(id)arg1;	// IMP=0x000000000006475f

@end
