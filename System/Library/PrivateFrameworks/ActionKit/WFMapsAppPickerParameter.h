//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WorkflowKit/WFEnumerationParameter.h>

#import <ActionKit/ICAppInstallStatusObserver-Protocol.h>

@class NSArray, NSOrderedSet;

@interface WFMapsAppPickerParameter : WFEnumerationParameter <ICAppInstallStatusObserver>
{
    NSArray *_possibleStates;	// 8 = 0x8
    NSOrderedSet *_supportedAppIdentifiers;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000001dff1d
@property(readonly, nonatomic) NSOrderedSet *supportedAppIdentifiers; // @synthesize supportedAppIdentifiers=_supportedAppIdentifiers;
- (id)possibleStates;	// IMP=0x00000000001dfefb
- (void)appRegistry:(id)arg1 installStatusChangedForApp:(id)arg2;	// IMP=0x00000000001dfee9
- (void)removeObservers;	// IMP=0x00000000001dfe49
- (void)addObservers;	// IMP=0x00000000001dfda9
- (void)refreshInstalledApps;	// IMP=0x00000000001dfc6c
- (id)localizedLabelForPossibleState:(id)arg1;	// IMP=0x00000000001dfc22
- (id)possibleStatesForLocalization;	// IMP=0x00000000001dfbc4
- (void)dealloc;	// IMP=0x00000000001dfb86
- (void)wasRemovedFromWorkflow;	// IMP=0x00000000001dfb45
- (void)wasAddedToWorkflow;	// IMP=0x00000000001dfaef
- (id)initWithDefinition:(id)arg1;	// IMP=0x00000000001df8c5

@end

