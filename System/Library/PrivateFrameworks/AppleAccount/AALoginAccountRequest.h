//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ACAccount, NSDictionary;

@interface AALoginAccountRequest
{
    ACAccount *_account;	// 8 = 0x8
    NSDictionary *_delegatesInfo;	// 16 = 0x10
}

+ (Class)responseClass;	// IMP=0x000000000007361a
- (void).cxx_destruct;	// IMP=0x00000000000739f4
- (id)urlRequest;	// IMP=0x0000000000073724
- (id)initWithAccount:(id)arg1 delegates:(id)arg2;	// IMP=0x0000000000073682
- (id)urlString;	// IMP=0x000000000007362b

@end
