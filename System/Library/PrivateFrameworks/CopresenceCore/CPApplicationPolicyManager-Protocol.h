//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CopresenceCore/NSObject-Protocol.h>

@class NSDictionary, NSString, OS_dispatch_queue, TUConversation, TUConversationActivity;
@protocol CPApplicationPolicyManagerDelegate;

@protocol CPApplicationPolicyManager <NSObject>
- (void)addDelegate:(id <CPApplicationPolicyManagerDelegate>)arg1 withQueue:(OS_dispatch_queue *)arg2;
- (void)setAuthorization:(_Bool)arg1 forBundleID:(NSString *)arg2;
- (void)updateAllowedHandlesForConversation:(TUConversation *)arg1;
- (_Bool)shouldLaunchAppInBackgroundForActivity:(TUConversationActivity *)arg1 onConversation:(TUConversation *)arg2;
@property(nonatomic) _Bool autoSharePlayEnabled;
@property(nonatomic, readonly) NSDictionary *authorizedBundleIdentifiers;
@end

