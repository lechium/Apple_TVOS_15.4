//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeKit/HMFObject-Protocol.h>
#import <HomeKit/NSCopying-Protocol.h>
#import <HomeKit/NSMutableCopying-Protocol.h>
#import <HomeKit/NSSecureCoding-Protocol.h>

@class NSArray, NSString;

@interface HMUserInviteInformation : NSObject <HMFObject, NSCopying, NSMutableCopying, NSSecureCoding>
{
    _Bool _administrator;	// 8 = 0x8
    _Bool _remoteAccessAllowed;	// 9 = 0x9
    _Bool _announceAccessAllowed;	// 10 = 0xa
    NSString *_userID;	// 16 = 0x10
    unsigned long long _camerasAccessLevel;	// 24 = 0x18
}

+ (id)shortDescription;	// IMP=0x0000000000203708
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000203700
- (void).cxx_destruct;	// IMP=0x0000000000203631
@property(readonly, getter=isAnnounceAccessAllowed) _Bool announceAccessAllowed; // @synthesize announceAccessAllowed=_announceAccessAllowed;
@property(readonly, nonatomic) unsigned long long camerasAccessLevel; // @synthesize camerasAccessLevel=_camerasAccessLevel;
@property(readonly, getter=isRemoteAccessAllowed) _Bool remoteAccessAllowed; // @synthesize remoteAccessAllowed=_remoteAccessAllowed;
@property(readonly, getter=isAdministrator) _Bool administrator; // @synthesize administrator=_administrator;
@property(copy) NSString *userID; // @synthesize userID=_userID;
@property(readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSString *privateDescription;
@property(readonly, copy) NSString *shortDescription;
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000203266
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000203162
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002030a3
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000203098
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000202e97
- (id)initWithUser:(id)arg1 administrator:(_Bool)arg2 remoteAccess:(_Bool)arg3 announceAccess:(_Bool)arg4 camerasAccessLevel:(unsigned long long)arg5;	// IMP=0x0000000000202dff
- (id)initWithUser:(id)arg1 administrator:(_Bool)arg2 remoteAccess:(_Bool)arg3;	// IMP=0x0000000000202dd9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *propertyDescription;
@property(readonly) Class superclass;

@end

