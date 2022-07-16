//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSHashTable, NSString;
@protocol OS_os_log;

@interface HKSynchronousObserverSet : NSObject
{
    NSHashTable *_observerTable;	// 8 = 0x8
    NSString *_name;	// 16 = 0x10
    NSObject<OS_os_log> *_category;	// 24 = 0x18
    struct os_unfair_lock_s _lock;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000619c7
@property(readonly, copy) NSArray *allObservers;
@property(readonly) unsigned long long count;
- (void)notifyObservers:(CDUnknownBlockType)arg1;	// IMP=0x00000000000616c6
- (void)unregisterObserver:(id)arg1;	// IMP=0x0000000000061630
- (void)registerObserver:(id)arg1;	// IMP=0x000000000006159a
- (id)initWithName:(id)arg1 loggingCategory:(id)arg2;	// IMP=0x00000000000614bd

@end

