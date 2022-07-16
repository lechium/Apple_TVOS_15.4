//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFMessagePolicy.h>

#import <HomeKitDaemon/NSMutableCopying-Protocol.h>

@class HMDHome, NSUUID;

@interface HMDUserMessagePolicy : HMFMessagePolicy <NSMutableCopying>
{
    NSUUID *_homeUUID;	// 8 = 0x8
    unsigned long long _userPrivilege;	// 16 = 0x10
    _Bool _requiresRemoteAccess;	// 24 = 0x18
    _Bool _requiresCameraStreamingAccess;	// 25 = 0x19
    HMDHome *_home;	// 32 = 0x20
}

+ (id)userMessagePolicyWithHome:(id)arg1 userPrivilege:(unsigned long long)arg2 remoteAccessRequired:(_Bool)arg3;	// IMP=0x00000000006f8166
+ (id)userMessagePolicyWithHome:(id)arg1 userPrivilege:(unsigned long long)arg2 remoteAccessRequired:(_Bool)arg3 requiresCameraStreamingAccess:(_Bool)arg4;	// IMP=0x00000000006f80cd
- (void).cxx_destruct;	// IMP=0x00000000006f7f45
@property(readonly) _Bool requiresCameraStreamingAccess; // @synthesize requiresCameraStreamingAccess=_requiresCameraStreamingAccess;
@property(readonly) _Bool requiresRemoteAccess; // @synthesize requiresRemoteAccess=_requiresRemoteAccess;
@property(readonly) unsigned long long userPrivilege; // @synthesize userPrivilege=_userPrivilege;
@property(readonly) __weak HMDHome *home; // @synthesize home=_home;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000006f7e50
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000006f7e45
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000006f7d2d
- (unsigned long long)hash;	// IMP=0x00000000006f7caa
- (id)__initWithHome:(id)arg1 userPrivilege:(unsigned long long)arg2 remoteAccessRequired:(_Bool)arg3 requiresCameraStreamingAccess:(_Bool)arg4;	// IMP=0x00000000006f7be0
- (id)init;	// IMP=0x00000000006f7b38

@end

