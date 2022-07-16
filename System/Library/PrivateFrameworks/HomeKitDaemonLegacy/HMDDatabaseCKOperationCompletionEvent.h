//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitMetrics/HMMLogEvent.h>

#import <HomeKitDaemonLegacy/HMDAWDLogEvent-Protocol.h>

@class NSString;

@interface HMDDatabaseCKOperationCompletionEvent : HMMLogEvent <HMDAWDLogEvent>
{
    NSString *_containerIdentifier;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000291647
@property(readonly, copy) NSString *containerIdentifier; // @synthesize containerIdentifier=_containerIdentifier;
- (id)initWithContainerIdentifier:(id)arg1;	// IMP=0x00000000002915c3
- (id)metricForAWD;	// IMP=0x000000000078f13b
- (unsigned int)AWDMessageType;	// IMP=0x000000000078f130

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
