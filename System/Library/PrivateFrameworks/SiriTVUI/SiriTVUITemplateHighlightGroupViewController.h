//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class SiriTVUIHighlightGroupViewTemplateItem, SiriTVUITemplateHighlightGroupView, SiriTVUITemplateItemViewController;

@interface SiriTVUITemplateHighlightGroupViewController
{
    SiriTVUITemplateItemViewController *_currentViewController;	// 8 = 0x8
    long long _selectedIndex;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000000d2ff
@property(nonatomic) long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
- (_Bool)supportsSwipeDismissal;	// IMP=0x000000000000d2d1
- (void)templateItemViewController:(id)arg1 didHighlightTemplateItem:(id)arg2 atIndexPath:(id)arg3 hasStopped:(_Bool)arg4;	// IMP=0x000000000000ce86
- (void)loadView;	// IMP=0x000000000000cd6b

// Remaining properties
@property(retain, nonatomic) SiriTVUIHighlightGroupViewTemplateItem *templateItem; // @dynamic templateItem;
@property(retain, nonatomic) SiriTVUITemplateHighlightGroupView *view; // @dynamic view;

@end
