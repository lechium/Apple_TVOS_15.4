//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface PRSharingSessionHelper : NSObject
{
}

+ (long long)CoarseRangeToProx:(int)arg1;	// IMP=0x000000000001035b
+ (id)ProxToString:(long long)arg1;	// IMP=0x0000000000010322
+ (int)ProxToCoarseRange:(long long)arg1;	// IMP=0x000000000001030a
+ (id)reverseNSData:(id)arg1;	// IMP=0x0000000000010192
+ (id)convertMacStringToNSData:(const void *)arg1;	// IMP=0x0000000000010137
+ (unsigned long long)NSDataToUInt64:(id)arg1;	// IMP=0x0000000000010030
+ (basic_string_5886a005)UIntToHexString:(unsigned long long)arg1 len:(unsigned long long)arg2;	// IMP=0x000000000000fcff
+ (id)HexStringToNSDataMac:(const void *)arg1;	// IMP=0x000000000000fbb1
+ (id)UUIDStringToNSDataMac:(const void *)arg1 len:(unsigned long long)arg2;	// IMP=0x000000000000faa4
+ (id)UUIDToNSDataMac:(id)arg1 len:(unsigned long long)arg2;	// IMP=0x000000000000f964
+ (id)NSDataMacToUUID:(id)arg1;	// IMP=0x000000000000f816

@end

