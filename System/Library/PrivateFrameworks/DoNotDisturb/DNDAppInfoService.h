//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue;

@interface DNDAppInfoService : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSString *_clientIdentifier;	// 16 = 0x10
}

+ (id)serviceForClientIdentifier:(id)arg1;	// IMP=0x000000000002e46d
+ (void)initialize;	// IMP=0x000000000002e463
- (void).cxx_destruct;	// IMP=0x000000000002f2c3
- (id)_initWithClientIdentifier:(id)arg1;	// IMP=0x000000000002f20d
- (id)getAppInfoForBundleIdentifiers:(id)arg1 error:(id *)arg2;	// IMP=0x000000000002eb4c
- (id)getAppInfoForBundleIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x000000000002e6ee

@end
