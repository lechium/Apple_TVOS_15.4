//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class WFLocation;

@interface WFAggregateForecastRequest
{
    WFLocation *_location;	// 8 = 0x8
    CDUnknownBlockType _completionHandler;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000004e72e
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(copy, nonatomic) WFLocation *location; // @synthesize location=_location;
- (void)cleanup;	// IMP=0x000000000004e6aa
- (void)handleCancellation;	// IMP=0x000000000004e5eb
- (void)handleError:(id)arg1 forResponseIdentifier:(id)arg2;	// IMP=0x000000000004e546
- (void)handleResponse:(id)arg1;	// IMP=0x000000000004e44b
- (id)initWithLocation:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000004e38a

@end

