//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSURLAuthenticationChallenge;
@protocol NSURLAuthenticationChallengeSender;

@interface ISAuthenticationChallenge : NSObject
{
    NSURLAuthenticationChallenge *_challenge;	// 8 = 0x8
    NSString *_localizedMessage;	// 16 = 0x10
    NSString *_localizedTitle;	// 24 = 0x18
}

@property(retain) NSString *localizedTitle; // @synthesize localizedTitle=_localizedTitle;
@property(retain) NSString *localizedMessage; // @synthesize localizedMessage=_localizedMessage;
@property(readonly) _Bool userNameIsEmail;
@property(readonly) _Bool userNameIsEditable;
- (void)useCredential:(id)arg1;	// IMP=0x000000000003f237
@property(readonly, retain) NSString *user;
@property(readonly) id <NSURLAuthenticationChallengeSender> sender;
@property(readonly, retain) NSString *password;
@property(readonly) _Bool hasPassword;
@property(readonly) long long failureCount;
- (void)cancelAuthentication;	// IMP=0x000000000003f1dd
- (void)dealloc;	// IMP=0x000000000003f174
- (id)initWithAuthenticationChallenge:(id)arg1;	// IMP=0x000000000003f140

@end

