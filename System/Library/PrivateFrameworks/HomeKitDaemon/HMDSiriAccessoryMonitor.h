//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMapTable;
@protocol HMDSiriAccessoryMonitorDelegate;

@interface HMDSiriAccessoryMonitor : NSObject
{
    id <HMDSiriAccessoryMonitorDelegate> _delegate;	// 8 = 0x8
    NSMapTable *_accessories;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000001870e0
@property(retain, nonatomic) NSMapTable *accessories; // @synthesize accessories=_accessories;
@property(readonly, nonatomic) __weak id <HMDSiriAccessoryMonitorDelegate> delegate; // @synthesize delegate=_delegate;
- (void)accessory:(id)arg1 setSupportsDragonSiri:(_Bool)arg2;	// IMP=0x0000000000186fdc
- (void)setTargetableAccessory:(id)arg1 withControllers:(id)arg2;	// IMP=0x0000000000186c39
- (void)_removeAccessory:(id)arg1;	// IMP=0x0000000000186b32
- (void)_addAccessory:(id)arg1 withTarget:(id)arg2;	// IMP=0x0000000000186a45
- (id)_accessoriesTargetingAccessory:(id)arg1;	// IMP=0x00000000001867ec
- (_Bool)hasAnyActiveTargetingAccessories;	// IMP=0x000000000018668b
- (id)_getInfoForAccessory:(id)arg1;	// IMP=0x0000000000186608
- (id)initWithDelegate:(id)arg1;	// IMP=0x000000000018657a

@end
