//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, NSString;

@interface UIMutableUserNotificationAction
{
}

- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000a7fb19

// Remaining properties
@property(nonatomic) unsigned long long activationMode; // @dynamic activationMode;
@property(nonatomic, getter=isAuthenticationRequired) _Bool authenticationRequired; // @dynamic authenticationRequired;
@property(nonatomic) unsigned long long behavior; // @dynamic behavior;
@property(nonatomic, getter=isDestructive) _Bool destructive; // @dynamic destructive;
@property(copy, nonatomic) NSString *identifier; // @dynamic identifier;
@property(copy, nonatomic) NSDictionary *parameters; // @dynamic parameters;
@property(copy, nonatomic) NSString *title; // @dynamic title;

@end

