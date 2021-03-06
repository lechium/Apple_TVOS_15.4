//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSLock, NSXPCConnection;

@interface ACDDataclassOwnersManager : NSObject
{
    NSXPCConnection *_connection;	// 8 = 0x8
    NSLock *_connectionLock;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000073b10
- (id)_dataclassOwnersManagerConnection;	// IMP=0x000000000007394b
- (_Bool)performDataclassActions:(id)arg1 forAccount:(id)arg2 withChildren:(id)arg3 withError:(id *)arg4;	// IMP=0x000000000007366d
- (id)actionsForDisablingDataclass:(id)arg1 onAccount:(id)arg2 withError:(id *)arg3;	// IMP=0x000000000007337c
- (id)actionsForEnablingDataclass:(id)arg1 onAccount:(id)arg2 withError:(id *)arg3;	// IMP=0x000000000007308b
- (id)actionsForDeletingAccount:(id)arg1 affectingDataclass:(id)arg2 withError:(id *)arg3;	// IMP=0x0000000000072d9a
- (id)actionsForAddingAccount:(id)arg1 affectingDataclass:(id)arg2 withError:(id *)arg3;	// IMP=0x0000000000072a46
- (_Bool)isPerformingDataclassActionsForAccount:(id)arg1;	// IMP=0x00000000000728ac
- (void)preloadDataclassOwnersWithError:(id *)arg1;	// IMP=0x0000000000072672
- (id)init;	// IMP=0x000000000007261c

@end

