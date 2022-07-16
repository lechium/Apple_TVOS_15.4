//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface CSGestureMonitor
{
    unsigned long long _wakeGestureTimestamp;	// 8 = 0x8
    unsigned long long _dismissalTimestamp;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x004000000004e600
@property(nonatomic) unsigned long long dismissalTimestamp; // @synthesize dismissalTimestamp=_dismissalTimestamp;
@property(nonatomic) unsigned long long wakeGestureTimestamp; // @synthesize wakeGestureTimestamp=_wakeGestureTimestamp;
- (_Bool)isTriggerHandheld;	// IMP=0x001000000004e608

@end

