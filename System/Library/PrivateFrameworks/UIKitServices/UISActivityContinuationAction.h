//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <FrontBoardServices/BSAction.h>

@class NSData, NSDate, NSString;

@interface UISActivityContinuationAction : BSAction
{
}

- (_Bool)isKindOfClass:(Class)arg1;	// IMP=0x0000000000007778
- (id)keyDescriptionForSetting:(unsigned long long)arg1;	// IMP=0x000000000000771b
- (long long)UIActionType;	// IMP=0x0000000000007710
@property(readonly, nonatomic) NSData *userActivityData;
@property(readonly, nonatomic) NSDate *lastUpdateTime;
@property(readonly, nonatomic) NSString *activityType;
@property(readonly, nonatomic) NSString *originatingDeviceName;
@property(readonly, nonatomic) NSString *originatingDeviceType;
@property(readonly, nonatomic) NSString *activityTypeIdentifier;
@property(readonly, nonatomic) NSString *identifier;
- (id)initWithSettings:(id)arg1;	// IMP=0x0000000000007224

@end

