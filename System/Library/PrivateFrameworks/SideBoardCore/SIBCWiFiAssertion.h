//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HHAnalyticsInterval;
@protocol HHAnalyticsReporter;

__attribute__((visibility("hidden")))
@interface SIBCWiFiAssertion : NSObject
{
    id <HHAnalyticsReporter> _analyticsReporter;	// 8 = 0x8
    HHAnalyticsInterval *_metricInterval;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000041ad
- (void)dealloc;	// IMP=0x000000000000417e
- (void)invalidate;	// IMP=0x00000000000040ce
- (id)init;	// IMP=0x0000000000004074
- (id)initWithAnalyticsReporter:(id)arg1;	// IMP=0x0000000000003fd6

@end

