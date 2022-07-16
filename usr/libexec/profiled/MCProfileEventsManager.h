//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol MCProfileEventsDataProvider;

@interface MCProfileEventsManager : NSObject
{
    id <MCProfileEventsDataProvider> _dataProvider;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000001b13a
@property(retain, nonatomic) id <MCProfileEventsDataProvider> dataProvider; // @synthesize dataProvider=_dataProvider;
- (void)_removeAllProfileEvents;	// IMP=0x001000000001b106
- (void)_saveProfileEvents:(id)arg1;	// IMP=0x001000000001b00a
- (id)_timestampFromEvent:(id)arg1;	// IMP=0x001000000001af86
- (id)_profileEvents;	// IMP=0x001000000001aeec
- (id)_profileEventsOnDisk;	// IMP=0x001000000001ae16
- (void)removeExpiredProfileEvents;	// IMP=0x001000000001aae3
- (void)addEventForProfile:(id)arg1 operation:(id)arg2 source:(id)arg3;	// IMP=0x001000000001a833
- (id)earlistProfileEventExpiry;	// IMP=0x001000000001a5dc
- (id)initWithDataProvider:(id)arg1;	// IMP=0x001000000001a571
- (id)init;	// IMP=0x001000000001a531

@end
