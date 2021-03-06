//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVOutputDeviceAuthorizedPeerInternal, NSData, NSString;

@interface AVOutputDeviceAuthorizedPeer : NSObject
{
    AVOutputDeviceAuthorizedPeerInternal *_ivars;	// 8 = 0x8
}

@property(readonly, nonatomic) _Bool hasAdministratorPrivileges;
@property(readonly, nonatomic) NSData *publicKey;
@property(readonly, nonatomic) NSString *peerID;
- (unsigned long long)hash;	// IMP=0x00000000000c3173
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000c30ae
- (void)dealloc;	// IMP=0x00000000000c304d
- (id)initWithID:(id)arg1 publicKey:(id)arg2 hasAdministratorPrivileges:(_Bool)arg3;	// IMP=0x00000000000c2f85
- (id)init;	// IMP=0x00000000000c2f6c

@end

