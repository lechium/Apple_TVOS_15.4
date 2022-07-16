//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSNumber, NSString;

@interface CEMSecurityInformationCommand_StatusSecurityInfoFirewallSettingsApplicationsItem
{
    NSNumber *_statusAllowed;	// 16 = 0x10
    NSString *_statusBundleID;	// 24 = 0x18
    NSString *_statusName;	// 32 = 0x20
}

+ (id)buildRequiredOnly;	// IMP=0x00000000000a3f2b
+ (id)buildWithAllowed:(id)arg1 withBundleID:(id)arg2 withName:(id)arg3;	// IMP=0x00000000000a3e77
+ (id)allowedStatusKeys;	// IMP=0x00000000000a3dbe
- (void).cxx_destruct;	// IMP=0x00000000000a4487
@property(copy, nonatomic) NSString *statusName; // @synthesize statusName=_statusName;
@property(copy, nonatomic) NSString *statusBundleID; // @synthesize statusBundleID=_statusBundleID;
@property(copy, nonatomic) NSNumber *statusAllowed; // @synthesize statusAllowed=_statusAllowed;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000a436f
- (id)serializePayload;	// IMP=0x00000000000a428f
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000a3f44

@end

