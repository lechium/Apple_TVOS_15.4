//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface PPLocationSupport : NSObject
{
}

+ (id)locationFromThoroughfare:(id)arg1 subThoroughfare:(id)arg2 locality:(id)arg3 subLocality:(id)arg4 administrativeArea:(id)arg5 postalCode:(id)arg6 category:(unsigned short)arg7;	// IMP=0x00000000000bf2bd
+ (_Bool)fuzzyMatchingLocations:(id)arg1 and:(id)arg2;	// IMP=0x00000000000be72c
+ (id)mapTitleForLocation:(id)arg1;	// IMP=0x00000000000be640
+ (id)fullAddressOfLocation:(id)arg1;	// IMP=0x00000000000be4a1
+ (id)streetAddressOfLocation:(id)arg1;	// IMP=0x00000000000be3b7

@end

