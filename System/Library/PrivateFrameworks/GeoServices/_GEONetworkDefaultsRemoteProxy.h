//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <GeoServices/_GEONetworkDefaultsServerProxy-Protocol.h>

@class NSMutableArray, NSString, geo_isolater;
@protocol _GEONetworkDefaultsServerProxyDelegate;

__attribute__((visibility("hidden")))
@interface _GEONetworkDefaultsRemoteProxy : NSObject <_GEONetworkDefaultsServerProxy>
{
    id <_GEONetworkDefaultsServerProxyDelegate> _delegate;	// 8 = 0x8
    geo_isolater *_isolation;	// 16 = 0x10
    NSMutableArray *_updateCompletionHandlers;	// 24 = 0x18
    int _configChangedToken;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000c07a0c
@property(nonatomic) __weak id <_GEONetworkDefaultsServerProxyDelegate> delegate; // @synthesize delegate=_delegate;
- (void)updateNetworkDefaultsWithReason:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000c07426
- (void)updateNetworkDefaults:(CDUnknownBlockType)arg1;	// IMP=0x0000000000c0740c
- (void)_networkDefaultsDidChange;	// IMP=0x0000000000c07356
- (void)dealloc;	// IMP=0x0000000000c0731d
- (id)init;	// IMP=0x0000000000c071d9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

