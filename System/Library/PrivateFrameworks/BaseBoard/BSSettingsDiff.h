//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <BaseBoard/BSDescriptionProviding-Protocol.h>
#import <BaseBoard/BSXPCCoding-Protocol.h>
#import <BaseBoard/NSCopying-Protocol.h>
#import <BaseBoard/NSSecureCoding-Protocol.h>

@class BSMutableSettings, NSMutableSet, NSString;
@protocol BSSettingDescriptionProvider;

@interface BSSettingsDiff : NSObject <BSDescriptionProviding, NSCopying, NSSecureCoding, BSXPCCoding>
{
    BSMutableSettings *_changes;	// 8 = 0x8
    NSMutableSet *_flagRemovals;	// 16 = 0x10
    NSMutableSet *_objectRemovals;	// 24 = 0x18
    id <BSSettingDescriptionProvider> _descriptionProvider;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000064fc8
+ (id)diffFromSettings:(id)arg1 toSettings:(id)arg2;	// IMP=0x0000000000063ebe
- (void).cxx_destruct;	// IMP=0x0000000000065ff8
@property(nonatomic) __weak id <BSSettingDescriptionProvider> descriptionProvider; // @synthesize descriptionProvider=_descriptionProvider;
- (id)succinctDescriptionBuilder;	// IMP=0x0000000000065fbd
- (id)succinctDescription;	// IMP=0x0000000000065fa9
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x0000000000065a2f
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x00000000000659cb
@property(readonly, copy) NSString *description;
- (void)inspectChangesWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000065604
- (void)applyToSettings:(id)arg1;	// IMP=0x0000000000065492
@property(readonly, nonatomic) _Bool isEmpty;
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000006505c
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000064fd0
- (void)encodeWithXPCDictionary:(id)arg1;	// IMP=0x0000000000064a93
- (id)initWithXPCDictionary:(id)arg1;	// IMP=0x00000000000645f5
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000645ea
- (id)init;	// IMP=0x00000000000645da

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

