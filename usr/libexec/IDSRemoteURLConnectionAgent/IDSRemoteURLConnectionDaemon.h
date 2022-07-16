//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface IDSRemoteURLConnectionDaemon : NSObject
{
    NSMutableDictionary *_uniqueIDToURLLoaderMap;	// 8 = 0x8
    void *_transaction;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x0040000000001588
- (void).cxx_destruct;	// IMP=0x002000000000237c
- (void)_pidSuspended:(int)arg1;	// IMP=0x0010000000002292
- (id)urlLoaderForUniqueID:(id)arg1;	// IMP=0x001000000000222e
- (void)_terminateAfterDelayIfIdle;	// IMP=0x00100000000020aa
- (void)removeURLLoadersForUniqueIDs:(id)arg1;	// IMP=0x0010000000001e3d
- (void)removeURLLoaderForUniqueID:(id)arg1;	// IMP=0x0010000000001dbe
- (void)addURLLoader:(id)arg1;	// IMP=0x0010000000001b55
- (void)logState;	// IMP=0x0010000000001b4f
- (void)shutdown;	// IMP=0x0010000000001a80
- (void)_terminate;	// IMP=0x0010000000001a34
- (void)dealloc;	// IMP=0x00100000000019e2
- (id)init;	// IMP=0x00100000000015dd

@end

