//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemonLegacy/NSCopying-Protocol.h>

@class NSData, WFHomeWorkflow, WFHomeWorkflowController;

@interface HMDShortcutAction <NSCopying>
{
    NSData *_shortcutData;	// 8 = 0x8
    WFHomeWorkflow *_shortcut;	// 16 = 0x10
    WFHomeWorkflowController *_controller;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000003499d
+ (id)logCategory;	// IMP=0x000000000003496d
+ (id)actionWithDictionaryRepresentation:(id)arg1 home:(id)arg2 actionSet:(id)arg3;	// IMP=0x00000000000346f9
+ (id)actionWithDictionaryRepresentation:(id)arg1 home:(id)arg2;	// IMP=0x00000000000346e4
- (void).cxx_destruct;	// IMP=0x0000000000030537
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000030492
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000003041b
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000030377
- (void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;	// IMP=0x0000000000030159
- (id)modelObjectWithChangeType:(unsigned long long)arg1 version:(long long)arg2;	// IMP=0x00000000000300b2
- (Class)modelClass;	// IMP=0x00000000000300a1
- (id)initWithModelObject:(id)arg1 parent:(id)arg2 error:(id *)arg3;	// IMP=0x000000000002fd93
- (id)associatedAccessories;	// IMP=0x000000000002fd86
- (_Bool)isAssociatedWithAccessory:(id)arg1;	// IMP=0x000000000002fd7e
- (unsigned long long)entitlementsForNotification;	// IMP=0x000000000002fd4b
- (_Bool)isUnsecuringAction;	// IMP=0x000000000002fce9
- (_Bool)requiresDeviceUnlock;	// IMP=0x000000000002fc87
- (void)executeWithSource:(unsigned long long)arg1 clientName:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000002f9cf
- (id)stateDump;	// IMP=0x000000000002f85f
- (id)dictionaryRepresentation;	// IMP=0x000000000002f74f
- (unsigned long long)type;	// IMP=0x000000000002f744
- (void)dealloc;	// IMP=0x000000000002f6f6
- (id)removeShortcut;	// IMP=0x000000000002f6ca
- (id)initWithSerializedShortcut:(id)arg1 uuid:(id)arg2 actionSet:(id)arg3;	// IMP=0x000000000002f617

@end

