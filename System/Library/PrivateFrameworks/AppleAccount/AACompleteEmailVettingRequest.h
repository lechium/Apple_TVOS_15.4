//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface AACompleteEmailVettingRequest
{
    NSString *_token;	// 72 = 0x48
}

+ (Class)responseClass;	// IMP=0x0000000000017e89
- (void).cxx_destruct;	// IMP=0x000000000001817e
- (id)bodyDictionary;	// IMP=0x00000000000180c5
- (id)urlString;	// IMP=0x0000000000017f94
- (id)initWithURLString:(id)arg1 account:(id)arg2 token:(id)arg3;	// IMP=0x0000000000017f12
- (id)initWithAccount:(id)arg1 token:(id)arg2;	// IMP=0x0000000000017e9a

@end
