//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WorkflowKit/WFDynamicEnumerationDataSource-Protocol.h>

@class ALCityManager, NSArray, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface WFTimeZonePickerParameter <WFDynamicEnumerationDataSource>
{
    NSObject<OS_dispatch_queue> *_stateQueue;	// 8 = 0x8
    NSArray *_calendarStates;	// 16 = 0x10
    ALCityManager *_cityManager;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000c9ac2
@property(retain, nonatomic) ALCityManager *cityManager; // @synthesize cityManager=_cityManager;
@property(retain, nonatomic) NSArray *calendarStates; // @synthesize calendarStates=_calendarStates;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *stateQueue; // @synthesize stateQueue=_stateQueue;
- (id)enumeration:(id)arg1 localizedLabelForPossibleState:(id)arg2;	// IMP=0x00000000000c9840
- (void)loadPossibleStatesForEnumeration:(id)arg1 searchTerm:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000c978f
- (id)initWithDefinition:(id)arg1;	// IMP=0x00000000000c958c
- (Class)singleStateClass;	// IMP=0x00000000000c957b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

