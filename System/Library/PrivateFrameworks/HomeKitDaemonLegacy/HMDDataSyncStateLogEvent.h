//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitMetrics/HMMLogEvent.h>

@interface HMDDataSyncStateLogEvent : HMMLogEvent
{
    _Bool _shouldSubmit;	// 8 = 0x8
    unsigned long long _dataSyncState;	// 16 = 0x10
}

+ (id)dataSyncStateEstablished:(unsigned long long)arg1;	// IMP=0x00000000004b5773
@property(nonatomic) unsigned long long dataSyncState; // @synthesize dataSyncState=_dataSyncState;
- (_Bool)shouldSubmit;	// IMP=0x00000000004b5741
- (id)initWithDataSyncState:(unsigned long long)arg1 currentDataSyncContext:(id)arg2;	// IMP=0x00000000004b5667
- (id)initWithDataSyncState:(unsigned long long)arg1;	// IMP=0x00000000004b5608

@end
