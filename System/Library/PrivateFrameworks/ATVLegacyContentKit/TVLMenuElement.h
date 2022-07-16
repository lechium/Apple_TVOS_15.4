//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ATVLegacyContentKit/TVLSectionedMenuElement-Protocol.h>

@class NSArray, NSString, TVLInitialSelectionElement;

@interface TVLMenuElement <TVLSectionedMenuElement>
{
    NSArray *_sections;	// 8 = 0x8
    TVLInitialSelectionElement *_initialSelection;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000966c4
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) TVLInitialSelectionElement *initialSelection;
@property(retain, nonatomic) NSArray *sections;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000964cf
- (id)initWithXMLElement:(id)arg1 parentFeedElement:(id)arg2;	// IMP=0x00000000000961eb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
