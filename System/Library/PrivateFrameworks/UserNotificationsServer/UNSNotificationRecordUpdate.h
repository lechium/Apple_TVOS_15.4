//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UNSNotificationRecord;

@interface UNSNotificationRecordUpdate : NSObject
{
    UNSNotificationRecord *_notificationRecord;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000003ec4a
@property(readonly, nonatomic) UNSNotificationRecord *notificationRecord; // @synthesize notificationRecord=_notificationRecord;
- (unsigned long long)hash;	// IMP=0x000000000003ebb0
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000003eac9
- (id)_initWithNotificationRecord:(id)arg1;	// IMP=0x000000000003ea5e

@end

