//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitCore/PKInvalidateObservable-Protocol.h>

@class NSString, NSURL;

@interface PKDirectoryCoordinator : NSObject <PKInvalidateObservable>
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    _Atomic _Bool _invalidated;	// 12 = 0xc
    NSURL *_url;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000003d40d2
- (void)performCoordinatedAction:(CDUnknownBlockType)arg1;	// IMP=0x00000000003d4030
- (void)invalidate;	// IMP=0x00000000003d3ff0
@property(readonly, nonatomic, getter=isInvalidated) _Bool invalidated; // @dynamic invalidated;
- (id)initWithURL:(id)arg1;	// IMP=0x00000000003d3f40
- (id)init;	// IMP=0x00000000003d3f32

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
