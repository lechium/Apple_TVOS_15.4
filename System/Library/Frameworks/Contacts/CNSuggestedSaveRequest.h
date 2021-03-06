//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableSet, NSSet;

@interface CNSuggestedSaveRequest
{
    NSMutableSet *_mutableConfirmedSuggestions;	// 8 = 0x8
    NSMutableSet *_mutableRejectedSuggestions;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000a0426
@property(retain, nonatomic) NSMutableSet *mutableRejectedSuggestions; // @synthesize mutableRejectedSuggestions=_mutableRejectedSuggestions;
@property(retain, nonatomic) NSMutableSet *mutableConfirmedSuggestions; // @synthesize mutableConfirmedSuggestions=_mutableConfirmedSuggestions;
@property(readonly, copy, nonatomic) NSSet *rejectedSuggestions;
@property(readonly, copy, nonatomic) NSSet *confirmedSuggestions;
- (void)rejectSuggestion:(id)arg1;	// IMP=0x00000000000a0314
- (void)confirmSuggestion:(id)arg1;	// IMP=0x00000000000a0296
- (id)storeIdentifier;	// IMP=0x00000000000a027d

@end

