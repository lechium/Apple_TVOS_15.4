//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString, TVLHeaderWithCountAndButtonsElement, TVLInitialSelectionElement;

@interface TVLMediaBrowserElement
{
    TVLHeaderWithCountAndButtonsElement *_header;	// 8 = 0x8
    TVLInitialSelectionElement *_initialSelection;	// 16 = 0x10
    NSArray *_items;	// 24 = 0x18
    NSString *_gridLayout;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000001f1b6
@property(retain, nonatomic) NSString *gridLayout; // @synthesize gridLayout=_gridLayout;
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
@property(retain, nonatomic) TVLInitialSelectionElement *initialSelection; // @synthesize initialSelection=_initialSelection;
@property(retain, nonatomic) TVLHeaderWithCountAndButtonsElement *header; // @synthesize header=_header;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000001ef4a
- (id)initWithXMLElement:(id)arg1 feedDocument:(id)arg2;	// IMP=0x000000000001ec5b

@end

