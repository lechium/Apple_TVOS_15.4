//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PreviewsInjection/BSServiceConnectionEndpointMonitorDelegate-Protocol.h>

@class BSServiceConnectionEndpointMonitor, NSString, _TtC17PreviewsInjection14UVControlAgent;

@interface UVAgentControlServiceMonitor : NSObject <BSServiceConnectionEndpointMonitorDelegate>
{
    BSServiceConnectionEndpointMonitor *_endpointMonitor;	// 8 = 0x8
    _TtC17PreviewsInjection14UVControlAgent *_agent;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x0000000000002b7d
+ (void)load;	// IMP=0x0000000000002b39
- (void).cxx_destruct;	// IMP=0x0000000000002e37
- (void)monitor:(id)arg1 willLoseEndpoint:(id)arg2;	// IMP=0x0000000000002e31
- (void)monitor:(id)arg1 didReceiveEndpoint:(id)arg2;	// IMP=0x0000000000002cd2
- (void)activate;	// IMP=0x0000000000002c5b
- (id)init;	// IMP=0x0000000000002bd2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

