//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CPAnalytics/CPAnalyticsDynamicPropertyProvider-Protocol.h>

@class NSString;

@interface PhotosAnalyticsSystemPropertyProvider : NSObject <CPAnalyticsDynamicPropertyProvider>
{
}

- (id)_lowPowerModeEnabled;	// IMP=0x000000000001358d
- (id)_process;	// IMP=0x0000000000013532
- (id)_osVersion;	// IMP=0x000000000001349a
- (id)_deviceModel;	// IMP=0x0000000000013428
- (id)_deviceFreeSpaceDescription;	// IMP=0x000000000001332c
- (id)_percentageOfFreeSpaceOnDevice;	// IMP=0x00000000000130b1
- (id)getDynamicProperty:(id)arg1 forEventName:(id)arg2 payloadForSystemPropertyExtraction:(id)arg3;	// IMP=0x0000000000013060
- (void)registerSystemProperties:(id)arg1;	// IMP=0x0000000000012f31

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

