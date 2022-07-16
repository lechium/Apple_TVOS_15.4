//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ACAccount, NSString;

@interface AAAuthenticateRequest
{
    NSString *_username;	// 64 = 0x40
    NSString *_password;	// 72 = 0x48
    NSString *_authToken;	// 80 = 0x50
    ACAccount *_account;	// 88 = 0x58
}

+ (Class)responseClass;	// IMP=0x0000000000016579
- (void).cxx_destruct;	// IMP=0x0000000000016bfe
@property(copy, nonatomic) NSString *authToken; // @synthesize authToken=_authToken;
@property(retain, nonatomic) ACAccount *account; // @synthesize account=_account;
@property(copy, nonatomic) NSString *password; // @synthesize password=_password;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
- (id)urlRequest;	// IMP=0x000000000001685b
- (id)urlCredential;	// IMP=0x0000000000016826
- (id)urlString;	// IMP=0x0000000000016738
- (id)initWithURLString:(id)arg1 username:(id)arg2 password:(id)arg3;	// IMP=0x0000000000016690
- (id)initWithUsername:(id)arg1 password:(id)arg2;	// IMP=0x00000000000165f2
- (id)initWithAccount:(id)arg1;	// IMP=0x000000000001658a

@end
