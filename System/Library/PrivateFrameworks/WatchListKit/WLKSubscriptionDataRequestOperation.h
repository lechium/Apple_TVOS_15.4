//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary;

@interface WLKSubscriptionDataRequestOperation
{
    NSDictionary *_response;	// 8 = 0x8
}

+ (id)_requestURL:(id *)arg1;	// IMP=0x00000000000027df
- (void).cxx_destruct;	// IMP=0x000000000000295f
@property(readonly, nonatomic) NSDictionary *response; // @synthesize response=_response;
- (void)processResponse;	// IMP=0x00000000000026ce
- (void)prepareURLRequest:(CDUnknownBlockType)arg1;	// IMP=0x00000000000025e8
- (id)init;	// IMP=0x00000000000025b5

@end
