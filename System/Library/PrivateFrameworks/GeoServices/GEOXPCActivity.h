//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, geo_isolater;
@protocol OS_xpc_object;

@interface GEOXPCActivity : NSObject
{
    NSString *_name;	// 8 = 0x8
    _Bool _isRepeating;	// 16 = 0x10
    _Bool _shouldLaunchDaemon;	// 17 = 0x11
    CDUnknownBlockType _handler;	// 24 = 0x18
    NSObject<OS_xpc_object> *_activity;	// 32 = 0x20
    NSObject<OS_xpc_object> *_criteria;	// 40 = 0x28
    geo_isolater *_isolation;	// 48 = 0x30
}

+ (void)cancelActivity:(id)arg1;	// IMP=0x0000000000bfba5a
+ (id)registerActivity:(id)arg1 criteria:(id)arg2 shouldLaunchDaemon:(_Bool)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000bfb9c1
+ (void)checkInActivity:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000bfb70b
+ (void)resetActivities;	// IMP=0x0000000000bfb437
+ (void)clearActivity:(id)arg1;	// IMP=0x0000000000bfb318
+ (void)addActivity:(id)arg1 shouldLaunchDaemon:(_Bool)arg2 repeating:(_Bool)arg3;	// IMP=0x0000000000bfb0c7
+ (void)updateActivities:(CDUnknownBlockType)arg1;	// IMP=0x0000000000bfaf8b
- (void).cxx_destruct;	// IMP=0x0000000000bfc65d
- (void)dealloc;	// IMP=0x0000000000bfc616
- (void)cancelActivity;	// IMP=0x0000000000bfc592
- (void)finishActivity;	// IMP=0x0000000000bfc36d
- (void)deferActivity;	// IMP=0x0000000000bfc182
- (_Bool)shouldDeferActivity;	// IMP=0x0000000000bfc10e
- (void)_handleRunActivity:(id)arg1;	// IMP=0x0000000000bfc034
- (id)initWithName:(id)arg1 criteria:(id)arg2 shouldLaunchDaemon:(_Bool)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000bfbb43

@end

