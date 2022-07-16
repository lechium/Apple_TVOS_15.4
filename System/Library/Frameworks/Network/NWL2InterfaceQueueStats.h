//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface NWL2InterfaceQueueStats : NSObject
{
    unsigned char _slot;	// 8 = 0x8
    int _interfaceType;	// 12 = 0xc
    NSString *_interfaceName;	// 16 = 0x10
    unsigned long long _averageQueueDelay;	// 24 = 0x18
    unsigned long long _minimumQueueDelay;	// 32 = 0x20
    unsigned long long _maximumQueueDelay;	// 40 = 0x28
}

+ (id)interfaceQueueStatsSlotToString:(unsigned char)arg1;	// IMP=0x0000000000078620
- (void).cxx_destruct;	// IMP=0x0000000000078610
@property(nonatomic) unsigned long long maximumQueueDelay; // @synthesize maximumQueueDelay=_maximumQueueDelay;
@property(nonatomic) unsigned long long minimumQueueDelay; // @synthesize minimumQueueDelay=_minimumQueueDelay;
@property(nonatomic) unsigned long long averageQueueDelay; // @synthesize averageQueueDelay=_averageQueueDelay;
@property(nonatomic) unsigned char slot; // @synthesize slot=_slot;
@property(retain, nonatomic) NSString *interfaceName; // @synthesize interfaceName=_interfaceName;
@property(nonatomic) int interfaceType; // @synthesize interfaceType=_interfaceType;
- (id)description;	// IMP=0x0000000000078420

@end

