//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSURL, NSURLSession, WFOAuth2Credential;

@interface WFTodoistSessionManager : NSObject
{
    NSURLSession *_session;	// 8 = 0x8
    WFOAuth2Credential *_credential;	// 16 = 0x10
    NSURL *_baseURL;	// 24 = 0x18
    NSString *_syncToken;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000002f7506
@property(copy, nonatomic) NSString *syncToken; // @synthesize syncToken=_syncToken;
@property(readonly, copy, nonatomic) NSURL *baseURL; // @synthesize baseURL=_baseURL;
@property(copy, nonatomic) WFOAuth2Credential *credential; // @synthesize credential=_credential;
@property(readonly, nonatomic) NSURLSession *session; // @synthesize session=_session;
- (void)requestWithCommands:(id)arg1 resourceTypes:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000002f6f2b
- (void)createItemInProject:(id)arg1 content:(id)arg2 dueDateString:(id)arg3 reminderDateString:(id)arg4 reminderService:(long long)arg5 priority:(long long)arg6 note:(id)arg7 completionHandler:(CDUnknownBlockType)arg8;	// IMP=0x00000000002f6565
- (void)createFileOnItemWithId:(long long)arg1 withFile:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000002f5f67
- (void)getProjectsWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000002f5e6e
- (id)initWithSessionConfiguration:(id)arg1;	// IMP=0x00000000002f5d4c
- (id)init;	// IMP=0x00000000002f5d38

@end
