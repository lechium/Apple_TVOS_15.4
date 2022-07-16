//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PHSuggestionMessageContext;

@interface PXCMMSuggestionsDataSourceContext : NSObject
{
    unsigned char _type;	// 8 = 0x8
    _Bool _shouldShowAccepted;	// 9 = 0x9
    PHSuggestionMessageContext *_messageContext;	// 16 = 0x10
    unsigned long long _matchingStrategy;	// 24 = 0x18
    long long _fetchLimit;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000472183
@property(nonatomic) long long fetchLimit; // @synthesize fetchLimit=_fetchLimit;
@property(nonatomic) _Bool shouldShowAccepted; // @synthesize shouldShowAccepted=_shouldShowAccepted;
@property(nonatomic) unsigned long long matchingStrategy; // @synthesize matchingStrategy=_matchingStrategy;
@property(retain, nonatomic) PHSuggestionMessageContext *messageContext; // @synthesize messageContext=_messageContext;
@property(readonly, nonatomic) unsigned char type; // @synthesize type=_type;
- (_Bool)supportsMatching;	// IMP=0x00000000004720a8
- (id)description;	// IMP=0x0000000000471f99
- (id)initWithType:(unsigned char)arg1;	// IMP=0x0000000000471f5e

@end

