//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface DiskSpaceManager : NSObject
{
}

+ (long long)recoverableDiskSpaceAtPath:(id)arg1;	// IMP=0x00400000000472d5
+ (_Bool)ensureAvailableDiskSpace:(long long)arg1 atPath:(id)arg2;	// IMP=0x0010000000046c0a
+ (long long)availableDiskSpaceAtPath:(id)arg1;	// IMP=0x0010000000046a1d

@end

