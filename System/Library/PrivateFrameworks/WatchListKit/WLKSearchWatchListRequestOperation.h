//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, WLKSearchWatchListResponse;

@interface WLKSearchWatchListRequestOperation
{
    NSDictionary *_query;	// 8 = 0x8
    WLKSearchWatchListResponse *_response;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000020ccb
@property(readonly, nonatomic) WLKSearchWatchListResponse *response; // @synthesize response=_response;
@property(readonly, copy, nonatomic) NSDictionary *query; // @synthesize query=_query;
- (void)processResponse;	// IMP=0x0000000000020c08
- (id)initWithQuery:(id)arg1 caller:(id)arg2;	// IMP=0x0000000000020b92

@end
