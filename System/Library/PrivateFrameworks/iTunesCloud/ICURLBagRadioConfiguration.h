//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSURL;

@interface ICURLBagRadioConfiguration : NSObject
{
    NSDictionary *_bagRadioDictionary;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000d0185
- (id)urlForBagRadioKey:(id)arg1;	// IMP=0x00000000000d011a
- (_Bool)shouldIncludeHTTPHeaderField:(id)arg1 forRequestURL:(id)arg2;	// IMP=0x00000000000cffed
@property(readonly, nonatomic) long long continueListeningLoadStationThreshold;
@property(readonly, nonatomic) long long continueListeningMaxUpcomingTracksSizeToMaintain;
@property(readonly, nonatomic) long long continueListeningMaxQueueSizeInRequest;
@property(readonly, nonatomic, getter=isContinueListeningAvailable) _Bool continueListeningAvailable;
@property(readonly, nonatomic) long long maxSupportedProtocolVersion;
@property(readonly, nonatomic) long long getTracksDPInfoKBSyncCount;
@property(readonly, copy, nonatomic) NSURL *baseURL;
- (id)initWithBagRadioDictionary:(id)arg1;	// IMP=0x00000000000cfcc7

@end

