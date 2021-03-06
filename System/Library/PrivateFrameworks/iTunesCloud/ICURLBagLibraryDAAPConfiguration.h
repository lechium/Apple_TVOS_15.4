//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface ICURLBagLibraryDAAPConfiguration : NSObject
{
    NSDictionary *_bagDictionary;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000001b00c3
@property(readonly, nonatomic) unsigned long long maxSyncRetryIntervalSeconds;
@property(readonly, nonatomic) long long autoUpdatePollingFrequencySeconds;
@property(readonly, nonatomic) long long updatePollingFrequencySeconds;
@property(readonly, nonatomic) long long subscribedContainerPollingFrequencySeconds;
@property(readonly, nonatomic) long long playDataBatchIntervalInMinutes;
@property(readonly, nonatomic, getter=isOnlineGeniusForMatchEnabled) _Bool onlineGeniusForMatchEnabled;
@property(readonly, nonatomic) NSString *baseURL;
@property(readonly, nonatomic) NSString *databaseName;
@property(readonly, nonatomic) long long databaseID;
- (id)description;	// IMP=0x00000000001aff96
- (id)initWithBagLibraryDAAPDictionary:(id)arg1;	// IMP=0x00000000001aff2b

@end

