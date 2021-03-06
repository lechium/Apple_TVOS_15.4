//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface CSDCallFilterManager : NSObject
{
    MISSING_TYPE *filters;	// 8 = 0x8
    MISSING_TYPE *senderIdentityClient;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00400000002492a0
- (id)init;	// IMP=0x0010000000249240
- (_Bool)isUnknownAddress:(id)arg1 normalizedAddress:(id)arg2 forBundleIdentifier:(id)arg3;	// IMP=0x0010000000249140
- (_Bool)isUnknownCall:(id)arg1;	// IMP=0x0010000000248e20
- (long long)filterStatusForAddresses:(id)arg1 withBundleIdentifier:(id)arg2;	// IMP=0x0010000000248b60
- (_Bool)shouldRestrictAddresses:(id)arg1 forBundleIdentifier:(id)arg2 performSynchronously:(_Bool)arg3;	// IMP=0x0010000000248910
- (_Bool)willRestrictAddresses:(id)arg1 forBundleIdentifier:(id)arg2;	// IMP=0x00100000002486b0
- (_Bool)containsRestrictedHandle:(id)arg1;	// IMP=0x00100000002484c0
- (_Bool)containsOutgoingRestrictedHandle:(id)arg1 forBundleIdentifier:(id)arg2 performSynchronously:(_Bool)arg3;	// IMP=0x00100000002482e0
- (_Bool)containsRecentsRestrictedHandle:(id)arg1;	// IMP=0x0010000000248100
- (_Bool)shouldDisconnectCall:(id)arg1;	// IMP=0x0010000000248080
- (_Bool)shouldFilterIncomingCall:(id)arg1;	// IMP=0x0010000000247ee0
- (id)initWithFilters:(id)arg1;	// IMP=0x0010000000247590

@end

