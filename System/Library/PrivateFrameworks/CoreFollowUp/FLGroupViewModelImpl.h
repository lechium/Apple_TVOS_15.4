//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreFollowUp/FLGroupViewModel-Protocol.h>

@class NSMutableArray, NSString;

@interface FLGroupViewModelImpl : NSObject <FLGroupViewModel>
{
    NSMutableArray *_mutableItems;	// 8 = 0x8
    _Bool _needsAccountID;	// 16 = 0x10
    NSString *_identifier;	// 24 = 0x18
    NSString *_rowTitle;	// 32 = 0x20
    NSString *_groupTitle;	// 40 = 0x28
    NSString *_accountID;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000000104db
@property(nonatomic) _Bool needsAccountID; // @synthesize needsAccountID=_needsAccountID;
@property(copy, nonatomic) NSString *accountID; // @synthesize accountID=_accountID;
@property(copy, nonatomic) NSString *groupTitle; // @synthesize groupTitle=_groupTitle;
@property(copy, nonatomic) NSString *rowTitle; // @synthesize rowTitle=_rowTitle;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (_Bool)shouldCoalesceItems;	// IMP=0x0000000000010355
- (_Bool)restrictionEnabled;	// IMP=0x000000000001034d
@property(readonly, copy) NSString *description;
- (id)_expirationOrInformativeText;	// IMP=0x000000000000fed9
- (id)subtitleText;	// IMP=0x000000000000fe87
- (id)footerText;	// IMP=0x000000000000fe35
- (void)addItem:(id)arg1;	// IMP=0x000000000000fdcb
- (id)items;	// IMP=0x000000000000fdad
- (id)initWithIdentifier:(id)arg1;	// IMP=0x000000000000fd53

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

