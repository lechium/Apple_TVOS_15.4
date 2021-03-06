//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKit/HMRemoteLoginMessageProtocol-Protocol.h>

@class AKAnisetteData, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface HMLegacyAnisetteDataResponse <HMRemoteLoginMessageProtocol>
{
    AKAnisetteData *_anisetteData;	// 8 = 0x8
}

+ (id)xpcMessageName;	// IMP=0x000000000004afa8
+ (id)messageName;	// IMP=0x000000000004af9b
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000004af93
+ (id)objWithMessage:(id)arg1;	// IMP=0x000000000004adfc
+ (id)objWithDict:(id)arg1;	// IMP=0x000000000004ac87
- (void).cxx_destruct;	// IMP=0x000000000004ac74
@property(copy, nonatomic) AKAnisetteData *anisetteData; // @synthesize anisetteData=_anisetteData;
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000004abb7
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000004ab1c
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSDictionary *messagePayload;
@property(readonly, copy, nonatomic) NSString *xpcMessageName;
@property(readonly, copy, nonatomic) NSString *messageName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

