//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface PBSPowerManager : NSObject
{
}

+ (_Bool)isDeviceAsleepAndSleptManually:(_Bool *)arg1;	// IMP=0x0000000000014220
+ (id)sharedInstance;	// IMP=0x0000000000014160
+ (void)load;	// IMP=0x0000000000014030
- (void)wakeDeviceWithOptions:(id)arg1;	// IMP=0x0000000000014360
- (id)init;	// IMP=0x00000000000142d0
@property(readonly, nonatomic, getter=isDeviceAsleep) _Bool deviceAsleep;

@end
