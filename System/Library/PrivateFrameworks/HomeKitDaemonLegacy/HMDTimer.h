//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeKitDaemonLegacy/HMDTimerProvider-Protocol.h>

@class NSString;

@interface HMDTimer : NSObject <HMDTimerProvider>
{
}

- (id)timerWithTimeInterval:(double)arg1 options:(unsigned long long)arg2;	// IMP=0x0000000000002f44

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

