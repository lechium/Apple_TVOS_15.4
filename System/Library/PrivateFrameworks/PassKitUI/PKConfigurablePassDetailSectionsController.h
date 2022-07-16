//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitUI/PKTableViewSectionController-Protocol.h>

@class NSArray, NSDictionary, NSString;
@protocol PKConfigurablePassDetailSectionsControllerDelegate;

@interface PKConfigurablePassDetailSectionsController : NSObject <PKTableViewSectionController>
{
    NSDictionary *_sectionMap;	// 8 = 0x8
    NSDictionary *_fieldMap;	// 16 = 0x10
    _Bool _redactFieldValues;	// 24 = 0x18
    _Bool _useBridgeStyle;	// 25 = 0x19
    _Bool _isShowingSecureInformation;	// 26 = 0x1a
    NSArray *_sectionIdentifiers;	// 32 = 0x20
    id <PKConfigurablePassDetailSectionsControllerDelegate> _delegate;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000002d4b66
@property(nonatomic) _Bool isShowingSecureInformation; // @synthesize isShowingSecureInformation=_isShowingSecureInformation;
@property(nonatomic) _Bool useBridgeStyle; // @synthesize useBridgeStyle=_useBridgeStyle;
@property(nonatomic) __weak id <PKConfigurablePassDetailSectionsControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSArray *sectionIdentifiers; // @synthesize sectionIdentifiers=_sectionIdentifiers;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 sectionIdentifier:(id)arg3;	// IMP=0x00000000002d48e1
- (_Bool)shouldHighlightRowAtIndexPath:(id)arg1 sectionIdentifier:(id)arg2;	// IMP=0x00000000002d4835
- (id)titleForFooterInSectionIdentifier:(id)arg1;	// IMP=0x00000000002d47e1
- (id)titleForHeaderInSectionIdentifier:(id)arg1;	// IMP=0x00000000002d478d
- (id)_infoCellWithPrimaryText:(id)arg1 detailText:(id)arg2 cellStyle:(long long)arg3 forTableView:(id)arg4;	// IMP=0x00000000002d457c
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 sectionIdentifier:(id)arg3;	// IMP=0x00000000002d42ff
- (long long)tableView:(id)arg1 numberOfRowsInSectionIdentifier:(id)arg2;	// IMP=0x00000000002d42b4
- (void)applicationWillResignActive;	// IMP=0x00000000002d4232
- (void)applicationDidBecomeActive;	// IMP=0x00000000002d41b0
@property(readonly, nonatomic) NSArray *activePassDetailSections;
- (_Bool)hasArbitraryInfoField:(id)arg1;	// IMP=0x00000000002d4192
- (id)_initWithPaymentPass:(id)arg1 visibleSectionIdentifiers:(id)arg2 renderUnclaimedFields:(_Bool)arg3;	// IMP=0x00000000002d34b9
- (id)initWithPaymentPass:(id)arg1 forSelectSections:(id)arg2;	// IMP=0x00000000002d3420
- (id)initWithPaymentPass:(id)arg1;	// IMP=0x00000000002d3406
- (id)init;	// IMP=0x00000000002d33f8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

