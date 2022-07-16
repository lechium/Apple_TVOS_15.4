//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <VectorKit/VKRouteContextObserver-Protocol.h>

@class NSString, VKRouteContext;

__attribute__((visibility("hidden")))
@interface VKRouteContextObserverThunk : NSObject <VKRouteContextObserver>
{
    void *_transitSupport;	// 8 = 0x8
    struct _retain_ptr<VKRouteContext *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> {
        CDUnknownFunctionPointerType *_vptr$_retain_ptr;
        VKRouteContext *_obj;
        struct _retain_objc _retain;
        struct _release_objc _release;
    } _routeContext;	// 16 = 0x10
}

- (id).cxx_construct;	// IMP=0x0000000000417bfe
- (void).cxx_destruct;	// IMP=0x0000000000417bdd
- (void)routeContextStateDidChange:(id)arg1;	// IMP=0x0000000000417b33
- (void)dealloc;	// IMP=0x0000000000417aec
- (id)initWithRouteContext:(id)arg1 transitSupport:(void *)arg2;	// IMP=0x0000000000417a77

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

