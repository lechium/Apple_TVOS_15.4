//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HMDAccessoryNetworkCredential, NSUUID;

@interface HMDHomeReprovisioningPendingInformation : NSObject
{
    NSUUID *_messageIdentifier;	// 8 = 0x8
    HMDAccessoryNetworkCredential *_networkCredential;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000005bcda0
@property(readonly) HMDAccessoryNetworkCredential *networkCredential; // @synthesize networkCredential=_networkCredential;
@property(readonly) NSUUID *messageIdentifier; // @synthesize messageIdentifier=_messageIdentifier;
- (id)initWithMessageUUID:(id)arg1 networkCredential:(id)arg2;	// IMP=0x00000000005bccdf

@end

