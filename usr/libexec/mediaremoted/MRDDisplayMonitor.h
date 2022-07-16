//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FBSDisplayLayoutMonitor;
@protocol OS_dispatch_queue;

@interface MRDDisplayMonitor : NSObject
{
    FBSDisplayLayoutMonitor *_displayMonitor;	// 8 = 0x8
    _Bool _layoutChangeScheduled;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_serialQueue;	// 24 = 0x18
    _Bool _displayOn;	// 32 = 0x20
    _Bool _lockScreenForegrounded;	// 33 = 0x21
    _Bool _controlCenterForegrounded;	// 34 = 0x22
}

+ (id)sharedMonitor;	// IMP=0x00200000000d7b1f
- (void).cxx_destruct;	// IMP=0x00200000000d86c3
@property(nonatomic) _Bool controlCenterForegrounded; // @synthesize controlCenterForegrounded=_controlCenterForegrounded;
@property(nonatomic) _Bool lockScreenForegrounded; // @synthesize lockScreenForegrounded=_lockScreenForegrounded;
@property(nonatomic) _Bool displayOn; // @synthesize displayOn=_displayOn;
- (void)dealloc;	// IMP=0x00100000000d865d
- (void)scheduleLayoutChangeForReason:(id)arg1;	// IMP=0x00100000000d8441
- (void)layoutMonitor:(id)arg1 didUpdateDisplayLayout:(id)arg2 withContext:(id)arg3;	// IMP=0x00100000000d8088
@property(readonly, nonatomic) _Bool controlCenterVisible;
@property(readonly, nonatomic) _Bool lockScreenVisible;
- (id)_fbsDisplayMonitorConfiguration;	// IMP=0x00100000000d7e05
- (id)init;	// IMP=0x00100000000d7b74

@end

