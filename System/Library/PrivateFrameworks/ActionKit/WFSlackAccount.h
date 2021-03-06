//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface WFSlackAccount
{
    NSString *_username;	// 8 = 0x8
    NSString *_teamName;	// 16 = 0x10
}

+ (_Bool)allowsMultipleAccounts;	// IMP=0x0000000000202cfa
+ (id)scopes;	// IMP=0x0000000000202c5c
+ (id)redirectURI;	// IMP=0x0000000000202c3c
+ (id)clientSecret;	// IMP=0x0000000000202c2f
+ (id)clientID;	// IMP=0x0000000000202c22
+ (id)sessionManager;	// IMP=0x0000000000202b95
+ (id)localizedServiceName;	// IMP=0x0000000000202b84
+ (id)serviceID;	// IMP=0x0000000000202b77
- (void).cxx_destruct;	// IMP=0x00000000002028f7
@property(copy, nonatomic) NSString *teamName; // @synthesize teamName=_teamName;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
- (void)refreshWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000202810
- (id)localizedName;	// IMP=0x0000000000202743

@end

