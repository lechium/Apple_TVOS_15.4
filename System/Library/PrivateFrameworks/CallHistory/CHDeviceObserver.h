//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CHNotifyObserver, NSObject;
@protocol CHDeviceDataSource, OS_dispatch_queue;

@interface CHDeviceObserver
{
    _Bool _bootLockEnabled;	// 8 = 0x8
    id <CHDeviceDataSource> _dataSource;	// 16 = 0x10
    CHNotifyObserver *_firstUnlockNotifyObserver;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_queue;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000386b1
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) CHNotifyObserver *firstUnlockNotifyObserver; // @synthesize firstUnlockNotifyObserver=_firstUnlockNotifyObserver;
@property(readonly, nonatomic) id <CHDeviceDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void)performDelegateSelector:(SEL)arg1 withDelegate:(id)arg2;	// IMP=0x0000000000038608
@property(nonatomic, getter=isBootLockEnabled) _Bool bootLockEnabled; // @synthesize bootLockEnabled=_bootLockEnabled;
- (id)initWithQueue:(id)arg1 dataSource:(id)arg2;	// IMP=0x0000000000038213
- (id)initWithQueue:(id)arg1;	// IMP=0x00000000000381af
- (id)init;	// IMP=0x00000000000380e6

@end

