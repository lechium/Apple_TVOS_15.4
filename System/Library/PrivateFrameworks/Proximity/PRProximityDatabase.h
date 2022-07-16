//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface PRProximityDatabase : NSObject
{
}

+ (BOOL)getDeviceBtRxOffsetFromModel:(long long)arg1;	// IMP=0x0000000000019e6a
+ (BOOL)getDeviceBtTxPowerFromModel:(long long)arg1;	// IMP=0x0000000000019e5f
+ (long long)getScannerDeviceModel;	// IMP=0x0000000000019e09
+ (long long)getPRDeviceModelFromModelId:(id)arg1;	// IMP=0x0000000000019ba5
+ (_Bool)getProximityDeviceParameters:(id *)arg1 forDeviceModel:(id)arg2 withError:(id *)arg3;	// IMP=0x00000000000196c6
+ (id)getDeviceData;	// IMP=0x0000000000012eef
- (id)init;	// IMP=0x0000000000012eb1

@end

