//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, WLKContentPlayResponse;

@interface WLKContentPlayRequestOperation
{
    NSString *_canonicalID;	// 8 = 0x8
    WLKContentPlayResponse *_response;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000000b70f
@property(retain, nonatomic) WLKContentPlayResponse *response; // @synthesize response=_response;
@property(readonly, copy, nonatomic) NSString *canonicalID; // @synthesize canonicalID=_canonicalID;
- (void)processResponse;	// IMP=0x000000000000b624
- (id)initWithCanonicalID:(id)arg1 caller:(id)arg2;	// IMP=0x000000000000b50f

@end

