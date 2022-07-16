//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;
@protocol OS_xpc_object;

@interface MRNotification : NSObject
{
    NSString *_notification;	// 8 = 0x8
    NSDictionary *_userInfo;	// 16 = 0x10
    NSObject<OS_xpc_object> *_xpcMessage;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000013e034
@property(retain, nonatomic) NSObject<OS_xpc_object> *xpcMessage; // @synthesize xpcMessage=_xpcMessage;
@property(readonly, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(readonly, nonatomic) NSString *notification; // @synthesize notification=_notification;
- (id)initWithNotification:(id)arg1 userInfo:(id)arg2;	// IMP=0x000000000013de71

@end

