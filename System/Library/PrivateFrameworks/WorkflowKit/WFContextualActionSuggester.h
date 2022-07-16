//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSUUID;

@interface WFContextualActionSuggester : NSObject
{
    NSUUID *_lastSuggestionSessionUUID;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000001d9186
@property(readonly, nonatomic) NSUUID *lastSuggestionSessionUUID; // @synthesize lastSuggestionSessionUUID=_lastSuggestionSessionUUID;
- (void)reportEvent:(unsigned long long)arg1 inContext:(id)arg2 involvingActions:(id)arg3;	// IMP=0x00000000001d9176
- (id)initialSuggestionsForContextIfApplicable:(id)arg1 numSuggestions:(unsigned long long)arg2;	// IMP=0x00000000001d9001
- (_Bool)shouldShowInitialSuggestionsForContext:(id)arg1;	// IMP=0x00000000001d8fb6
- (void)suggestActionsForContext:(id)arg1 numSuggestions:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000001d8e75
- (id)init;	// IMP=0x00000000001d8e27

@end

