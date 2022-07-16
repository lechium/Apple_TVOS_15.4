//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SideBoardCore/SIBCApplicationFactoryPrivate-Protocol.h>

@protocol SIBCApplicationFactory;

__attribute__((visibility("hidden")))
@interface SIBCApplicationFactoryPrivate : NSObject <SIBCApplicationFactoryPrivate>
{
    id <SIBCApplicationFactory> _factory;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000000cc8d
- (id)createNotificationCenter;	// IMP=0x000000000000cc74
- (id)createAppArbitratorWithEndpointId:(id)arg1;	// IMP=0x000000000000cc27
- (id)createAppArbitrationManager;	// IMP=0x000000000000cc0e
- (id)createAnalyticsReporter;	// IMP=0x000000000000cbf5
- (id)createConnectionManagerWithQueue:(id)arg1;	// IMP=0x000000000000cba8
- (id)createApplicationsWithQueue:(id)arg1;	// IMP=0x000000000000cb92
- (id)initWithFactory:(id)arg1;	// IMP=0x000000000000cb27

@end
