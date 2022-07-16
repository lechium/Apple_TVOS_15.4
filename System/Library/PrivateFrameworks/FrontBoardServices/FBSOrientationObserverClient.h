//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol FBSOrientationObserverClientDelegate;

@interface FBSOrientationObserverClient
{
    id <FBSOrientationObserverClientDelegate> _delegate;	// 8 = 0x8
    unsigned int _interest;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000003215d
- (void)handleMessage:(id)arg1 withType:(long long)arg2;	// IMP=0x0000000000031f9f
- (void)configureConnectMessage:(id)arg1;	// IMP=0x0000000000031f06
- (void)_getActiveInterfaceOrientationSynchronously:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000031d47
- (void)registerOrientationInterest:(unsigned int)arg1;	// IMP=0x0000000000031c12
- (void)activeInterfaceOrientationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000031bfb
- (long long)activeInterfaceOrientation;	// IMP=0x0000000000031b23
- (void)invalidate;	// IMP=0x0000000000031ad9
- (id)initWithDelegate:(id)arg1 calloutQueue:(id)arg2;	// IMP=0x0000000000031932

@end

