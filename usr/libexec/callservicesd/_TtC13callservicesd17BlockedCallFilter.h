//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC13callservicesd17BlockedCallFilter : NSObject
{
    MISSING_TYPE *queue;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x004000000019fc30
- (id)init;	// IMP=0x001000000019fbd0
- (long long)filterStatusForAddresses:(id)arg1 withBundleIdentifier:(id)arg2;	// IMP=0x001000000019fbc0
- (_Bool)isUnknownAddress:(id)arg1 normalizedAddress:(id)arg2 forBundleIdentifier:(id)arg3;	// IMP=0x001000000019fbb0
- (_Bool)isUnknownCall:(id)arg1;	// IMP=0x001000000019fba0
- (_Bool)willRestrictAddresses:(id)arg1 forBundleIdentifier:(id)arg2;	// IMP=0x001000000019fb90
- (_Bool)shouldRestrictAddresses:(id)arg1 forBundleIdentifier:(id)arg2 performSynchronously:(_Bool)arg3;	// IMP=0x001000000019fb80
- (_Bool)shouldDisconnectCall:(id)arg1;	// IMP=0x001000000019fb70
- (_Bool)shouldFilterIncomingCall:(id)arg1;	// IMP=0x001000000019fb60
- (_Bool)containsRecentsRestrictedHandle:(id)arg1;	// IMP=0x001000000019fb40
- (_Bool)containsOutgoingRestrictedHandle:(id)arg1 forBundleIdentifier:(id)arg2 performSynchronously:(_Bool)arg3;	// IMP=0x001000000019fb30
- (_Bool)containsRestrictedHandle:(id)arg1;	// IMP=0x001000000019fb20
- (id)initWithQueue:(id)arg1;	// IMP=0x001000000019fad0

@end

