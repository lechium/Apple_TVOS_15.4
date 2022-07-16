//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSNumber;

@interface ModelHyperparameters : NSObject
{
    NSNumber *_numTrees;	// 8 = 0x8
    NSNumber *_learningRate;	// 16 = 0x10
    NSNumber *_minChildWeight;	// 24 = 0x18
    long long _adaptationStrategy;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000063d59
@property(nonatomic) long long adaptationStrategy; // @synthesize adaptationStrategy=_adaptationStrategy;
@property(retain, nonatomic) NSNumber *minChildWeight; // @synthesize minChildWeight=_minChildWeight;
@property(retain, nonatomic) NSNumber *learningRate; // @synthesize learningRate=_learningRate;
@property(retain, nonatomic) NSNumber *numTrees; // @synthesize numTrees=_numTrees;
- (id)initWithNumTrees:(id)arg1 learningRate:(id)arg2 minChildWeight:(id)arg3 adaptationStrategy:(id)arg4;	// IMP=0x0000000000063c0d

@end

