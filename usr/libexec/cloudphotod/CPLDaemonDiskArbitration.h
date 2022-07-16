//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSHashTable, NSURL;
@protocol OS_dispatch_queue;

@interface CPLDaemonDiskArbitration : NSObject
{
    NSHashTable *_observers;	// 8 = 0x8
    struct os_unfair_lock_s _lock;	// 16 = 0x10
    _Bool _isRootVolume;	// 20 = 0x14
    NSURL *_volumeURL;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_queue;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x002000000001b745
@property(readonly, nonatomic) _Bool isRootVolume; // @synthesize isRootVolume=_isRootVolume;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) NSURL *volumeURL; // @synthesize volumeURL=_volumeURL;
- (id)redactedDescription;	// IMP=0x001000000001b6c9
- (id)description;	// IMP=0x001000000001b649
- (void)stop;	// IMP=0x001000000001b643
- (void)removeVolumeUnmountObserver:(id)arg1;	// IMP=0x001000000001b5ef
- (void)addVolumeUnmountObserver:(id)arg1;	// IMP=0x001000000001b59b
- (id)initWithVolumeURL:(id)arg1 queue:(id)arg2;	// IMP=0x001000000001b3e6

@end

