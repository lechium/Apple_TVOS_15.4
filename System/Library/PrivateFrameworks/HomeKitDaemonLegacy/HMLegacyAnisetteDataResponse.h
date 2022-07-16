//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemonLegacy/HMRemoteLoginMessageProtocol-Protocol.h>

@class AKAnisetteData, NSDictionary, NSString;

@interface HMLegacyAnisetteDataResponse <HMRemoteLoginMessageProtocol>
{
    AKAnisetteData *_anisetteData;	// 8 = 0x8
}

+ (id)xpcMessageName;	// IMP=0x000000000005c8d6
+ (id)messageName;	// IMP=0x000000000005c8c9
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000005c8c1
+ (id)objWithMessage:(id)arg1;	// IMP=0x000000000005c72a
+ (id)objWithDict:(id)arg1;	// IMP=0x000000000005c5b5
- (void).cxx_destruct;	// IMP=0x000000000005c5a2
@property(copy, nonatomic) AKAnisetteData *anisetteData; // @synthesize anisetteData=_anisetteData;
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000005c4e5
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000005c44a
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSDictionary *messagePayload;
@property(readonly, copy, nonatomic) NSString *xpcMessageName;
@property(readonly, copy, nonatomic) NSString *messageName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

