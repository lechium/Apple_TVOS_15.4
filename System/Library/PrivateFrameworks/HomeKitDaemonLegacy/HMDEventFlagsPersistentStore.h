//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemonLegacy/HMDEventFlagsStoring-Protocol.h>

@class NSString;

@interface HMDEventFlagsPersistentStore : HMFObject <HMDEventFlagsStoring>
{
    NSString *_eventFlagsStorePath;	// 8 = 0x8
    NSString *_eventFlagsStoreKey;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000a19f47
@property(readonly, nonatomic) NSString *eventFlagsStoreKey; // @synthesize eventFlagsStoreKey=_eventFlagsStoreKey;
@property(readonly, nonatomic) NSString *eventFlagsStorePath; // @synthesize eventFlagsStorePath=_eventFlagsStorePath;
- (id)lastSaveTime;	// IMP=0x0000000000a19e30
- (id)unarchiveEventFlagsPeriods;	// IMP=0x0000000000a19d0c
- (id)unarchiveEventFlagsValues;	// IMP=0x0000000000a19be8
- (void)archiveEventFlagsValues:(id)arg1 withDefinedEventFlagPeriods:(id)arg2;	// IMP=0x0000000000a19a72
- (id)initWithDataStorePath:(id)arg1 dataStoreKey:(id)arg2;	// IMP=0x0000000000a199d0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

