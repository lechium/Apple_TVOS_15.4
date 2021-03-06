//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface CEMNSExtensionsMappingsNSExtensionsCommand_StatusExtensionsItem
{
    NSString *_statusIdentifier;	// 16 = 0x10
    NSString *_statusExtensionPoint;	// 24 = 0x18
    NSString *_statusDisplayName;	// 32 = 0x20
}

+ (id)buildRequiredOnlyWithIdentifier:(id)arg1 withExtensionPoint:(id)arg2 withDisplayName:(id)arg3;	// IMP=0x000000000008400d
+ (id)buildWithIdentifier:(id)arg1 withExtensionPoint:(id)arg2 withDisplayName:(id)arg3;	// IMP=0x0000000000083f59
+ (id)allowedStatusKeys;	// IMP=0x0000000000083ea0
- (void).cxx_destruct;	// IMP=0x000000000008461d
@property(copy, nonatomic) NSString *statusDisplayName; // @synthesize statusDisplayName=_statusDisplayName;
@property(copy, nonatomic) NSString *statusExtensionPoint; // @synthesize statusExtensionPoint=_statusExtensionPoint;
@property(copy, nonatomic) NSString *statusIdentifier; // @synthesize statusIdentifier=_statusIdentifier;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000084505
- (id)serializePayload;	// IMP=0x0000000000084420
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000840c1

@end

