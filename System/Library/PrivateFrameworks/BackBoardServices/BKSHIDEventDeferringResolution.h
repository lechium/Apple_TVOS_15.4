//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <BackBoardServices/NSCopying-Protocol.h>
#import <BackBoardServices/NSMutableCopying-Protocol.h>
#import <BackBoardServices/NSSecureCoding-Protocol.h>

@class BKSHIDEventDeferringEnvironment, BKSHIDEventDeferringToken, BKSHIDEventDisplay, NSString;

@interface BKSHIDEventDeferringResolution : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>
{
    BKSHIDEventDisplay *_display;	// 8 = 0x8
    BKSHIDEventDeferringEnvironment *_environment;	// 16 = 0x10
    long long _versionedPID;	// 24 = 0x18
    int _pid;	// 32 = 0x20
    BKSHIDEventDeferringToken *_token;	// 40 = 0x28
    NSString *_bundleIdentifier;	// 48 = 0x30
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000021a29
+ (id)build:(CDUnknownBlockType)arg1;	// IMP=0x00000000000219ce
- (void).cxx_destruct;	// IMP=0x0000000000021990
@property(readonly, copy, nonatomic) BKSHIDEventDeferringToken *token; // @synthesize token=_token;
@property(readonly, copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(readonly, nonatomic) long long versionedPID; // @synthesize versionedPID=_versionedPID;
@property(readonly, copy, nonatomic) BKSHIDEventDeferringEnvironment *environment; // @synthesize environment=_environment;
@property(readonly, copy, nonatomic) BKSHIDEventDisplay *display; // @synthesize display=_display;
- (id)description;	// IMP=0x00000000000218a7
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000217e7
- (unsigned long long)hash;	// IMP=0x000000000002177e
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000213b5
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000021304
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000212b0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000212a5
@property(readonly, nonatomic) int pid; // @synthesize pid=_pid;
- (id)_initWithDisplay:(id)arg1 environment:(id)arg2 versionedPID:(long long)arg3 pid:(int)arg4 token:(id)arg5;	// IMP=0x00000000000208c6
- (id)init;	// IMP=0x0000000000020798
- (id)modifiedResolution:(CDUnknownBlockType)arg1;	// IMP=0x0000000000020745

@end

