//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface WFReachabilityConfigurationRequest
{
    CDUnknownBlockType _resultHandler;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000463fb
@property(copy, nonatomic) CDUnknownBlockType resultHandler; // @synthesize resultHandler=_resultHandler;
- (void)cleanup;	// IMP=0x0000000000046399
- (void)handleCancellation;	// IMP=0x00000000000462c1
- (void)handleError:(id)arg1 forResponseIdentifier:(id)arg2;	// IMP=0x000000000004621c
- (void)handleResponse:(id)arg1;	// IMP=0x00000000000460fe
- (void)startWithService:(id)arg1;	// IMP=0x000000000004608c
- (_Bool)requiresResponse;	// IMP=0x0000000000046084
- (id)initWithResultHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000004601c

@end
