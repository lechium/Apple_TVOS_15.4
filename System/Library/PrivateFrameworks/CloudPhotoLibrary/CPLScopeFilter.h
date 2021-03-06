//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSSet, NSString;

@interface CPLScopeFilter : NSObject
{
    NSSet *_includedScopeIdentifiers;	// 8 = 0x8
    NSSet *_excludedScopeIdentifiers;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000970b6
@property(readonly, nonatomic) NSSet *excludedScopeIdentifiers; // @synthesize excludedScopeIdentifiers=_excludedScopeIdentifiers;
@property(readonly, nonatomic) NSSet *includedScopeIdentifiers; // @synthesize includedScopeIdentifiers=_includedScopeIdentifiers;
@property(readonly, nonatomic) NSString *simpleDescription;
- (id)description;	// IMP=0x0000000000096e98
- (_Bool)filterOnScopeIdentifier:(id)arg1;	// IMP=0x0000000000096e33
- (id)initWithExcludedScopeIdentifiers:(id)arg1;	// IMP=0x0000000000096db5
- (id)initWithIncludedScopeIdentifiers:(id)arg1;	// IMP=0x0000000000096d37
- (id)_setOfScopeIdentifiersFromEnumeration:(id)arg1;	// IMP=0x0000000000096b9d

@end

