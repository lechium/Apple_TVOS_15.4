//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue, TUCallFilterControllerActions;

@interface TUCallFilterController : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    id <TUCallFilterControllerActions> _actionsDelegate;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000005c704
@property(readonly, nonatomic) __weak id <TUCallFilterControllerActions> actionsDelegate; // @synthesize actionsDelegate=_actionsDelegate;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (id)bundleIdentifierForCallProvider:(id)arg1;	// IMP=0x000000000005c65e
- (_Bool)isUnknownAddress:(id)arg1 normalizedAddress:(id)arg2 forBundleIdentifier:(id)arg3;	// IMP=0x000000000005c580
- (_Bool)willRestrictAddresses:(id)arg1 forBundleIdentifier:(id)arg2;	// IMP=0x000000000005c4c2
- (_Bool)shouldRestrictAddresses:(id)arg1 forBundleIdentifier:(id)arg2;	// IMP=0x000000000005c4ad
- (_Bool)shouldRestrictAddresses:(id)arg1 forBundleIdentifier:(id)arg2 performSynchronously:(_Bool)arg3;	// IMP=0x000000000005c3e4
- (_Bool)shouldRestrictJoinConversationRequest:(id)arg1 performSynchronously:(_Bool)arg2;	// IMP=0x000000000005c0ac
- (_Bool)containsRestrictedHandle:(id)arg1 forBundleIdentifier:(id)arg2 performSynchronously:(_Bool)arg3;	// IMP=0x000000000005bfe3
- (_Bool)shouldRestrictConversation:(id)arg1 performSynchronously:(_Bool)arg2;	// IMP=0x000000000005ba9c
- (_Bool)containsRestrictedHandle:(id)arg1 forBundleIdentifier:(id)arg2;	// IMP=0x000000000005b9db
- (id)policyForAddresses:(id)arg1 forBundleIdentifier:(id)arg2;	// IMP=0x000000000005b90e
- (id)restrictedContacts:(id)arg1 callProvider:(id)arg2;	// IMP=0x000000000005b17b
- (unsigned long long)callFilterStatusForDialRequest:(id)arg1;	// IMP=0x000000000005af6f
- (_Bool)shouldRestrictDialRequest:(id)arg1 performSynchronously:(_Bool)arg2;	// IMP=0x000000000005ae0f
- (_Bool)shouldRestrictDialRequest:(id)arg1;	// IMP=0x000000000005ad90
- (_Bool)isUnknownHandle:(id)arg1;	// IMP=0x000000000005ad28
@property(readonly, nonatomic) _Bool silenceUnknownCallersEnabled;
- (id)initWithActionsDelegate:(id)arg1 serialQueue:(id)arg2;	// IMP=0x000000000005ac41

@end

