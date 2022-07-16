//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface CEMSystemDashboardDeclaration_WhiteListItem
{
    NSString *_payloadType;	// 16 = 0x10
    NSString *_payloadID;	// 24 = 0x18
}

+ (id)buildRequiredOnlyWithType:(id)arg1 withID:(id)arg2;	// IMP=0x00000000000b4be1
+ (id)buildWithType:(id)arg1 withID:(id)arg2;	// IMP=0x00000000000b4b55
+ (id)allowedPayloadKeys;	// IMP=0x00000000000b4aa7
- (void).cxx_destruct;	// IMP=0x00000000000b4fe5
@property(copy, nonatomic) NSString *payloadID; // @synthesize payloadID=_payloadID;
@property(copy, nonatomic) NSString *payloadType; // @synthesize payloadType=_payloadType;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000b4f0c
- (id)serializePayloadWithAssetProviders:(id)arg1;	// IMP=0x00000000000b4e4f
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000b4c6d

@end
