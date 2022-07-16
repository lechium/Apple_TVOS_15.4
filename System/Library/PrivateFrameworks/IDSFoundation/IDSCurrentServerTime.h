//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSCurrentServerTimePair;
@protocol IDSCurrentServerTimeProvider;

@interface IDSCurrentServerTime : NSObject
{
    IDSCurrentServerTimePair *_timePair;	// 8 = 0x8
    id <IDSCurrentServerTimeProvider> _serverTimeProvider;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x000000000013375f
- (void).cxx_destruct;	// IMP=0x000000000013410c
@property(retain, nonatomic) id <IDSCurrentServerTimeProvider> serverTimeProvider; // @synthesize serverTimeProvider=_serverTimeProvider;
@property(retain) IDSCurrentServerTimePair *timePair; // @synthesize timePair=_timePair;
- (void)_storeCurrentTime;	// IMP=0x0000000000133fd5
- (void)_refreshServerTime;	// IMP=0x0000000000133dab
- (void)_storeInitialServerTimeIfNeeded;	// IMP=0x0000000000133ac0
- (double)_refreshTimeInterval;	// IMP=0x0000000000133969
- (id)currentServerTimeDate;	// IMP=0x000000000013393a
- (double)currentServerTimeInterval;	// IMP=0x0000000000133836
- (id)initWithServerTimeProvider:(id)arg1;	// IMP=0x00000000001337cb

@end
