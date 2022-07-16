//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXChangeObserver-Protocol.h>
#import <PhotosUICore/PXStoryStateWatchingRequest-Protocol.h>

@class NSString, PXObservable;

@interface _PXStoryObservation : NSObject <PXChangeObserver, PXStoryStateWatchingRequest>
{
    PXObservable *_observable;	// 8 = 0x8
    CDUnknownBlockType _changeHandler;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000051f64e
@property(copy, nonatomic) CDUnknownBlockType changeHandler; // @synthesize changeHandler=_changeHandler;
@property(readonly, nonatomic) __weak PXObservable *observable; // @synthesize observable=_observable;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;	// IMP=0x000000000051f590
- (void)cancel;	// IMP=0x000000000051f531
- (id)initWithObservable:(id)arg1 changeHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000051f45c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
