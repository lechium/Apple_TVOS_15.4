//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class WLKContinueWatchingResponse;

@interface WLKContinueWatchingRequest
{
    _Bool _allowAuthentication;	// 8 = 0x8
    WLKContinueWatchingResponse *_response;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000000c65f
@property(readonly, nonatomic) WLKContinueWatchingResponse *response; // @synthesize response=_response;
@property(nonatomic) _Bool allowAuthentication; // @synthesize allowAuthentication=_allowAuthentication;
- (void)makeRequestWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000000c360
- (id)init;	// IMP=0x000000000000c321

@end

