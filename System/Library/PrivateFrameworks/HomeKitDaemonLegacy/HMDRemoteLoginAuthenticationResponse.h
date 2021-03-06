//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemonLegacy/HMRemoteLoginMessageProtocol-Protocol.h>

@class ACAccount, NSDictionary, NSString;

@interface HMDRemoteLoginAuthenticationResponse <HMRemoteLoginMessageProtocol>
{
    ACAccount *_loggedInAccount;	// 8 = 0x8
}

+ (id)xpcMessageName;	// IMP=0x000000000032a94c
+ (id)messageName;	// IMP=0x000000000032a93f
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000032a937
+ (id)objWithMessage:(id)arg1;	// IMP=0x000000000032a7a0
+ (id)objWithDict:(id)arg1;	// IMP=0x000000000032a62b
- (void).cxx_destruct;	// IMP=0x000000000032a618
@property(retain, nonatomic) ACAccount *loggedInAccount; // @synthesize loggedInAccount=_loggedInAccount;
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000032a558
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000032a473
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSDictionary *messagePayload;
@property(readonly, copy, nonatomic) NSString *xpcMessageName;
@property(readonly, copy, nonatomic) NSString *messageName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

