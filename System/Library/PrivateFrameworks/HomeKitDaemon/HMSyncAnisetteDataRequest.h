//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/HMRemoteLoginMessageProtocol-Protocol.h>

@class NSData, NSDictionary, NSString;

@interface HMSyncAnisetteDataRequest <HMRemoteLoginMessageProtocol>
{
    NSData *_simData;	// 8 = 0x8
}

+ (id)xpcMessageName;	// IMP=0x000000000005e58f
+ (id)messageName;	// IMP=0x000000000005e582
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000005e57a
+ (id)objWithMessage:(id)arg1;	// IMP=0x000000000005e3e3
+ (id)objWithDict:(id)arg1;	// IMP=0x000000000005e26e
- (void).cxx_destruct;	// IMP=0x000000000005e25b
@property(copy, nonatomic) NSData *simData; // @synthesize simData=_simData;
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000005e19e
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000005e103
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSDictionary *messagePayload;
@property(readonly, copy, nonatomic) NSString *xpcMessageName;
@property(readonly, copy, nonatomic) NSString *messageName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

