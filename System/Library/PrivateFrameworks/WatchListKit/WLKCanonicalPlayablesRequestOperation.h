//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, WLKCanonicalPlayablesResponse;

@interface WLKCanonicalPlayablesRequestOperation
{
    NSString *_contentID;	// 8 = 0x8
    WLKCanonicalPlayablesResponse *_response;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000042121
@property(readonly, nonatomic) WLKCanonicalPlayablesResponse *response; // @synthesize response=_response;
@property(readonly, copy, nonatomic) NSString *contentID; // @synthesize contentID=_contentID;
- (void)processResponse;	// IMP=0x000000000004205e
- (id)initWithContentID:(id)arg1 caller:(id)arg2 isMovie:(_Bool)arg3;	// IMP=0x0000000000041f1b
- (id)initWithContentID:(id)arg1 profiles:(id)arg2 caller:(id)arg3;	// IMP=0x0000000000041d82

@end
