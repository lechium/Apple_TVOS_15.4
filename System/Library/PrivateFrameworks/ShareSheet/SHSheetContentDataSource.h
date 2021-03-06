//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDiffableDataSourceSnapshot, SHSheetContentDataSourceState, UIAirDropNode;

@interface SHSheetContentDataSource : NSObject
{
    unsigned int _nearbyCountSlotID;	// 8 = 0x8
    NSDiffableDataSourceSnapshot *_diffableSnapshot;	// 16 = 0x10
    NSArray *_peopleProxies;	// 24 = 0x18
    NSArray *_shareProxies;	// 32 = 0x20
    NSArray *_actionProxies;	// 40 = 0x28
    UIAirDropNode *_airDropProxy;	// 48 = 0x30
    SHSheetContentDataSourceState *_state;	// 56 = 0x38
    long long _excludeSectionTypes;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000006472
@property(readonly, nonatomic) long long excludeSectionTypes; // @synthesize excludeSectionTypes=_excludeSectionTypes;
@property(readonly, nonatomic) SHSheetContentDataSourceState *state; // @synthesize state=_state;
@property(readonly, nonatomic) UIAirDropNode *airDropProxy; // @synthesize airDropProxy=_airDropProxy;
@property(readonly, nonatomic) unsigned int nearbyCountSlotID; // @synthesize nearbyCountSlotID=_nearbyCountSlotID;
@property(readonly, copy, nonatomic) NSArray *actionProxies; // @synthesize actionProxies=_actionProxies;
@property(readonly, copy, nonatomic) NSArray *shareProxies; // @synthesize shareProxies=_shareProxies;
@property(readonly, copy, nonatomic) NSArray *peopleProxies; // @synthesize peopleProxies=_peopleProxies;
@property(readonly, nonatomic) NSDiffableDataSourceSnapshot *diffableSnapshot; // @synthesize diffableSnapshot=_diffableSnapshot;
- (id)_createDiffableSnapshotFromCurrentState;	// IMP=0x0000000000005afa
- (id)createChangeRequestFromCurrentState;	// IMP=0x0000000000005a97
- (id)activityForIdentifier:(id)arg1;	// IMP=0x00000000000059f6
- (id)actionProxyForIdentifier:(id)arg1;	// IMP=0x0000000000005955
- (id)shareProxyForIdentifier:(id)arg1;	// IMP=0x00000000000058b4
- (id)peopleProxyForIdentifier:(id)arg1;	// IMP=0x0000000000005813
- (_Bool)containsSectionForIdentifier:(id)arg1;	// IMP=0x000000000000577e
- (id)description;	// IMP=0x00000000000056b8
- (id)initWithState:(id)arg1 excludeSectionTypes:(long long)arg2;	// IMP=0x0000000000005539

@end

