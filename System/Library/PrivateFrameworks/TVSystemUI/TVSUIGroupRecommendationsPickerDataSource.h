//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSSet;

@interface TVSUIGroupRecommendationsPickerDataSource
{
    NSSet *_userPickerSelectedUserIdentifiers;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000004af54
@property(copy, nonatomic) NSSet *userPickerSelectedUserIdentifiers; // @synthesize userPickerSelectedUserIdentifiers=_userPickerSelectedUserIdentifiers;
- (void)removeUserFromSelectionWithIdentifier:(id)arg1;	// IMP=0x000000000004aead
- (void)addUserToSelectionWithIdentifier:(id)arg1;	// IMP=0x000000000004ae28
- (id)init;	// IMP=0x000000000004ac39

@end
