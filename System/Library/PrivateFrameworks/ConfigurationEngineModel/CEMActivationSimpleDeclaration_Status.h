//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface CEMActivationSimpleDeclaration_Status
{
    NSArray *_statusInstalledConfigurations;	// 16 = 0x10
}

+ (id)buildRequiredOnly;	// IMP=0x0000000000010a38
+ (id)buildWithInstalledConfigurations:(id)arg1;	// IMP=0x00000000000109e2
+ (id)allowedReasons;	// IMP=0x00000000000109c9
+ (id)allowedStatusKeys;	// IMP=0x0000000000010926
- (void).cxx_destruct;	// IMP=0x0000000000010d84
@property(copy, nonatomic) NSArray *statusInstalledConfigurations; // @synthesize statusInstalledConfigurations=_statusInstalledConfigurations;
- (id)serializePayload;	// IMP=0x0000000000010cc1
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000010a51

@end

