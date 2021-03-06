//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <StoreServices/SSXPCCoding-Protocol.h>

@class NSArray, NSDate, NSDictionary, NSString;

@interface SSRemoteNotification : NSObject <SSXPCCoding>
{
    NSDictionary *_userInfo;	// 8 = 0x8
}

- (id)_valueForAPSKey:(id)arg1;	// IMP=0x00000000000adc00
- (id)_valueForAlertKey:(id)arg1;	// IMP=0x00000000000adb63
- (id)initWithXPCEncoding:(id)arg1;	// IMP=0x00000000000adadb
- (id)copyXPCEncoding;	// IMP=0x00000000000adaa8
@property(readonly, nonatomic) NSDictionary *notificationUserInfo;
- (id)valueForKey:(id)arg1;	// IMP=0x00000000000ada7b
@property(readonly, nonatomic) long long version;
@property(readonly, nonatomic) NSString *tapUrl;
@property(readonly, nonatomic) NSString *soundFileName;
@property(readonly, nonatomic) NSDictionary *metrics;
@property(readonly, nonatomic) NSDate *expirationDate;
@property(readonly, nonatomic) NSString *category;
@property(readonly, nonatomic) NSArray *buttons;
@property(readonly, nonatomic) id badgeValue;
@property(readonly, nonatomic) NSString *artworkUrl;
@property(readonly, nonatomic) _Bool explicitContent;
@property(readonly, nonatomic) NSString *alertTitleString;
@property(readonly, nonatomic) NSString *alertOKString;
@property(readonly, nonatomic) NSString *alertCancelString;
@property(readonly, nonatomic) NSString *alertBodyString;
@property(readonly, nonatomic) long long actionType;
- (void)dealloc;	// IMP=0x00000000000ad3d4
- (id)initWithNotificationUserInfo:(id)arg1;	// IMP=0x00000000000ad207

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

