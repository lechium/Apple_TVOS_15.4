//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface ETOptimizerDefinition : NSObject
{
    long long _type;	// 8 = 0x8
    NSDictionary *_optimizationParameters;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000003b235c
@property(readonly, nonatomic) NSDictionary *optimizationParameters; // @synthesize optimizationParameters=_optimizationParameters;
@property(readonly) long long type; // @synthesize type=_type;
- (id)initWithOptimizationAlgorithm:(long long)arg1 parameters:(id)arg2 error:(id *)arg3;	// IMP=0x00000000003b22d2

@end

