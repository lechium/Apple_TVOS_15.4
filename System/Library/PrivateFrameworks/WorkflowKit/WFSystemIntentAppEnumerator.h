//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary;
@protocol OS_dispatch_queue;

@interface WFSystemIntentAppEnumerator : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    int _token;	// 16 = 0x10
    NSDictionary *_identifiersByIntentName;	// 24 = 0x18
    NSDictionary *_identifiersByUserActivityType;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000006da36
- (id)supportedIdentifiersForIntentClassName:(id)arg1 includingUserActivityBasedApps:(_Bool)arg2;	// IMP=0x000000000006d937
- (void)enumerate;	// IMP=0x000000000006d051
- (void)dealloc;	// IMP=0x000000000006d018
- (id)init;	// IMP=0x000000000006ceeb

@end

