//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Cards/CRCardSectionViewAppearanceFeedback-Protocol.h>

@class NSString, SFFeedback;
@protocol CRCardSection;

@interface CRBasicCardSectionViewAppearanceFeedback : NSObject <CRCardSectionViewAppearanceFeedback>
{
    id <CRCardSection> _cardSection;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000040cb
@property(retain, nonatomic) id <CRCardSection> cardSection; // @synthesize cardSection=_cardSection;

// Remaining properties
@property(readonly, nonatomic) SFFeedback *backingFeedback;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

