//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMFNetService;

__attribute__((visibility("hidden")))
@interface __HMFNetServiceMonitor
{
    HMFNetService *_service;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000439a9
@property(readonly) HMFNetService *service; // @synthesize service=_service;
- (id)logIdentifier;	// IMP=0x0000000000043976
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x000000000004380d
- (unsigned long long)reachabilityPath;	// IMP=0x00000000000437f4
- (id)netAddress;	// IMP=0x0000000000043799
- (void)dealloc;	// IMP=0x000000000004371f
- (id)initWithNetService:(id)arg1;	// IMP=0x000000000004364d
- (id)initWithNetAddress:(id)arg1;	// IMP=0x0000000000043597

@end

