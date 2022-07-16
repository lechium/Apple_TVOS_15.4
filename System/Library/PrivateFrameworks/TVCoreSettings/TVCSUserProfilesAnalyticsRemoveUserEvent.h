//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TVCoreSettings/TVCSUserProfilesAnalyticsEvent-Protocol.h>

@class NSString;

@interface TVCSUserProfilesAnalyticsRemoveUserEvent : NSObject <TVCSUserProfilesAnalyticsEvent>
{
    long long _actionType;	// 8 = 0x8
    long long _userType;	// 16 = 0x10
}

@property(nonatomic) long long userType; // @synthesize userType=_userType;
@property(nonatomic) long long actionType; // @synthesize actionType=_actionType;
- (id)_actionString;	// IMP=0x000000000002ec90
- (id)buildPayload;	// IMP=0x000000000002eba0
@property(readonly, nonatomic) NSString *eventName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
