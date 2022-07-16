//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface MPStoreSocialServiceTransientStatesSnapshot : NSObject
{
    NSMutableDictionary *_transientFollowStatesPerProfileID;	// 8 = 0x8
    NSMutableDictionary *_transientFollowPendingRequestStatesPerProfileID;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000002ab000
- (void)_addTransientFollowState:(long long)arg1 transientFollowPendingRequestState:(long long)arg2 forPerson:(id)arg3;	// IMP=0x00000000002aaedd
- (long long)transientFollowPendingRequestStateForPerson:(id)arg1;	// IMP=0x00000000002aae00
- (long long)transientFollowStateForPerson:(id)arg1;	// IMP=0x00000000002aad23
- (id)init;	// IMP=0x00000000002aacae

@end

