//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKit/HMRemoteLoginMessageProtocol-Protocol.h>

@class AKAnisetteData, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface HMFetchAnisetteDataResponse <HMRemoteLoginMessageProtocol>
{
    AKAnisetteData *_anisetteData;	// 8 = 0x8
}

+ (id)xpcMessageName;	// IMP=0x000000000004a36e
+ (id)messageName;	// IMP=0x000000000004a361
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000004a359
+ (id)objWithMessage:(id)arg1;	// IMP=0x000000000004a1c2
+ (id)objWithDict:(id)arg1;	// IMP=0x000000000004a04d
- (void).cxx_destruct;	// IMP=0x000000000004a03a
@property(copy, nonatomic) AKAnisetteData *anisetteData; // @synthesize anisetteData=_anisetteData;
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000049f7d
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000049ee2
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSDictionary *messagePayload;
@property(readonly, copy, nonatomic) NSString *xpcMessageName;
@property(readonly, copy, nonatomic) NSString *messageName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

