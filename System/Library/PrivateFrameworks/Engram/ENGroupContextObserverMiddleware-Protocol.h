//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Engram/ENGroupContextMiddleware-Protocol.h>

@class ENGroup, ENGroupContext;

@protocol ENGroupContextObserverMiddleware <ENGroupContextMiddleware>

@optional
- (void)groupContextDidReceiveRegistrationIdentityUpdate:(ENGroupContext *)arg1;
- (void)groupContext:(ENGroupContext *)arg1 didReceiveDecryptionFailureForGroup:(ENGroup *)arg2;
- (void)groupContext:(ENGroupContext *)arg1 didUpdateGroup:(ENGroup *)arg2 withNewGroup:(ENGroup *)arg3;
- (void)groupContext:(ENGroupContext *)arg1 didCacheGroup:(ENGroup *)arg2;
- (void)groupContext:(ENGroupContext *)arg1 didCreateGroup:(ENGroup *)arg2;
@end

