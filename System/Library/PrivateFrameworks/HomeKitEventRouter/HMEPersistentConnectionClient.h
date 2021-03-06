//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSObject;
@protocol HMEPersistentConnectionClientDelegate, OS_os_log;

@interface HMEPersistentConnectionClient
{
    NSObject<OS_os_log> *_logger;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000001624b
- (void)processReceivedCachedEventsFromMessage:(id)arg1;	// IMP=0x0000000000016199
- (void)processReceivedEventsFromMessage:(id)arg1;	// IMP=0x0000000000016114
- (void)didReconnect;	// IMP=0x0000000000015f5b
- (void)didInvalidateConnection;	// IMP=0x0000000000015f55
@property __weak id <HMEPersistentConnectionClientDelegate> delegate;
- (id)initWithQueue:(id)arg1 storeReadHandle:(id)arg2 storeWriteHandle:(id)arg3;	// IMP=0x0000000000015e7a
- (id)initWithQueue:(id)arg1;	// IMP=0x0000000000015e63
- (id)initWithQueue:(id)arg1 storeReadHandle:(id)arg2 storeWriteHandle:(id)arg3 logger:(id)arg4;	// IMP=0x0000000000015dd6

@end

