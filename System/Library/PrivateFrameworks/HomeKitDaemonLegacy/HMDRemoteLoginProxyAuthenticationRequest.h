//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemonLegacy/HMRemoteLoginMessageProtocol-Protocol.h>

@class NSDictionary, NSString;

@interface HMDRemoteLoginProxyAuthenticationRequest <HMRemoteLoginMessageProtocol>
{
    NSString *_username;	// 16 = 0x10
    NSString *_rawPassword;	// 24 = 0x18
    NSString *_passwordToken;	// 32 = 0x20
    NSString *_altDSID;	// 40 = 0x28
}

+ (id)xpcMessageName;	// IMP=0x000000000032a313
+ (id)messageName;	// IMP=0x000000000032a306
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000032a2fe
+ (id)objWithMessage:(id)arg1;	// IMP=0x000000000032a167
+ (id)objWithDict:(id)arg1;	// IMP=0x0000000000329ff2
- (void).cxx_destruct;	// IMP=0x0000000000329f9f
@property(retain, nonatomic) NSString *altDSID; // @synthesize altDSID=_altDSID;
@property(retain, nonatomic) NSString *passwordToken; // @synthesize passwordToken=_passwordToken;
@property(retain, nonatomic) NSString *rawPassword; // @synthesize rawPassword=_rawPassword;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000329daa
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000329c64
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSDictionary *messagePayload;
@property(readonly, copy, nonatomic) NSString *xpcMessageName;
@property(readonly, copy, nonatomic) NSString *messageName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

