//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableOrderedSet;

@interface CRSIdentifiedServiceRegistry : NSObject
{
    NSMutableOrderedSet *_identifiedServices;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x00000000000017e4
- (void).cxx_destruct;	// IMP=0x00000000000019a3
- (id)identifiedServices;	// IMP=0x000000000000198d
- (void)registerIdentifiedService:(id)arg1;	// IMP=0x00000000000018c7
- (id)init;	// IMP=0x0000000000001871

@end
