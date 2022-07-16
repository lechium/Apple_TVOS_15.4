//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SiriAnalytics/SiriAnalyticsMessageStorage-Protocol.h>

@class NSString;

@interface SiriAnalyticsFBFMessageStorageProvider : NSObject <SiriAnalyticsMessageStorage>
{
    NSString *_applicationIdentifier;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000007ac0
- (void)storeMessages:(id)arg1;	// IMP=0x00000000000078ea
- (id)initWithApplicationIdentifier:(id)arg1;	// IMP=0x000000000000787f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

