//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <VideoSubscriberAccountUI/UITableViewDataSource-Protocol.h>

@class NSArray, NSDictionary, NSString, UITableView;

__attribute__((visibility("hidden")))
@interface VSIdentityProviderTableViewDataSource : NSObject <UITableViewDataSource>
{
    UITableView *_tableView;	// 8 = 0x8
    NSArray *_identityProviders;	// 16 = 0x10
    unsigned long long _additionalProvidersMode;	// 24 = 0x18
    NSString *_requestedStorefrontCountryCode;	// 32 = 0x20
    NSArray *_tvProviderSupportedStorefronts;	// 40 = 0x28
    NSArray *_providerSections;	// 48 = 0x30
    NSArray *_storefrontSections;	// 56 = 0x38
    NSDictionary *_destinationsBySectionIndexTitle;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000000007b234
@property(copy, nonatomic) NSDictionary *destinationsBySectionIndexTitle; // @synthesize destinationsBySectionIndexTitle=_destinationsBySectionIndexTitle;
@property(copy, nonatomic) NSArray *storefrontSections; // @synthesize storefrontSections=_storefrontSections;
@property(copy, nonatomic) NSArray *providerSections; // @synthesize providerSections=_providerSections;
@property(copy, nonatomic) NSArray *tvProviderSupportedStorefronts; // @synthesize tvProviderSupportedStorefronts=_tvProviderSupportedStorefronts;
@property(nonatomic) NSString *requestedStorefrontCountryCode; // @synthesize requestedStorefrontCountryCode=_requestedStorefrontCountryCode;
@property(nonatomic) unsigned long long additionalProvidersMode; // @synthesize additionalProvidersMode=_additionalProvidersMode;
@property(copy, nonatomic) NSArray *identityProviders; // @synthesize identityProviders=_identityProviders;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x000000000007ae75
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x000000000007ad00
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x000000000007ac32
- (id)sectionIndexTitlesForTableView:(id)arg1;	// IMP=0x000000000007abaa
- (id)tableView:(id)arg1 indexPathForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3;	// IMP=0x000000000007a9e8
- (void)setNumberOfLinesForCell:(id)arg1 atIndexPath:(id)arg2;	// IMP=0x000000000007a9a6
- (void)_scrollToTableHeaderView;	// IMP=0x000000000007a8c6
- (id)_textColorForRowAtIndexPath:(id)arg1;	// IMP=0x000000000007a7ed
- (long long)_textAlignmentForRowAtIndexPath:(id)arg1;	// IMP=0x000000000007a78a
- (id)_titleForRowAtIndexPath:(id)arg1;	// IMP=0x000000000007a6bc
- (long long)_cellStyleForRowAtIndexPath:(id)arg1;	// IMP=0x000000000007a6b4
- (id)_cellReuseIdentifierForRowAtIndexPath:(id)arg1;	// IMP=0x000000000007a671
- (id)_additionalProvidersRowTitle;	// IMP=0x000000000007a585
- (id)storefrontAtIndexPath:(id)arg1;	// IMP=0x000000000007a49d
- (id)identityProviderForRowAtIndexPath:(id)arg1;	// IMP=0x000000000007a378
- (unsigned long long)_minimumProviderCountForIndexes;	// IMP=0x000000000007a1c8
- (id)init;	// IMP=0x000000000007930c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

