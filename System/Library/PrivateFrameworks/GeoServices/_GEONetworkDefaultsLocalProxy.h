//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <GeoServices/GEOPListStateCapturing-Protocol.h>
#import <GeoServices/_GEONetworkDefaultsServerProxy-Protocol.h>

@class NSDate, NSMutableArray, NSString, geo_isolater;
@protocol _GEONetworkDefaultsServerProxyDelegate;

__attribute__((visibility("hidden")))
@interface _GEONetworkDefaultsLocalProxy : NSObject <_GEONetworkDefaultsServerProxy, GEOPListStateCapturing>
{
    id <_GEONetworkDefaultsServerProxyDelegate> _delegate;	// 8 = 0x8
    geo_isolater *_isolation;	// 16 = 0x10
    NSMutableArray *_updateCompletionHandlers;	// 24 = 0x18
    unsigned long long _stateCaptureHandle;	// 32 = 0x20
    NSDate *_lastNetworkFailure;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000c0719d
@property(nonatomic) __weak id <_GEONetworkDefaultsServerProxyDelegate> delegate; // @synthesize delegate=_delegate;
- (id)captureStatePlistWithHints:(struct os_state_hints_s *)arg1;	// IMP=0x0000000000c06f70
- (void)_updateWithNewConfig:(id)arg1 request:(id)arg2 response:(id)arg3;	// IMP=0x0000000000c065f4
- (void)_callCompletionHandlersWithError:(id)arg1;	// IMP=0x0000000000c063c3
- (void)_processNetworkDefaultsResponse:(id)arg1 data:(id)arg2 error:(id)arg3 request:(id)arg4;	// IMP=0x0000000000c05f6c
- (id)_urlRequestForNetworkDefaults;	// IMP=0x0000000000c05c95
- (void)_updateNetworkDefaults;	// IMP=0x0000000000c057e6
- (void)updateNetworkDefaultsWithReason:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000c0539e
- (void)updateNetworkDefaults:(CDUnknownBlockType)arg1;	// IMP=0x0000000000c05384
- (id)init;	// IMP=0x0000000000c04f89

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

