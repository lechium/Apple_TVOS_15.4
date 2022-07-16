//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <FrontBoardServices/BSSettingDescriptionProvider-Protocol.h>
#import <FrontBoardServices/BSXPCCoding-Protocol.h>

@class BSSettings, BSSettingsDiff, NSString;

@interface FBSSettingsDiff : NSObject <BSXPCCoding, BSSettingDescriptionProvider>
{
    BSSettings *_changes;	// 8 = 0x8
    BSSettingsDiff *_otherSettingsDiff;	// 16 = 0x10
    Class _settingsClass;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000280df
- (id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3;	// IMP=0x00000000000280d7
- (id)keyDescriptionForSetting:(unsigned long long)arg1;	// IMP=0x00000000000280cf
- (id)settings:(id)arg1 valueDescriptionForFlag:(long long)arg2 object:(id)arg3 ofSetting:(unsigned long long)arg4;	// IMP=0x000000000002809a
- (id)settings:(id)arg1 keyDescriptionForSetting:(unsigned long long)arg2;	// IMP=0x000000000002806b
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x0000000000027df9
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x0000000000027da9
- (id)succinctDescriptionBuilder;	// IMP=0x0000000000027d8d
- (id)succinctDescription;	// IMP=0x0000000000027d3d
- (void)encodeWithXPCDictionary:(id)arg1;	// IMP=0x0000000000027cb6
- (id)initWithXPCDictionary:(id)arg1;	// IMP=0x0000000000027bf4
- (id)settingsByApplyingToMutableCopyOfSettings:(id)arg1;	// IMP=0x00000000000709ee
- (void)inspectOtherChangesWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000027b55
- (void)inspectChangesWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000027a90
@property(readonly, copy) NSString *description;
- (void)evaluateWithInspector:(id)arg1 context:(void *)arg2;	// IMP=0x0000000000027a61
- (void)dealloc;	// IMP=0x0000000000027a02
- (id)init;	// IMP=0x00000000000279e9
- (id)_initWithChanges:(id)arg1 otherSettingsDiff:(id)arg2 settingsClass:(Class)arg3;	// IMP=0x0000000000027930
- (id)initWithChanges:(id)arg1 fromSettings:(id)arg2 toSettings:(id)arg3;	// IMP=0x00000000000277fd

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

