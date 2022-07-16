//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDRemoteLoginAuthentication, NSString;

@interface HMDRemoteLoginReceiverSession : HMFObject
{
    NSString *_sessionID;	// 8 = 0x8
    HMDRemoteLoginAuthentication *_remoteAuthentication;	// 16 = 0x10
    CDUnknownBlockType _completion;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000218f68
@property(readonly, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(readonly, nonatomic) HMDRemoteLoginAuthentication *remoteAuthentication; // @synthesize remoteAuthentication=_remoteAuthentication;
@property(readonly, nonatomic) NSString *sessionID; // @synthesize sessionID=_sessionID;
- (id)description;	// IMP=0x0000000000218ec9
- (void)dealloc;	// IMP=0x0000000000218dd9
- (id)initWithSessionID:(id)arg1 remoteAuthentication:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000218d07

@end

