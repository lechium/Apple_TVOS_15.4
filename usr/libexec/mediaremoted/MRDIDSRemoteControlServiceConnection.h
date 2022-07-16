//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MRExternalDeviceTransportConnection, NSDate, NSString;
@protocol NSObject;

@interface MRDIDSRemoteControlServiceConnection : NSObject
{
    NSString *_destination;	// 8 = 0x8
    MRExternalDeviceTransportConnection *_connection;	// 16 = 0x10
    NSDate *_connectionAttemptDate;	// 24 = 0x18
    id <NSObject> _notificationToken;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0020000000047ea1
@property(retain, nonatomic) id <NSObject> notificationToken; // @synthesize notificationToken=_notificationToken;
@property(retain, nonatomic) NSDate *connectionAttemptDate; // @synthesize connectionAttemptDate=_connectionAttemptDate;
@property(retain, nonatomic) MRExternalDeviceTransportConnection *connection; // @synthesize connection=_connection;
@property(retain, nonatomic) NSString *destination; // @synthesize destination=_destination;
- (void)dealloc;	// IMP=0x0010000000047d9a

@end
