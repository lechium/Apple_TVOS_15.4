//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface WebCache : NSObject
{
}

+ (void)clearCachedCredentials;	// IMP=0x00000000000e46c0
+ (_Bool)isDisabled;	// IMP=0x00000000000e46b0
+ (void)setDisabled:(_Bool)arg1;	// IMP=0x00000000000e4640
+ (struct CGImage *)imageForURL:(id)arg1;	// IMP=0x00000000000e44a0
+ (void)sizeOfDeadResources:(int *)arg1;	// IMP=0x00000000000e4450
+ (void)emptyInMemoryResources;	// IMP=0x00000000000e43c0
+ (void)empty;	// IMP=0x00000000000e4350
+ (id)statistics;	// IMP=0x00000000000e4000
+ (void)initialize;	// IMP=0x00000000000e3ff0

@end
