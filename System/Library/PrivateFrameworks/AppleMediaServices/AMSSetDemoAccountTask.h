//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AMSProcessInfo, NSString;

@interface AMSSetDemoAccountTask
{
    AMSProcessInfo *_clientInfo;	// 8 = 0x8
    NSString *_password;	// 16 = 0x10
    NSString *_username;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000001f2584
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
@property(retain, nonatomic) NSString *password; // @synthesize password=_password;
@property(retain, nonatomic) AMSProcessInfo *clientInfo; // @synthesize clientInfo=_clientInfo;
- (id)performTask;	// IMP=0x00000000001f1b8a
- (id)initWithUsername:(id)arg1 password:(id)arg2;	// IMP=0x00000000001f1ab7

@end
