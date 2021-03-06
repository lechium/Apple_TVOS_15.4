//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WorkflowKit/WFAction.h>

#import <ActionKit/WFDynamicEnumerationDataSource-Protocol.h>

@class NSString;

@interface WFSearchiTunesAction : WFAction <WFDynamicEnumerationDataSource>
{
}

- (id)enumeration:(id)arg1 localizedLabelForPossibleState:(id)arg2;	// IMP=0x000000000031937a
- (id)possibleStatesForEnumeration:(id)arg1;	// IMP=0x00000000003190a2
- (id)defaultSerializedRepresentationForEnumeration:(id)arg1;	// IMP=0x0000000000318ed3
- (id)mediaType;	// IMP=0x0000000000318c04
- (_Bool)setParameterState:(id)arg1 forKey:(id)arg2;	// IMP=0x0000000000318ad3
- (void)runAsynchronouslyWithInput:(id)arg1;	// IMP=0x00000000003184dc
- (void)updateParameterVisibility;	// IMP=0x00000000003183c5
- (void)initializeParameters;	// IMP=0x00000000003181bf

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

