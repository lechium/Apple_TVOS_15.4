//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/HMRemoteLoginMessageProtocol-Protocol.h>

@class AKAnisetteData, NSDictionary, NSString;

@interface HMFetchAnisetteDataResponse <HMRemoteLoginMessageProtocol>
{
    AKAnisetteData *_anisetteData;	// 8 = 0x8
}

+ (id)xpcMessageName;	// IMP=0x00000000000601b8
+ (id)messageName;	// IMP=0x00000000000601ab
+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000601a3
+ (id)objWithMessage:(id)arg1;	// IMP=0x000000000006000c
+ (id)objWithDict:(id)arg1;	// IMP=0x000000000005fe97
- (void).cxx_destruct;	// IMP=0x000000000005fe84
@property(copy, nonatomic) AKAnisetteData *anisetteData; // @synthesize anisetteData=_anisetteData;
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000005fdc7
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000005fd2c
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSDictionary *messagePayload;
@property(readonly, copy, nonatomic) NSString *xpcMessageName;
@property(readonly, copy, nonatomic) NSString *messageName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

