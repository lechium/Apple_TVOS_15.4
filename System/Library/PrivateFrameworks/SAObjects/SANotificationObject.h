//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDate, NSNumber, NSString;

@interface SANotificationObject
{
}

+ (id)objectWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x0000000000027708
+ (id)object;	// IMP=0x00000000000276f6
@property(copy, nonatomic) NSString *type;
@property(copy, nonatomic) NSString *timeZoneId;
@property(copy, nonatomic) NSString *threadIdentifier;
@property(copy, nonatomic) NSString *source;
@property(copy, nonatomic) NSDate *recencyDate;
@property(copy, nonatomic) NSString *priority;
@property(copy, nonatomic) NSNumber *previewRestricted;
@property(copy, nonatomic) NSString *notificationId;
@property(copy, nonatomic) NSDate *endDate;
@property(copy, nonatomic) NSNumber *dateIsAllDay;
@property(copy, nonatomic) NSDate *date;
@property(copy, nonatomic) NSString *applicationId;
- (id)encodedClassName;	// IMP=0x00000000000276e9
- (id)groupIdentifier;	// IMP=0x00000000000276d5

@end

