//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSDictionary, NSURL;

@interface GKAccountRemoteUIController
{
    _Bool _authenticatePlayerOnCompletion;	// 8 = 0x8
    long long _mode;	// 16 = 0x10
    NSArray *_availableExternalServices;	// 24 = 0x18
    NSURL *_url;	// 32 = 0x20
    NSDictionary *_postBody;	// 40 = 0x28
}

+ (void)accountRemoteUIControllerForPlayer:(id)arg1 mode:(long long)arg2 url:(id)arg3 postBody:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x00000000000f91b9
+ (void)accountRemoteUIControllerForPlayer:(id)arg1 mode:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000f913e
- (void).cxx_destruct;	// IMP=0x00000000000f9e77
@property(retain, nonatomic) NSDictionary *postBody; // @synthesize postBody=_postBody;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
@property(nonatomic) _Bool authenticatePlayerOnCompletion; // @synthesize authenticatePlayerOnCompletion=_authenticatePlayerOnCompletion;
@property(retain, nonatomic) NSArray *availableExternalServices; // @synthesize availableExternalServices=_availableExternalServices;
@property(nonatomic) long long mode; // @synthesize mode=_mode;
- (void)updatePostbackDictionary:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000f9db4
- (void)takeValuesFromClientInfo:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000f9c47
- (id)postBodyForInitialLoad;	// IMP=0x00000000000f9986
- (id)bagKey;	// IMP=0x00000000000f994d
- (id)fallbackURL;	// IMP=0x00000000000f98e1
- (void)fireCompletionHandler;	// IMP=0x00000000000f9764
- (id)initWithMode:(long long)arg1 player:(id)arg2;	// IMP=0x00000000000f96d7
- (id)initWithMode:(long long)arg1;	// IMP=0x00000000000f9677

@end

