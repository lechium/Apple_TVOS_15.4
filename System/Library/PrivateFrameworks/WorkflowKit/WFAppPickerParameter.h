//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WorkflowKit/WFDynamicEnumerationDataSource-Protocol.h>

@class NSString;

@interface WFAppPickerParameter <WFDynamicEnumerationDataSource>
{
    _Bool _useLegacyIdentifiers;	// 8 = 0x8
    long long _appSearchType;	// 16 = 0x10
}

@property(readonly, nonatomic) _Bool useLegacyIdentifiers; // @synthesize useLegacyIdentifiers=_useLegacyIdentifiers;
@property(readonly, nonatomic) long long appSearchType; // @synthesize appSearchType=_appSearchType;
- (id)stateForRecord:(id)arg1;	// IMP=0x00000000001030fb
- (id)enumeration:(id)arg1 accessoryImageForPossibleState:(id)arg2;	// IMP=0x0000000000102fcb
- (id)enumeration:(id)arg1 accessoryIconForPossibleState:(id)arg2;	// IMP=0x0000000000102f18
- (id)enumeration:(id)arg1 localizedLabelForPossibleState:(id)arg2;	// IMP=0x0000000000102ebb
- (void)loadPossibleStatesForEnumeration:(id)arg1 searchTerm:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000102e0e
- (_Bool)enumerationShouldProvideValuesForParameterSummaryLocalization:(id)arg1;	// IMP=0x0000000000102e06
- (id)initWithDefinition:(id)arg1;	// IMP=0x0000000000102c6c
- (Class)singleStateClass;	// IMP=0x0000000000102c5b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

