//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class INIntent, INIntentResponse, NSDictionary;

@interface INIntentTestResult : NSObject
{
    _Bool _resolvedAllParametersSuccesfully;	// 8 = 0x8
    INIntent *_resolvedIntent;	// 16 = 0x10
    NSDictionary *_resolvedParameters;	// 24 = 0x18
    INIntentResponse *_confirmResponse;	// 32 = 0x20
    INIntentResponse *_handleResponse;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000035c5eb
@property(readonly, nonatomic) INIntentResponse *handleResponse; // @synthesize handleResponse=_handleResponse;
@property(readonly, nonatomic) INIntentResponse *confirmResponse; // @synthesize confirmResponse=_confirmResponse;
@property(readonly, nonatomic) _Bool resolvedAllParametersSuccesfully; // @synthesize resolvedAllParametersSuccesfully=_resolvedAllParametersSuccesfully;
@property(readonly, copy, nonatomic) NSDictionary *resolvedParameters; // @synthesize resolvedParameters=_resolvedParameters;
@property(readonly, nonatomic) INIntent *resolvedIntent; // @synthesize resolvedIntent=_resolvedIntent;
- (id)dictionaryRepresentation;	// IMP=0x000000000035c3b1
- (id)descriptionAtIndent:(unsigned long long)arg1;	// IMP=0x000000000035c2d5
- (id)description;	// IMP=0x000000000035c2c1
- (id)initWithResolvedIntent:(id)arg1 resolvedParameters:(id)arg2 resolvedAllParametersSuccesfully:(_Bool)arg3 confirmResponse:(id)arg4 handleResponse:(id)arg5;	// IMP=0x000000000035c1c2

@end

