//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface _TtC13callservicesd17UnknownCallFilter : NSObject
{
}

- (id)init;	// IMP=0x00400000002576e0
- (long long)filterStatusForAddresses:(id)arg1 withBundleIdentifier:(id)arg2;	// IMP=0x00100000002576d0
- (_Bool)isUnknownAddress:(id)arg1 normalizedAddress:(id)arg2 forBundleIdentifier:(id)arg3;	// IMP=0x00100000002576c0
- (_Bool)isUnknownCall:(id)arg1;	// IMP=0x00100000002576b0
- (_Bool)willRestrictAddresses:(id)arg1 forBundleIdentifier:(id)arg2;	// IMP=0x0010000000257690
- (_Bool)shouldRestrictAddresses:(id)arg1 forBundleIdentifier:(id)arg2 performSynchronously:(_Bool)arg3;	// IMP=0x0010000000257680
- (_Bool)shouldDisconnectCall:(id)arg1;	// IMP=0x0010000000257670
- (_Bool)shouldFilterIncomingCall:(id)arg1;	// IMP=0x0010000000257610
- (_Bool)containsRecentsRestrictedHandle:(id)arg1;	// IMP=0x0010000000257160
- (_Bool)containsOutgoingRestrictedHandle:(id)arg1 forBundleIdentifier:(id)arg2 performSynchronously:(_Bool)arg3;	// IMP=0x0010000000257150
- (_Bool)containsRestrictedHandle:(id)arg1;	// IMP=0x0010000000257140

@end

