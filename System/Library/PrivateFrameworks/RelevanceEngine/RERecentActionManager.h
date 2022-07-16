//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSLock, NSMutableDictionary;

@interface RERecentActionManager
{
    NSLock *_lock;	// 8 = 0x8
    NSMutableDictionary *_dateValues;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000e970b
- (void)_handleRecentActionNotification:(id)arg1;	// IMP=0x00000000000e9591
- (unsigned long long)actionNumberOfTimesPeformedToday:(id)arg1;	// IMP=0x00000000000e954d
- (_Bool)actionWasPerformedLocally:(id)arg1;	// IMP=0x00000000000e950a
- (id)lastPerformedDateForAction:(id)arg1;	// IMP=0x00000000000e94ba
- (id)_dataForAction:(id)arg1;	// IMP=0x00000000000e9424
- (void)_storePerformAction:(id)arg1 date:(id)arg2 remote:(_Bool)arg3;	// IMP=0x00000000000e941e
- (void)didPerformAction:(id)arg1;	// IMP=0x00000000000e939f
- (void)dealloc;	// IMP=0x00000000000e932a
- (id)_init;	// IMP=0x00000000000e9241

@end

