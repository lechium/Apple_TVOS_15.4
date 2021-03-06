//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CEMAnyPayload, NSNumber, NSString;

@interface CEMDeviceDockDeclaration_StaticItemTileData
{
    NSString *_payloadLabel;	// 16 = 0x10
    NSString *_payloadUrl;	// 24 = 0x18
    NSNumber *_payloadFileType;	// 32 = 0x20
    CEMAnyPayload *_payloadFileData;	// 40 = 0x28
}

+ (id)buildRequiredOnlyWithLabel:(id)arg1 withFileType:(id)arg2;	// IMP=0x0000000000039013
+ (id)buildWithLabel:(id)arg1 withUrl:(id)arg2 withFileType:(id)arg3 withFileData:(id)arg4;	// IMP=0x0000000000038f35
+ (id)allowedPayloadKeys;	// IMP=0x0000000000038e71
- (void).cxx_destruct;	// IMP=0x0000000000039608
@property(copy, nonatomic) CEMAnyPayload *payloadFileData; // @synthesize payloadFileData=_payloadFileData;
@property(copy, nonatomic) NSNumber *payloadFileType; // @synthesize payloadFileType=_payloadFileType;
@property(copy, nonatomic) NSString *payloadUrl; // @synthesize payloadUrl=_payloadUrl;
@property(copy, nonatomic) NSString *payloadLabel; // @synthesize payloadLabel=_payloadLabel;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000394ab
- (id)serializePayloadWithAssetProviders:(id)arg1;	// IMP=0x0000000000039378
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;	// IMP=0x000000000003909f

@end

