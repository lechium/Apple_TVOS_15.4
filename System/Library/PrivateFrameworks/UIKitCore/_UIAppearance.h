//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMapTable, NSMutableArray, _UIAppearanceCustomizableClassInfo;

__attribute__((visibility("hidden")))
@interface _UIAppearance : NSObject
{
    NSArray *_containerList;	// 8 = 0x8
    NSMutableArray *_appearanceInvocations;	// 16 = 0x10
    NSMapTable *_invocationSources;	// 24 = 0x18
    _UIAppearanceCustomizableClassInfo *_customizableClassInfo;	// 32 = 0x20
}

+ (void)_setInvalidatesViewsOnAppearanceChange:(_Bool)arg1;	// IMP=0x0000000000700a2e
+ (id)recursiveDescription;	// IMP=0x0000000000700826
+ (void)_appendDescriptionOfNode:(id)arg1 toString:(id)arg2 atLevel:(unsigned long long)arg3;	// IMP=0x0000000000700585
+ (_Bool)_hasCustomizationsForClass:(Class)arg1 guideClass:(Class)arg2;	// IMP=0x00000000006ffdd8
+ (id)_appearanceWithClassInfo:(id)arg1 containerList:(id)arg2;	// IMP=0x00000000006ff05d
+ (id)_newAppearanceWithClassInfo:(id)arg1 containerList:(id)arg2;	// IMP=0x00000000006ff012
+ (id)_appearanceNodeForClassInfo:(id)arg1 containerList:(id)arg2;	// IMP=0x00000000006fee40
+ (id)_appearanceForClass:(Class)arg1 withContainerList:(id)arg2;	// IMP=0x00000000006fedf7
+ (void)_applyInvocationsTo:(id)arg1 window:(id)arg2;	// IMP=0x00000000006fed8a
+ (void)_applyInvocationsTo:(id)arg1 window:(id)arg2 matchingSelector:(SEL)arg3;	// IMP=0x00000000006fed75
+ (void)_applyInvocationsTo:(id)arg1 window:(id)arg2 matchingSelector:(SEL)arg3 onlySystemInvocations:(_Bool)arg4;	// IMP=0x00000000006fd86a
+ (void)_removeInvocationsForSource:(id)arg1;	// IMP=0x00000000006fd674
+ (_Bool)_hasAnyCustomizations;	// IMP=0x00000000006fd663
+ (id)_rootAppearancesNode;	// IMP=0x00000000006fd627
+ (id)appearancesAtNode:(id)arg1 withObject:(id)arg2;	// IMP=0x00000000006fcff2
+ (id)_recordersExcludingSource:(id)arg1 withWindow:(id)arg2;	// IMP=0x00000000006fcb39
+ (id)_pendingRecordInvocationsForSource:(id)arg1;	// IMP=0x00000000006fca9f
+ (id)_recorderForSource:(id)arg1;	// IMP=0x00000000006fc879
+ (id)_windowsForSource:(id)arg1;	// IMP=0x00000000006fc860
+ (void)_removeWindow:(id)arg1 forSource:(id)arg2;	// IMP=0x00000000006fc825
+ (void)_addWindow:(id)arg1 forSource:(id)arg2;	// IMP=0x00000000006fc78d
+ (void)_setCurrentAppearanceSource:(id)arg1;	// IMP=0x00000000006fc757
+ (id)_currentAppearanceSource;	// IMP=0x00000000006fc74a
@property(readonly, nonatomic) _UIAppearanceCustomizableClassInfo *_customizableClassInfo; // @synthesize _customizableClassInfo;
- (void)_appendDescriptionToString:(id)arg1 atLevel:(unsigned long long)arg2;	// IMP=0x00000000006fffdf
- (id)description;	// IMP=0x00000000006fff45
- (void)_invalidateAppearanceInWindow:(id)arg1;	// IMP=0x00000000006ffda3
- (void)forwardInvocation:(id)arg1;	// IMP=0x00000000006ffd45
- (void)_handleGetterInvocation:(id)arg1;	// IMP=0x00000000006ff7b7
- (void)_handleSetterInvocation:(id)arg1;	// IMP=0x00000000006ff391
- (_Bool)_isRecordingInvocations;	// IMP=0x00000000006ff383
- (id)_traitCollection;	// IMP=0x00000000006ff37b
- (SEL)_beginListeningForAppearanceEventsForSetter:(SEL)arg1;	// IMP=0x00000000006ff115
- (id)methodSignatureForSelector:(SEL)arg1;	// IMP=0x00000000006ff0e0
- (void)dealloc;	// IMP=0x00000000006fed9f
- (void)_removeInvocationsForSource:(id)arg1;	// IMP=0x00000000006fd738
- (_Bool)_isValidAppearanceForCustomizableObject:(id)arg1;	// IMP=0x00000000006fcfea
- (id)_appearanceInvocations;	// IMP=0x00000000006fc740

@end
