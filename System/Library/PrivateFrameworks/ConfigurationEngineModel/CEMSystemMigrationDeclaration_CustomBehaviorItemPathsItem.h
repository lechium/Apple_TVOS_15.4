//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSNumber, NSString;

@interface CEMSystemMigrationDeclaration_CustomBehaviorItemPathsItem
{
    NSString *_payloadSourcePath;	// 16 = 0x10
    NSNumber *_payloadSourcePathInUserHome;	// 24 = 0x18
    NSString *_payloadTargetPath;	// 32 = 0x20
    NSNumber *_payloadTargetPathInUserHome;	// 40 = 0x28
}

+ (id)buildRequiredOnlyWithSourcePath:(id)arg1 withSourcePathInUserHome:(id)arg2 withTargetPath:(id)arg3 withTargetPathInUserHome:(id)arg4;	// IMP=0x00000000000bef15
+ (id)buildWithSourcePath:(id)arg1 withSourcePathInUserHome:(id)arg2 withTargetPath:(id)arg3 withTargetPathInUserHome:(id)arg4;	// IMP=0x00000000000bee37
+ (id)allowedPayloadKeys;	// IMP=0x00000000000bed73
- (void).cxx_destruct;	// IMP=0x00000000000bf552
@property(copy, nonatomic) NSNumber *payloadTargetPathInUserHome; // @synthesize payloadTargetPathInUserHome=_payloadTargetPathInUserHome;
@property(copy, nonatomic) NSString *payloadTargetPath; // @synthesize payloadTargetPath=_payloadTargetPath;
@property(copy, nonatomic) NSNumber *payloadSourcePathInUserHome; // @synthesize payloadSourcePathInUserHome=_payloadSourcePathInUserHome;
@property(copy, nonatomic) NSString *payloadSourcePath; // @synthesize payloadSourcePath=_payloadSourcePath;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000bf3f5
- (id)serializePayloadWithAssetProviders:(id)arg1;	// IMP=0x00000000000bf2e0
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000beff3

@end

